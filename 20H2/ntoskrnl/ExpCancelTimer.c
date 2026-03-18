/*
 * XREFs of ExpCancelTimer @ 0x14028A550
 * Callers:
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x1402D5F9C (ExTimerRundown.c)
 * Callees:
 *     KiCancelTimer @ 0x14021E0C0 (KiCancelTimer.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KeRemoveQueueApc @ 0x1403240DC (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // edi
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v7; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // edx
  bool v13; // zf

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[70]);
    Flink = a1[3].TimerListEntry.Flink;
    v7 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v7->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v7->Flink = Flink;
    Flink->Blink = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[70]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v1 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KiCancelTimer((__int64)a1, 1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  result = v1;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}

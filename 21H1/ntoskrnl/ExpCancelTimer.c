/*
 * XREFs of ExpCancelTimer @ 0x14033F390
 * Callers:
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x140356004 (ExTimerRundown.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeRemoveQueueApc @ 0x14033EBA0 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // edi
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf

  v4 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[70]);
    Flink = a1[3].TimerListEntry.Flink;
    v10 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v10->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v10->Flink = Flink;
    Flink->Blink = v10;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[70]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v4 = 1;
    }
    if ( KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead, v11, v12, v13) )
      ++v4;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    LOBYTE(a2) = 1;
    KiCancelTimer((__int64)a1, a2, a3, (__int64)SchedulerAssist);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  result = v4;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}

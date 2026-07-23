/*
 * XREFs of KeSuspendClockTimerSafe @ 0x140514030
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1409AE2AC (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v2; // rbx
  int v3; // ebp
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v11; // edi

  if ( ObGetCurrentIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v11 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = off_140C00888[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v11 )
      ++dword_140C31B88;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x3FFC;
    }
    v2 = KeGetCurrentPrcb();
    v3 = KiClockTimerOwner;
    if ( (v2->PendingTickFlags & 1) != 0 )
    {
      off_140C00888[0]();
      v2->PendingTickFlags &= ~1u;
    }
    if ( v2->Number == v3 )
      ++dword_140C31B88;
    if ( v2->ClockOwner )
      v2->ClockOwner = 0;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v4 = KeGetCurrentIrql();
        if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
        {
          v5 = KeGetCurrentPrcb();
          v6 = v5->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v7 & v6[5]) == 0;
          v6[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)v5);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

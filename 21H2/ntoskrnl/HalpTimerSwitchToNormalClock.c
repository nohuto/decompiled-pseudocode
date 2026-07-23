/*
 * XREFs of HalpTimerSwitchToNormalClock @ 0x1404BF8B8
 * Callers:
 *     HalpTimerClockArm @ 0x1402F2430 (HalpTimerClockArm.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4A10 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerClockArm @ 0x1402F2430 (HalpTimerClockArm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSwitchToNormalClock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InternalData; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v6 + 136))(InternalData);
  CurrentPrcb->PendingTickFlags &= ~2u;
  if ( a1 && HalpTimerClockStatePeriodic )
    HalpTimerClockArm(0, (unsigned int)KiLastRequestedTimeIncrement, (__int64)&v14, v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

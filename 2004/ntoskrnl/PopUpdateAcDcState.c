/*
 * XREFs of PopUpdateAcDcState @ 0x1403970DC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCurrentPowerState @ 0x14064B18C (PopCurrentPowerState.c)
 *     PopDiagTraceAcDcStateChange @ 0x1408E4DC4 (PopDiagTraceAcDcStateChange.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v10, 0, 32);
  if ( dword_140C238AC == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  dword_140C238AC = a1;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  v2 = 1;
  PopCurrentPowerState(v10);
  PopDiagTraceAcDcStateChange(a1, v10[3], v10[2]);
  return v2;
}

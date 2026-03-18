/*
 * XREFs of PpmCheckCustomRun @ 0x14037CE48
 * Callers:
 *     PoLatencySensitivityHint @ 0x14037D8D0 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140381A30 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x1403C09D0 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C17F8 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1405751F0 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x14057C004 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1407763A0 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14077736C (PpmCheckApplyPerfConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x1402888C0 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  PpmCheckStart(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}

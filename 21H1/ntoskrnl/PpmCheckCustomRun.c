/*
 * XREFs of PpmCheckCustomRun @ 0x14037A398
 * Callers:
 *     PoLatencySensitivityHint @ 0x14037AE20 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14037F310 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x1403BE3C0 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x1403BF1E8 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x140571170 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x140577F84 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1407659B0 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14076697C (PpmCheckApplyPerfConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x140277FD0 (PpmCheckStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  int v8; // eax
  bool v9; // zf

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
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v3 = (__int64)CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & *(_DWORD *)(v3 + 20)) == 0;
        v2 = (unsigned int)v8 & *(_DWORD *)(v3 + 20);
        *(_DWORD *)(v3 + 20) = v2;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, (__int64)CurrentPrcb);
}

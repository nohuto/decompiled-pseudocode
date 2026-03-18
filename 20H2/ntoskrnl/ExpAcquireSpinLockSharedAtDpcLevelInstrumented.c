/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254
 * Callers:
 *     ExpAddTagForBigPages @ 0x140211B40 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1402D2E60 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405A99C8 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // esi
  int v4; // r15d
  char v7; // di
  unsigned __int64 v8; // rax
  int InterruptCount; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v8;
  }
  else
  {
    v7 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[6];
      SchedulerAssist[6] = v11 + 1;
      if ( v11 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  LOBYTE(v12) = ExpTryAcquireSpinLockShared(a1);
  if ( !(_BYTE)v12 )
  {
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[6] - 1;
        v16[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    LOBYTE(v13) = a2;
    v12 = ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)a1, v13, v14, v15);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
  }
  if ( v7 )
  {
    v18 = __rdtsc();
    LOBYTE(v12) = PerfLogSpinLockAcquire((__int64)a1, v18, v18 - v4, v3, InterruptCount, 2);
  }
  return v12;
}

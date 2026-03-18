/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20
 * Callers:
 *     ExpAddTagForBigPages @ 0x140214C50 (ExpAddTagForBigPages.c)
 *     MiAllocateCombineProto @ 0x14026AB70 (MiAllocateCombineProto.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiEndingOffsetWithLock @ 0x14033DFC0 (MiEndingOffsetWithLock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x140632C48 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // esi
  int v6; // r15d
  char v7; // r12
  char v9; // bp
  unsigned __int64 v10; // rax
  unsigned int InterruptCount; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  __int64 result; // rax
  signed __int32 v15; // ett
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    v6 = v10;
  }
  else
  {
    v9 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[6];
      SchedulerAssist[6] = v13 + 1;
      if ( v13 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  _m_prefetchw(a1);
  v15 = *a1 & 0x7FFFFFFF;
  result = (unsigned int)_InterlockedCompareExchange(a1, v15 + 1, v15);
  if ( v15 != (_DWORD)result )
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
    LOBYTE(a2) = v7;
    result = ExpWaitForSpinLockSharedAndAcquire(a1, a2, a3, a4);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v9 )
  {
    v18 = __rdtsc();
    return PerfLogSpinLockAcquire((_DWORD)a1, v18, (int)v18 - v6, v5, InterruptCount, 2);
  }
  return result;
}

/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140266B40
 * Callers:
 *     MmGetAvailablePagesBelowPriority @ 0x1402633C4 (MmGetAvailablePagesBelowPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x140266644 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1402669CC (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x140266AD0 (MiPrefetchNormally.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140266C0C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeZeroClusterMaximum @ 0x140284D20 (MiComputeZeroClusterMaximum.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x14033E280 (MiGetHardFaultPages.c)
 *     MiTrimWorkingSetTail @ 0x1403737D0 (MiTrimWorkingSetTail.c)
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x14037432C (MiForcedTrim.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1407F95AC (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = a1 + 360;
  v3 = a1[312] + a1[328];
  v4 = (unsigned __int64)&a1[11 * a2 + 360];
  if ( (unsigned __int64)(a1 + 360) < v4 )
  {
    do
    {
      v5 = *v2;
      v2 += 11;
      v3 += v5;
    }
    while ( (unsigned __int64)v2 < v4 );
  }
  return v3;
}

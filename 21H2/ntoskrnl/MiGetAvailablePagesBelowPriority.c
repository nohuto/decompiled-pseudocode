/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14027191C
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x140271440 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1402717D8 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x1402718D8 (MiPrefetchNormally.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402719AC (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeZeroClusterMaximum @ 0x14027449C (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402D4094 (MmGetAvailablePagesBelowPriority.c)
 *     MiGetHardFaultPages @ 0x1402E7D84 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiForcedTrim @ 0x14036C520 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x1407278B8 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1 + 304;
  result = a1[280] + a1[288];
  v4 = (unsigned __int64)&a1[5 * a2 + 304];
  while ( (unsigned __int64)v2 < v4 )
  {
    result += *v2;
    v2 += 5;
  }
  return result;
}

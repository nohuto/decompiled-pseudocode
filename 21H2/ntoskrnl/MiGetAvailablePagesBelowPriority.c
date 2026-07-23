/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14025F8BC
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x14025F3E0 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x14025F778 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x14025F878 (MiPrefetchNormally.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14025F94C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeZeroClusterMaximum @ 0x14026243C (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140272D6C (MmGetAvailablePagesBelowPriority.c)
 *     MiGetHardFaultPages @ 0x1402990D4 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiForcedTrim @ 0x14036C6D0 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x140727D68 (MiAllocateCrcList.c)
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

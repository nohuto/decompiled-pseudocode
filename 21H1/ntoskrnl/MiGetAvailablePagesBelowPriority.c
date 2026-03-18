/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1402803A4
 * Callers:
 *     MiPrefetchNormally @ 0x140280360 (MiPrefetchNormally.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiComputeAgingPercent @ 0x140306218 (MiComputeAgingPercent.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14031EF58 (MmGetAvailablePagesBelowPriority.c)
 *     MiGetHardFaultPages @ 0x140325E70 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140336F38 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140337094 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x140337124 (MiComputeSystemTrimCriteria.c)
 *     MiComputeZeroClusterMaximum @ 0x1403415DC (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiForcedTrim @ 0x140369550 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x140713AD8 (MiAllocateCrcList.c)
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

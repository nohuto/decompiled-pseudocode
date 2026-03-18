/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1403328E8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x140232AB4 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiComputeZeroClusterMaximum @ 0x14023C1EC (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140332108 (MmGetAvailablePagesBelowPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403322B0 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x14033240C (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1403327A4 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x1403328A4 (MiPrefetchNormally.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140332978 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiForcedTrim @ 0x14036BEF0 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x140723E28 (MiAllocateCrcList.c)
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

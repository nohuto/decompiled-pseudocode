/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140227354
 * Callers:
 *     MiPrefetchNormally @ 0x140227310 (MiPrefetchNormally.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x1402E0D70 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F1F54 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1402F1FE4 (MiComputeSystemTrimCriteria.c)
 *     MiComputeZeroClusterMaximum @ 0x1403122A4 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiComputeAgingPercent @ 0x14034401C (MiComputeAgingPercent.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14035CA68 (MmGetAvailablePagesBelowPriority.c)
 *     MiForcedTrim @ 0x140369F10 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x140715E68 (MiAllocateCrcList.c)
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

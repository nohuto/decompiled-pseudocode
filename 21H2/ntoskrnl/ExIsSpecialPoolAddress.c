/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1405BA2F0
 * Callers:
 *     VfUtilIsSpecialPoolAddress @ 0x1409C78E0 (VfUtilIsSpecialPoolAddress.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1409EDF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1405B4B30
 * Callers:
 *     VfUtilIsSpecialPoolAddress @ 0x1409C38D0 (VfUtilIsSpecialPoolAddress.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1409E9F30 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14025327C (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CA72C (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  unsigned __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1405B4410
 * Callers:
 *     VfUtilIsSpecialPoolAddress @ 0x1409C38C0 (VfUtilIsSpecialPoolAddress.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1409E9ED0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC2AC (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403C994C (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1, a2, a3);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

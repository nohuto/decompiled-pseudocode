/*
 * XREFs of ExIsSpecialPoolAddress @ 0x1405B8690
 * Callers:
 *     VfUtilIsSpecialPoolAddress @ 0x1409C98F0 (VfUtilIsSpecialPoolAddress.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1409EFF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD36C (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1, a2, a3);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

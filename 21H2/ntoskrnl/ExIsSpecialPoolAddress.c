/*
 * XREFs of ExIsSpecialPoolAddress @ 0x140642384
 * Callers:
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AA6D90 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140AA6DC0 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140AA6DF0 (DifpExFreePool_LwSP_Enter.c)
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140461DE4 (ExpHpIsSpecialPoolHeap.c)
 */

__int64 __fastcall ExIsSpecialPoolAddress(ULONG_PTR a1)
{
  unsigned __int64 HeapFromVA; // rax

  HeapFromVA = ExGetHeapFromVA(a1);
  return ExpHpIsSpecialPoolHeap(HeapFromVA);
}

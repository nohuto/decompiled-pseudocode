/*
 * XREFs of SmmFreeBlock @ 0x1C006FC14
 * Callers:
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C12CC (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmFreeBlock(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}

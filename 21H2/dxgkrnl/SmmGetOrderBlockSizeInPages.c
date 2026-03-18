/*
 * XREFs of SmmGetOrderBlockSizeInPages @ 0x1C006FE6C
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetOrderBlockSizeInPages(char a1)
{
  return 1LL << a1;
}

/*
 * XREFs of SmmAllocateBlock @ 0x1C006F8E8
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall SmmAllocateBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return operator new[](0x28uLL, 0x36737844u, 64LL, a4);
}

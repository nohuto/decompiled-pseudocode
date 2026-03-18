/*
 * XREFs of sub_14065FA3C @ 0x14065FA3C
 * Callers:
 *     sub_14065EA28 @ 0x14065EA28 (sub_14065EA28.c)
 *     sub_14065F9A4 @ 0x14065F9A4 (sub_14065F9A4.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406D6B84 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14065FA3C(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}

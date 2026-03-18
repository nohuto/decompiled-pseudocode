/*
 * XREFs of sub_14065FE70 @ 0x14065FE70
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x14065D374 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14065D488 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_14065EE5C @ 0x14065EE5C (sub_14065EE5C.c)
 *     sub_14065FDD8 @ 0x14065FDD8 (sub_14065FDD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14065FE70(__int64 a1)
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

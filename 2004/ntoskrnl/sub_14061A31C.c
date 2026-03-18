/*
 * XREFs of sub_14061A31C @ 0x14061A31C
 * Callers:
 *     sub_140619308 @ 0x140619308 (sub_140619308.c)
 *     sub_14061A284 @ 0x14061A284 (sub_14061A284.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406DA194 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14061A31C(__int64 a1)
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

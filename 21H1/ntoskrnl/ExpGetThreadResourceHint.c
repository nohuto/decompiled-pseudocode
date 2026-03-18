/*
 * XREFs of ExpGetThreadResourceHint @ 0x1402830D0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140285BF0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF0F0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 649);
}

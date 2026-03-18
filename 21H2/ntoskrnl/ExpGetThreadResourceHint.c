/*
 * XREFs of ExpGetThreadResourceHint @ 0x14022B410
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 1120);
}

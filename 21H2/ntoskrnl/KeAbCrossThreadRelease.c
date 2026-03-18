/*
 * XREFs of KeAbCrossThreadRelease @ 0x14039CE24
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14039CBAC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14063CF10 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x14039CE58 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 1696;
  return KiAbCrossThreadRelease(a1, a2);
}

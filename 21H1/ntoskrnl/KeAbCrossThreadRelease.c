/*
 * XREFs of KeAbCrossThreadRelease @ 0x14038B280
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14038B04C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405AEE10 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x14038B2B0 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = *(_QWORD *)(a3 + 800) + 96LL * (unsigned __int8)(a2 >> 1);
  return KiAbCrossThreadRelease(a1, a2);
}

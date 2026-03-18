/*
 * XREFs of KeAbCrossThreadRelease @ 0x14038E2B0
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14038E07C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B3090 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x14038E2E0 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = *(_QWORD *)(a3 + 800) + 96LL * (unsigned __int8)(a2 >> 1);
  return KiAbCrossThreadRelease(a1, a2);
}

/*
 * XREFs of KeAbCrossThreadRelease @ 0x14038BDF0
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14038BBBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405AF530 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x14038BE20 (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = *(_QWORD *)(a3 + 800) + 96LL * (unsigned __int8)(a2 >> 1);
  return KiAbCrossThreadRelease(a1, a2);
}

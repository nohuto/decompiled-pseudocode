/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140269760
 * Callers:
 *     MiAdjustPteBins @ 0x140269464 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402697B0 (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  unsigned int NumberOfCachedPtes; // eax
  _QWORD *v2; // r9
  unsigned __int64 v3; // rdx
  _BOOL8 result; // rax

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = 0;
  if ( NumberOfCachedPtes >= 0x400uLL )
  {
    v3 = NumberOfCachedPtes + v2[10];
    if ( v3 > 0x40000 && v3 > (*v2 - v2[8]) >> 2 )
      return 1;
  }
  return result;
}

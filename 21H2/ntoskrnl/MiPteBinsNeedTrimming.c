/*
 * XREFs of MiPteBinsNeedTrimming @ 0x1402723D4
 * Callers:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiAdjustPteBins @ 0x1402722D8 (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x140272424 (MiGetNumberOfCachedPtes.c)
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
    v3 = NumberOfCachedPtes + v2[11];
    if ( v3 > 0x40000 && v3 > (*v2 - v2[9]) >> 2 )
      return 1;
  }
  return result;
}

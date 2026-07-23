/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140260374
 * Callers:
 *     MiAdjustPteBins @ 0x140260278 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402603C4 (MiGetNumberOfCachedPtes.c)
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

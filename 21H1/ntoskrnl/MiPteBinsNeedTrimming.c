/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140203E84
 * Callers:
 *     MiAdjustPteBins @ 0x140203570 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x140203EDC (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  unsigned __int64 NumberOfCachedPtes; // r10

  NumberOfCachedPtes = (unsigned int)MiGetNumberOfCachedPtes(a1, a2, a3, a1);
  return NumberOfCachedPtes >= 0x400 && v3[11] + NumberOfCachedPtes > (*v3 - v3[9]) / 0xAuLL;
}

/*
 * XREFs of LongLongToLong @ 0x1C0146FD4
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C016DD90 (rimConvertCoordinatesWithRounding.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01B0ED8 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ConvertCoordinates @ 0x1C01B1310 (ConvertCoordinates.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01B1490 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C01B22E0 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C01B6120 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  HRESULT result; // eax

  if ( (unsigned __int64)(llOperand + 0x80000000LL) > 0xFFFFFFFF )
  {
    result = -2147024362;
    LODWORD(llOperand) = -1;
  }
  else
  {
    result = 0;
  }
  *plResult = llOperand;
  return result;
}

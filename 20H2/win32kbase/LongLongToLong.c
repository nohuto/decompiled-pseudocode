/*
 * XREFs of LongLongToLong @ 0x1C013E7C4
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C01654E0 (rimConvertCoordinatesWithRounding.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01A8DF8 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ConvertCoordinates @ 0x1C01A9230 (ConvertCoordinates.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01A93B0 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C01AA200 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C01AE040 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
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

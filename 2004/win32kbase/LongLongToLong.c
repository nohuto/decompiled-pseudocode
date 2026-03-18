/*
 * XREFs of LongLongToLong @ 0x1C0140C84
 * Callers:
 *     rimConvertCoordinatesWithRounding @ 0x1C0167A40 (rimConvertCoordinatesWithRounding.c)
 *     ?GetAdjustedHimetricLong@@YAHJJJPEAJ@Z @ 0x1C01AB178 (-GetAdjustedHimetricLong@@YAHJJJPEAJ@Z.c)
 *     ConvertCoordinates @ 0x1C01AB5B0 (ConvertCoordinates.c)
 *     GetAdjustedPointerPixelLocation @ 0x1C01AB730 (GetAdjustedPointerPixelLocation.c)
 *     _SetHimetricToPixelRatio @ 0x1C01AC580 (_SetHimetricToPixelRatio.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C01B03C0 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
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

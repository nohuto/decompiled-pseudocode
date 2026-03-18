/*
 * XREFs of LongLongToLong @ 0x1C014AF30
 * Callers:
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133B38 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C013628C (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01CED64 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 *     _TTHmToPixels @ 0x1C02616A4 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1C02616EC (_TTPixelsToHm.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026F3D8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
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

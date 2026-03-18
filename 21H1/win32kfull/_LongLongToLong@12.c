/*
 * XREFs of _LongLongToLong@12 @ 0xC28DA
 * Callers:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YGHJJJJJPAJ@Z @ 0x13E115 (-ConvertCoordinatesWithRoundingNoBounding@@YGHJJJJJPAJ@Z.c)
 *     __TTHmToPixels@8 @ 0x1B97AF (__TTHmToPixels@8.c)
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 *     ?bMakePathRecords@@YGHPAU_PATHRECORD@@PBKJPAU_POINTL@@KJJPAU_RECTFX@@PAPAU1@@Z @ 0x1FF4CC (-bMakePathRecords@@YGHPAU_PATHRECORD@@PBKJPAU_POINTL@@KJJPAU_RECTFX@@PAPAU1@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
  int *v2; // ecx
  int *v3; // edx
  int v4; // eax
  HRESULT v5; // ecx

  v3 = v2;
  if ( SHIDWORD(llOperand) < -1
    || (v4 = llOperand, llOperand < (__int64)0xFFFFFFFF80000000uLL)
    || (v5 = 0, llOperand > 0x7FFFFFFF) )
  {
    v5 = -2147024362;
    v4 = -1;
  }
  *v3 = v4;
  return v5;
}

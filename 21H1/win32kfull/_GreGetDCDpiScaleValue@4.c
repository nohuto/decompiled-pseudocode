/*
 * XREFs of _GreGetDCDpiScaleValue@4 @ 0x91320
 * Callers:
 *     _NtGdiCreateDIBSection@36 @ 0x768A6 (_NtGdiCreateDIBSection@36.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     _NtGdiGetDCDpiScaleValue@4 @ 0x212CC9 (_NtGdiGetDCDpiScaleValue@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GetCachedDpiScaleValue@DC@@QBEJXZ @ 0x91366 (-GetCachedDpiScaleValue@DC@@QBEJXZ.c)
 */

int __thiscall GreGetDCDpiScaleValue(HDC this)
{
  DC *v1; // eax
  int CachedDpiScaleValue; // esi
  DC *v4[3]; // [esp+4h] [ebp-Ch] BYREF

  memset(v4, 0, sizeof(v4));
  XDCOBJ::vLock((XDCOBJ *)v4, this);
  v1 = v4[0];
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    v1 = v4[0];
  }
  else
  {
    CachedDpiScaleValue = 1;
  }
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return CachedDpiScaleValue;
}

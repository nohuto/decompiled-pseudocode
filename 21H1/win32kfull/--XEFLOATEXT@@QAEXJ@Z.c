/*
 * XREFs of ??XEFLOATEXT@@QAEXJ@Z @ 0x89976
 * Callers:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z @ 0x1EDDC (-vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C (-lfOrientation@IFIOBJ@@QAEJXZ.c)
 *     ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6 (-hWnd@DC@@QAEXPAUHWND__@@@Z.c)
 *     _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2 (_GreScaleRgnToDestLogPixel@8.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __thiscall EFLOATEXT::operator*=(void *this, int a2)
{
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  ltoef_c(a2, v4);
  return mulff3_c(this, this, v4);
}

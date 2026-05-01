/*
 * XREFs of ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1803F3C24
 * Callers:
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x1803F3F40 (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1803FD9DC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1803FDAFC (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18044985C (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

void __fastcall GDIHelpers::FillRectARGB(HDC hdc, const RECT *a2, const struct tagRECT *a3, int a4)
{
  _BYTE Bits[8]; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-9h] BYREF
  BITMAPINFO bmi; // [rsp+88h] [rbp+7h] BYREF

  memset(&bmi.bmiHeader.biCompression, 0, 28);
  bmi.bmiHeader.biSize = 40;
  bmi.bmiHeader.biWidth = 1;
  bmi.bmiHeader.biHeight = 1;
  rcDst = 0LL;
  *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
  CopyRect(&rcDst, a2);
  Bits[1] = BYTE1(a4);
  Bits[2] = a4;
  Bits[3] = -1;
  Bits[0] = BYTE2(a4);
  StretchDIBits(
    hdc,
    rcDst.left,
    rcDst.top,
    rcDst.right - rcDst.left,
    rcDst.bottom - rcDst.top,
    0,
    0,
    1,
    1,
    Bits,
    &bmi,
    0,
    0xCC0020u);
}

/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18044985C
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x18044A094 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1803F3C24 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        int *a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  unsigned int LastError; // r12d
  HDC v11; // rdi
  HDC v12; // rax
  HDC v13; // rbx
  const char *v14; // r9
  LONG v15; // eax
  HBITMAP v16; // rax
  struct tagSIZE v17; // rsi
  HGDIOBJ v18; // r15
  LONG v19; // eax
  const struct tagRECT *v20; // r8
  int cy; // r11d
  int cx; // r9d
  HGDIOBJ ha; // [rsp+78h] [rbp-71h]
  void *ppvBits; // [rsp+80h] [rbp-69h] BYREF
  _BYTE pv[4]; // [rsp+88h] [rbp-61h] BYREF
  int wSrc; // [rsp+8Ch] [rbp-5Dh]
  int hSrc; // [rsp+90h] [rbp-59h]
  RECT v30; // [rsp+A8h] [rbp-41h] BYREF
  BITMAPINFO pbmi; // [rsp+B8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  CompatibleDC = CreateCompatibleDC(0LL);
  LastError = 0;
  v11 = CompatibleDC;
  if ( CompatibleDC )
  {
    v12 = CreateCompatibleDC(CompatibleDC);
    v13 = v12;
    if ( v12 )
    {
      ha = SelectObject(v12, h);
      if ( GetObjectW(h, 32, pv) )
      {
        v15 = *a3;
        memset(&pbmi.bmiHeader.biWidth, 0, 40);
        pbmi.bmiHeader.biWidth = v15;
        pbmi.bmiHeader.biHeight = a3[1];
        pbmi.bmiHeader.biSize = 44;
        *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
        v16 = CreateDIBSection(v11, &pbmi, 0, &ppvBits, 0LL, 0);
        v17 = (struct tagSIZE)v16;
        if ( v16 )
        {
          v18 = SelectObject(v11, v16);
          v30.left = (*a3 - a4->cx) / 2;
          v19 = (a3[1] - a4->cy) / 2;
          v30.right = a4->cx + v30.left;
          v30.top = v19;
          v30.bottom = a4->cy + v19;
          GDIHelpers::FillRectARGB(v11, &v30, v20, *a2);
          cy = hSrc;
          cx = wSrc;
          if ( a5->cx < wSrc )
            cx = a5->cx;
          if ( a5->cy < hSrc )
            cy = a5->cy;
          GdiAlphaBlend(v11, (*a3 - cx) / 2, (a3[1] - cy) / 2, cx, cy, v13, 0, 0, wSrc, hSrc, (BLENDFUNCTION)33488896);
          *a6 = v17;
          SelectObject(v11, v18);
        }
        else
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18D,
            (__int64)"Shell\\inc\\GDIHelpers.h",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x181,
                      (__int64)"Shell\\inc\\GDIHelpers.h",
                      v14);
      }
      SelectObject(v13, ha);
      DeleteDC(v13);
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"Shell\\inc\\GDIHelpers.h",
        (const char *)0x8007000ELL);
    }
    DeleteDC(v11);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"Shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
  }
  return LastError;
}

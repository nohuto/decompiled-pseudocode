/*
 * XREFs of s_DrawGlyph @ 0x18047AC98
 * Callers:
 *     s_OnDrawItem @ 0x18047B5B0 (s_OnDrawItem.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180061FDC (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BA10 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18047DA4C (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_DrawGlyph(
        HWND a1,
        COLORREF a2,
        void *a3,
        HDC a4,
        int a5,
        __int16 a6,
        int iStateId,
        struct tagRECT *a8,
        unsigned int a9)
{
  int Error; // edi
  unsigned int v12; // ebx
  char v13; // r15
  UINT v14; // r13d
  struct HWND__ *p_hWnd; // r14
  int v16; // eax
  LONG v17; // eax
  HFONT v18; // rbx
  BOOL v19; // r12d
  COLORREF v20; // eax
  COLORREF v21; // r15d
  HGDIOBJ v22; // r12
  COLORREF v24; // [rsp+30h] [rbp-B1h] BYREF
  int v25; // [rsp+34h] [rbp-ADh] BYREF
  struct HWND__ hWnd; // [rsp+38h] [rbp-A9h] BYREF
  int v27; // [rsp+3Ch] [rbp-A5h] BYREF
  int v28; // [rsp+40h] [rbp-A1h] BYREF
  COLORREF pColor; // [rsp+44h] [rbp-9Dh] BYREF
  int mode; // [rsp+48h] [rbp-99h]
  HTHEME hTheme; // [rsp+50h] [rbp-91h]
  LPRECT lprc; // [rsp+58h] [rbp-89h]
  __int64 v33; // [rsp+60h] [rbp-81h]
  LOGFONTW lf; // [rsp+70h] [rbp-71h] BYREF

  v33 = -2LL;
  hTheme = a3;
  v24 = a2;
  lprc = a8;
  hWnd.unused = 59669;
  v25 = 57575;
  v27 = 59244;
  v28 = 59243;
  Error = -2147023728;
  v12 = -13;
  v13 = 0;
  v14 = 37;
  if ( a5 == 11 )
  {
    p_hWnd = (struct HWND__ *)&v25;
    if ( (a6 & 0x200) != 0 )
      p_hWnd = &hWnd;
    v12 = (a6 & 0x200) != 0 ? -16 : -13;
  }
  else
  {
    if ( a5 != 16 )
      return (unsigned int)Error;
    v16 = GetWindowLongW(a1, -20) & 0x400000;
    v13 = 1;
    p_hWnd = (struct HWND__ *)&v27;
    if ( v16 )
      p_hWnd = (struct HWND__ *)&v28;
    v14 = v16 != 0 ? 131109 : 37;
  }
  memset_0(&lf, 0, sizeof(lf));
  v17 = DPIToPPIHelpers::ScaleByType(a9, v12, a1, v24);
  if ( v13 && (v17 & 1) == 0 )
    --v17;
  lf.lfHeight = v17;
  lf.lfWeight = 400;
  lf.lfCharSet = 1;
  lf.lfQuality = 5;
  Error = StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  if ( Error >= 0 )
  {
    v18 = CreateFontIndirectW(&lf);
    if ( v18 )
    {
      Error = 0;
      v19 = (unsigned int)IsHighContrast() && ((iStateId - 2) & 0xFFFFFFFD) == 0;
      mode = SetBkMode(a4, 1);
      GetThemeColor(hTheme, 9, 0, 3802, &pColor);
      v20 = 0;
      if ( BYTE2(pColor) + 5 * BYTE1(pColor) + 2 * (unsigned int)(unsigned __int8)pColor <= 0x400 )
        v20 = 0xFFFFFF;
      v24 = v20;
      if ( v19 )
      {
        GetThemeColor(hTheme, 14, iStateId, 3803, &v24);
        v20 = v24;
      }
      v21 = SetTextColor(a4, v20);
      v22 = SelectObject(a4, v18);
      if ( !DrawTextW(a4, (LPCWSTR)p_hWnd, 1, lprc, v14) )
        Error = ResultFromKnownLastError();
      SetTextColor(a4, v21);
      SetBkMode(a4, mode);
      SelectObject(a4, v22);
    }
    else
    {
      Error = -2147467259;
    }
    if ( v18 )
      DeleteObject(v18);
  }
  return (unsigned int)Error;
}

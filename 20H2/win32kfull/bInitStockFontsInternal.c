/*
 * XREFs of bInitStockFontsInternal @ 0x1C039353C
 * Callers:
 *     bInitStockFonts @ 0x1C0395050 (bInitStockFonts.c)
 * Callees:
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C001C2EC (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C001C908 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C001CCB4 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     hfontCreate @ 0x1C008FEE0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     bInitOneStockFont @ 0x1C03931B0 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C039334C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C039532C (bInitSystemFont.c)
 */

unsigned __int16 *bInitStockFontsInternal()
{
  BOOL v0; // ebx
  unsigned __int16 *result; // rax
  unsigned __int16 *v2; // rsi
  struct HOBJ__ *v3; // rax
  int v4; // r8d
  struct HOBJ__ *v5; // rax
  int v6; // r8d
  struct HOBJ__ *v7; // rax
  int v8; // r8d
  struct HOBJ__ *v9; // rax
  int v10; // r8d
  struct HOBJ__ *v11; // rax
  int v12; // r8d
  struct HOBJ__ *inited; // rax
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D8h]
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD Src[108]; // [rsp+58h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  v0 = 1;
  result = (unsigned __int16 *)PALLOCMEM2(0x254uLL, 1718838855LL, 1);
  v2 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u)
        && bQueryValueKey(
             L"SystemFont",
             Handle[0],
             (PVOID)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        memmove(
          v2 + 18,
          (const void *)(((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 12),
          *(unsigned int *)(((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 8));
        bInitSystemFont(v2);
      }
      ZwClose(Handle[0]);
    }
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !gahStockObjects[13] )
        bInitOneStockFont(
          L"FONTS.FON",
          1LL,
          13LL,
          Handle[0],
          (unsigned int *)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
          v14,
          v2,
          v2 + 18);
      bInitOneStockFont(
        L"OEMFONT.FON",
        3LL,
        10LL,
        Handle[0],
        (unsigned int *)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
        v14,
        v2,
        v2 + 18);
      bInitOneStockFont(
        L"FIXEDFON.FON",
        2LL,
        16LL,
        Handle[0],
        (unsigned int *)((unsigned __int64)(v2 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
        v15,
        v2,
        v2 + 18);
      ZwClose(Handle[0]);
    }
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 16;
    Src[1] = 7;
    Src[4] = 700;
    Src[6] = 570556929;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"System");
    v3 = hfontCreate((WCHAR *)Src, 1, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v3, 13, 0) && G_fServiceSession == v4 )
      goto LABEL_23;
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 12;
    Src[1] = 8;
    Src[4] = 400;
    *(_DWORD *)((char *)&Src[5] + 3) = 33686015;
    HIBYTE(Src[6]) = 49;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"Terminal");
    v5 = hfontCreate((WCHAR *)Src, 3, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v5, 10, 0) && G_fServiceSession == v6 )
      goto LABEL_23;
    DcAttrDefault[37] = gahStockObjects[13];
    memset(Src, 0, 0x1A4uLL);
    HIBYTE(Src[6]) = 1;
    v7 = hfontCreate((WCHAR *)Src, 4, 3, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v7, 14, 0) && G_fServiceSession == v8 )
      goto LABEL_23;
    if ( (memset(Src, 0, 0x1A4uLL),
          HIBYTE(Src[6]) = 2,
          v9 = hfontCreate((WCHAR *)Src, 5, 3, 0LL, 0x48u),
          !(unsigned int)bSetStockFont(v9, 12, 0))
      && G_fServiceSession == v10
      || (memset(Src, 0, 0x1A4uLL),
          HIBYTE(Src[6]) = 1,
          v11 = hfontCreate((WCHAR *)Src, 6, 3, 0LL, 0x48u),
          !(unsigned int)bSetStockFont(v11, 11, 0))
      && G_fServiceSession == v12 )
    {
LABEL_23:
      v0 = 0;
    }
    else
    {
      inited = hfontInitDefaultGuiFont(-1);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v0 = G_fServiceSession != 0;
    }
    Win32FreePool(v2);
    return (unsigned __int16 *)v0;
  }
  return result;
}

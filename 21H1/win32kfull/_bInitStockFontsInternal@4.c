/*
 * XREFs of _bInitStockFontsInternal@4 @ 0x2922C4
 * Callers:
 *     _bInitStockFonts@0 @ 0x292296 (_bInitStockFonts@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22 (-bSetStockFont@@YGHPAXHH@Z.c)
 *     ?bOpenKey@@YGHPBGPAPAX@Z @ 0xDF378 (-bOpenKey@@YGHPBGPAPAX@Z.c)
 *     ?bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0xDF440 (-bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 *     _bInitSystemFont@8 @ 0x293D42 (_bInitSystemFont@8.c)
 */

BOOL bInitStockFontsInternal()
{
  unsigned int v0; // kr00_4
  BOOL v1; // ebx
  size_t v2; // esi
  unsigned __int16 *v3; // eax
  unsigned __int16 *v4; // edi
  size_t *v5; // esi
  struct HOBJ__ *v6; // eax
  struct HOBJ__ *v7; // eax
  struct HOBJ__ *v8; // eax
  struct HOBJ__ *v9; // eax
  struct HOBJ__ *v10; // eax
  int inited; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v13; // [esp+0h] [ebp-1C8h]
  struct _KEY_VALUE_PARTIAL_INFORMATION *v14; // [esp+0h] [ebp-1C8h]
  int v15; // [esp+0h] [ebp-1C8h]
  int v16; // [esp+0h] [ebp-1C8h]
  int v17; // [esp+0h] [ebp-1C8h]
  int v18; // [esp+0h] [ebp-1C8h]
  int v19; // [esp+0h] [ebp-1C8h]
  unsigned int v20; // [esp+4h] [ebp-1C4h]
  unsigned int v21; // [esp+4h] [ebp-1C4h]
  int v22; // [esp+4h] [ebp-1C4h]
  int v23; // [esp+4h] [ebp-1C4h]
  int v24; // [esp+4h] [ebp-1C4h]
  int v25; // [esp+4h] [ebp-1C4h]
  int v26; // [esp+4h] [ebp-1C4h]
  HANDLE Handle; // [esp+Ch] [ebp-1BCh] BYREF
  void *v28; // [esp+10h] [ebp-1B8h]
  size_t v29; // [esp+14h] [ebp-1B4h]
  _DWORD Src[107]; // [esp+18h] [ebp-1B0h] BYREF

  Handle = 0;
  v1 = 1;
  v0 = wcslen(L"\\SystemRoot\\Fonts\\");
  v2 = 2 * v0 + 2;
  v3 = (unsigned __int16 *)PALLOCMEM2(2 * v2 + 520, 1718838855, 1);
  v4 = v3;
  if ( !v3 )
    return 0;
  memmove(v3, L"\\SystemRoot\\Fonts\\", v2);
  v28 = &v4[v0];
  v5 = (size_t *)((unsigned int)&v4[v0 + 5] & 0xFFFFFFF8);
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", &Handle) )
  {
    if ( bQueryValueKey(Handle, L"SystemFontSize", v5, 0x200u, v13, v20) )
    {
      v29 = v5[3];
      if ( bQueryValueKey(Handle, L"SystemFont", v5, 0x200u, v13, v20) )
      {
        memmove(v28, v5 + 3, v5[2]);
        bInitSystemFont(v4);
      }
    }
    ZwClose(Handle);
  }
  if ( bOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts", &Handle)
    || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( !gahStockObjects[13] && bQueryValueKey(Handle, L"FONTS.FON", v5, 0x200u, v13, v20) )
    {
      memmove(v28, v5 + 3, v5[2]);
      bInitOneStockFontInternal(v4, 13, 0);
    }
    if ( bQueryValueKey(Handle, L"OEMFONT.FON", v5, 0x200u, v13, v20) )
    {
      memmove(v28, v5 + 3, v5[2]);
      bInitOneStockFontInternal(v4, 10, 0);
    }
    if ( bQueryValueKey(Handle, L"FIXEDFON.FON", v5, 0x200u, v14, v21) )
    {
      memmove(v28, v5 + 3, v5[2]);
      bInitOneStockFontInternal(v4, 16, 0);
    }
    ZwClose(Handle);
  }
  memset(Src, 0, 0x1A4u);
  Src[0] = 16;
  Src[1] = 7;
  Src[4] = 700;
  Src[6] = 570556929;
  _wcscpy_s((wchar_t *)&Src[7], 0x20u, L"System");
  v6 = hfontCreate(Src, 1, 2, 0, 72);
  if ( bSetStockFont(13, (int)v6, 0, (int)v13, v20) || G_fServiceSession )
  {
    memset(Src, 0, 0x1A4u);
    Src[0] = 12;
    Src[1] = 8;
    Src[4] = 400;
    HIBYTE(Src[5]) = -1;
    Src[6] = 822215169;
    _wcscpy_s((wchar_t *)&Src[7], 0x20u, L"Terminal");
    v7 = hfontCreate(Src, 3, 2, 0, 72);
    if ( !bSetStockFont(10, (int)v7, 0, v15, v22) && !G_fServiceSession )
      goto LABEL_30;
    DcAttrDefault[75] = gahStockObjects[13];
    memset(Src, 0, 0x1A4u);
    HIBYTE(Src[6]) = 1;
    v8 = hfontCreate(Src, 4, 3, 0, 72);
    if ( !bSetStockFont(14, (int)v8, 0, v16, v23) && !G_fServiceSession )
      goto LABEL_30;
    if ( ((memset(Src, 0, 0x1A4u),
           HIBYTE(Src[6]) = 2,
           v9 = hfontCreate(Src, 5, 3, 0, 72),
           bSetStockFont(12, (int)v9, 0, v17, v24))
       || G_fServiceSession)
      && ((memset(Src, 0, 0x1A4u),
           HIBYTE(Src[6]) = 1,
           v10 = hfontCreate(Src, 6, 3, 0, 72),
           bSetStockFont(11, (int)v10, 0, v18, v25))
       || G_fServiceSession) )
    {
      inited = hfontInitDefaultGuiFont(-1);
      if ( !bSetStockFont(17, inited, 0, v19, v26) )
        v1 = G_fServiceSession != 0;
    }
    else
    {
LABEL_30:
      v1 = 0;
    }
  }
  else
  {
    v1 = 0;
  }
  Win32FreePool((PATHOBJ *)v4);
  return v1;
}

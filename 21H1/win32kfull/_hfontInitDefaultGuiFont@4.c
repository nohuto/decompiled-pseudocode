/*
 * XREFs of _hfontInitDefaultGuiFont@4 @ 0x2927A4
 * Callers:
 *     _FinishStockFontReinit@4 @ 0xD9D62 (_FinishStockFontReinit@4.c)
 *     _GreEnsureDpiDepDefaultGuiFontForPlateau@4 @ 0x1F3762 (_GreEnsureDpiDepDefaultGuiFontForPlateau@4.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 * Callees:
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     ?bOpenKey@@YGHPBGPAPAX@Z @ 0xDF378 (-bOpenKey@@YGHPBGPAPAX@Z.c)
 *     ?bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0xDF440 (-bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct HOBJ__ *__fastcall hfontInitDefaultGuiFont(int a1)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v3; // [esp+0h] [ebp-208h]
  struct _KEY_VALUE_PARTIAL_INFORMATION *v4; // [esp+0h] [ebp-208h]
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // [esp+0h] [ebp-208h]
  struct _KEY_VALUE_PARTIAL_INFORMATION *v6; // [esp+0h] [ebp-208h]
  struct _KEY_VALUE_PARTIAL_INFORMATION *v7; // [esp+0h] [ebp-208h]
  unsigned int v8; // [esp+4h] [ebp-204h]
  unsigned int v9; // [esp+4h] [ebp-204h]
  unsigned int v10; // [esp+4h] [ebp-204h]
  unsigned int v11; // [esp+4h] [ebp-204h]
  unsigned int v12; // [esp+4h] [ebp-204h]
  HANDLE Handle; // [esp+Ch] [ebp-1FCh] BYREF
  _DWORD v14[106]; // [esp+10h] [ebp-1F8h] BYREF
  _BYTE KeyValueInformation[12]; // [esp+1B8h] [ebp-50h] BYREF
  wchar_t Src[32]; // [esp+1C4h] [ebp-44h] BYREF

  Handle = 0;
  memset(v14, 0, 0x1A4u);
  _wcscpy_s((wchar_t *)&v14[7], 0x20u, L"MS Shell Dlg");
  v14[0] = 8;
  v14[4] = 400;
  LOBYTE(v14[5]) = 0;
  HIBYTE(v14[5]) = _gjCurCharset;
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( bQueryValueKey(Handle, L"GUIFont.Facename", KeyValueInformation, 0x44u, v3, v8) )
      _wcsncpy_s((wchar_t *)&v14[7], 0x20u, Src, 0x20u);
    if ( bQueryValueKey(Handle, L"GUIFont.Height", KeyValueInformation, 0x44u, v4, v9) )
      v14[0] = *(_DWORD *)Src;
    if ( bQueryValueKey(Handle, L"GUIFont.Weight", KeyValueInformation, 0x44u, v5, v10) )
      v14[4] = *(_DWORD *)Src;
    if ( bQueryValueKey(Handle, L"GUIFont.Italic", KeyValueInformation, 0x44u, v6, v11) )
      LOBYTE(v14[5]) = Src[0];
    if ( bQueryValueKey(Handle, L"GUIFont.CharSet", KeyValueInformation, 0x44u, v7, v12) )
      HIBYTE(v14[5]) = Src[0];
    ZwClose(Handle);
  }
  if ( a1 == -1 )
    gbFinishDefGUIFontInit = 1;
  else
    v14[0] = (a1 * v14[0] + 36) / -72;
  return hfontCreate(v14, 7, 2, 0, 72);
}

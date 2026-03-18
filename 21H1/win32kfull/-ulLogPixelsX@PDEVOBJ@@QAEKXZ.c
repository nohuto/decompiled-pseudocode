/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE
 * Callers:
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     _GreGetAspectRatioFilter@8 @ 0x1EBA7A (_GreGetAspectRatioFilter@8.c)
 *     ?vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z @ 0x247A2E (-vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

unsigned int __thiscall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  char CurrentThreadDpiAwarenessContext; // al
  int v3; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_BYTE *)(*(_DWORD *)this + 24) & 1) == 0 )
    return *(_DWORD *)(*(_DWORD *)this + 1460);
  v3 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v3 == 1 || v3 == 2 )
    return *(_DWORD *)(*(_DWORD *)this + 1460);
  else
    return 96;
}

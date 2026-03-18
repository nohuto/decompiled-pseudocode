/*
 * XREFs of xxxRealizeDesktop @ 0x1C01EA028
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0235B80 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C00BEFFC (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC(a1);
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}

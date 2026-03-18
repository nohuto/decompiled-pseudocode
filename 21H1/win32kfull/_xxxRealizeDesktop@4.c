/*
 * XREFs of _xxxRealizeDesktop@4 @ 0x154B87
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxBroadcastPaletteChanged@8 @ 0x196256 (_xxxBroadcastPaletteChanged@8.c)
 * Callees:
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 */

int __thiscall xxxRealizeDesktop(void *this)
{
  HDC DC; // esi

  DC = (HDC)_GetDC(this);
  xxxInternalPaintDesktop((int)this, DC, 0);
  return _ReleaseDC(DC);
}

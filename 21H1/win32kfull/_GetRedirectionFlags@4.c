/*
 * XREFs of _GetRedirectionFlags@4 @ 0x20168
 * Callers:
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 *     __GetLayeredWindowAttributes@16 @ 0x153A92 (__GetLayeredWindowAttributes@16.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int GetRedirectionFlags()
{
  int v0; // esi
  int Prop; // eax

  v0 = 0;
  Prop = _GetProp(1);
  if ( Prop )
    return *(_DWORD *)(Prop + 24);
  return v0;
}

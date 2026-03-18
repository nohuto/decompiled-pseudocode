/*
 * XREFs of _ThreadLockExchange@8 @ 0xA378E
 * Callers:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0 (-xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C (-xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 *     ?xxxEnsureAllDpiCursors@@YGXXZ @ 0xD8C20 (-xxxEnsureAllDpiCursors@@YGXXZ.c)
 *     _EditionPointerParentNotify@112 @ 0xF1DE0 (_EditionPointerParentNotify@112.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     ?xxxCompositedTraverse@@YGHPAUtagWND@@@Z @ 0x19D7D9 (-xxxCompositedTraverse@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ThreadLockExchange(int a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = a1;
  if ( a1 )
    HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}

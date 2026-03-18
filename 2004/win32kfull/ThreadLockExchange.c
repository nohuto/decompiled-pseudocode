/*
 * XREFs of ThreadLockExchange @ 0x1C00B2F7C
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0044BB8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C004893C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0048AD4 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0048C2C (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0092660 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C011CCE4 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     EditionPointerParentNotify @ 0x1C01F28A0 (EditionPointerParentNotify.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C0238274 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C023BF48 (xxxMNSetTop.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023F1C8 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}

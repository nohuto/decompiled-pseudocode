/*
 * XREFs of _GreGetTextAlign@4 @ 0xB687C
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreGetTextAlign(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  v3[1] = 0;
  v3[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v3[0] + 1020) + 284);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}

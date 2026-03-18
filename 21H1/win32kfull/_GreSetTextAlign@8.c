/*
 * XREFs of _GreSetTextAlign@8 @ 0xB66FA
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

int __fastcall GreSetTextAlign(HDC a1, int a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v7[1] = 0;
  v7[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_DWORD *)(v7[0] + 1020);
    v2 = *(_DWORD *)(v4 + 284);
    *(_DWORD *)(v4 + 284) = a2;
    v5 = *(_DWORD *)(v7[0] + 1020);
    if ( (*(_BYTE *)(v5 + 148) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v5 + 280) = a2 & 0x1F;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v2;
}

/*
 * XREFs of GreSetTextAlign @ 0x1C005D450
 * Callers:
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C01015A0 (_ServerFixupMenuDC.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011241C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C025FC70 (DrawTextExWorker.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = a2;
    v5 = *(_QWORD *)(v7[0] + 976LL);
    if ( (*(_DWORD *)(v5 + 108) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v5 + 272) = a2 & 0x1F;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}

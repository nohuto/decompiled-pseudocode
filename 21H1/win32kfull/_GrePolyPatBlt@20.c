/*
 * XREFs of _GrePolyPatBlt@20 @ 0x722C4
 * Callers:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FDEE (-DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z @ 0xB632E (-MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 *     _DrawFrame@16 @ 0xC2994 (_DrawFrame@16.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 *     ?DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z @ 0x1A8E86 (-DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     ?DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z @ 0x1B7526 (-DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z.c)
 *     _ClientFrame@24 @ 0x1B78B9 (_ClientFrame@24.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

BOOL __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct XDCOBJ *a3, unsigned int a4, int a5)
{
  BOOL v5; // edi
  unsigned int v8; // [esp+0h] [ebp-1Ch]
  unsigned int v9; // [esp+4h] [ebp-18h]
  _DWORD v10[3]; // [esp+10h] [ebp-Ch] BYREF

  v5 = 0;
  v10[1] = 0;
  v10[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v5 = GrePolyPatBltInternal(
           a2,
           (struct XDCOBJ *)v10,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_DWORD *)(v10[0] + 1020) + 204),
           *(struct SURFACE **)(*(_DWORD *)(v10[0] + 1020) + 196),
           *(_DWORD *)(*(_DWORD *)(v10[0] + 1020) + 208),
           *(_DWORD *)(*(_DWORD *)(v10[0] + 1020) + 200),
           v8,
           v9);
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}

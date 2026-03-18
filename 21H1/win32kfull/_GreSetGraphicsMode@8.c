/*
 * XREFs of _GreSetGraphicsMode@8 @ 0x226087
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  int v2; // edi
  int v4; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v6[1] = 0;
  v6[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_DWORD *)(v6[0] + 1020);
    v2 = *(_DWORD *)(v4 + 228);
    if ( a2 == 1 || a2 == 2 )
      *(_DWORD *)(v4 + 228) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v2;
}

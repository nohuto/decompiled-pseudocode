/*
 * XREFs of _GreGetBkColor@4 @ 0xC1E8E
 * Callers:
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreGetBkColor(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v3[1] = 0;
  v3[2] = 0;
  v1 = -1;
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v3[0] + 1020) + 200);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}

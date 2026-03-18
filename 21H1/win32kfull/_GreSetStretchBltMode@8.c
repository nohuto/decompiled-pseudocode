/*
 * XREFs of _GreSetStretchBltMode@8 @ 0x9100E
 * Callers:
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  int v2; // esi
  int v4; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v6[1] = 0;
  v6[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_DWORD *)(v6[0] + 1020);
    v2 = *(_DWORD *)(v4 + 252);
    *(_DWORD *)(v4 + 252) = a2;
    if ( a2 > 4 )
      LOBYTE(a2) = 2;
    *(_BYTE *)(*(_DWORD *)(v6[0] + 1020) + 235) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v2;
}

/*
 * XREFs of _GreGetBrushOrg@8 @ 0x1FD3AA
 * Callers:
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreGetBrushOrg(HDC a1, _DWORD *a2)
{
  int v2; // esi
  int v4; // ecx
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  v4 = v6[0];
  if ( v6[0] )
  {
    v2 = 1;
    *a2 = *(_DWORD *)(v6[0] + 84);
    a2[1] = *(_DWORD *)(v4 + 88);
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v2;
}

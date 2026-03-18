/*
 * XREFs of _GreSetBrushOrg@16 @ 0x721EA
 * Callers:
 *     _xxxPaintRect@20 @ 0x7215C (_xxxPaintRect@20.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _NtGdiSetBrushOrg@16 @ 0x2141AA (_NtGdiSetBrushOrg@16.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vCalcFillOrigin@DC@@QAEXXZ @ 0x9DCE4 (-vCalcFillOrigin@DC@@QAEXXZ.c)
 */

int __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  DC *v6; // edx
  DC *v7; // ecx
  DC *v9[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = 0;
  memset(v9, 0, sizeof(v9));
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  v6 = v9[0];
  if ( v9[0] )
  {
    if ( a4 )
    {
      *a4 = *((_DWORD *)v9[0] + 21);
      a4[1] = *((_DWORD *)v6 + 22);
    }
    *(_DWORD *)(*((_DWORD *)v6 + 255) + 344) = a2;
    *(_DWORD *)(*((_DWORD *)v9[0] + 255) + 348) = a3;
    v7 = v9[0];
    *((_DWORD *)v9[0] + 21) = a2;
    *((_DWORD *)v7 + 22) = a3;
    DC::vCalcFillOrigin(v7);
    v4 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v4;
}

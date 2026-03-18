/*
 * XREFs of _GreScaleWindowExtEx@24 @ 0x21D696
 * Callers:
 *     _NtGdiScaleWindowExtEx@24 @ 0x21406E (_NtGdiScaleWindowExtEx@24.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3 (-MirrorWindowOrg@DC@@QAEXXZ.c)
 */

int __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // esi
  DC *v8; // edi
  int v9; // ecx
  _DWORD *v10; // ecx
  int v11; // eax
  DC *v13[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+20h] [ebp+8h]
  int v15; // [esp+2Ch] [ebp+14h]

  v6 = 0;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  v8 = v13[0];
  if ( !v13[0] )
    return v6;
  if ( a6 )
  {
    v9 = *((_DWORD *)v13[0] + 255);
    *a6 = *(_DWORD *)(v9 + 316);
    a6[1] = *(_DWORD *)(v9 + 320);
    if ( (*(_BYTE *)(*((_DWORD *)v8 + 255) + 148) & 1) != 0 )
      *a6 = -*a6;
  }
  v10 = (_DWORD *)*((_DWORD *)v8 + 255);
  if ( v10[36] > 6u )
  {
    v11 = a2 * v10[79];
    v15 = a4 * v10[80];
    if ( !a3 || !a5 || v11 == 0x80000000 && a3 == -1 )
      goto LABEL_16;
    if ( a4 * v10[80] == 0x80000000 && a5 == -1 )
      goto LABEL_16;
    v14 = v11 / a3;
    if ( !v14 || !(v15 / a5) )
      goto LABEL_16;
    v10[79] = v14;
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 320) = v15 / a5;
    DC::MirrorWindowOrg(v13[0]);
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 340) |= 0x4090u;
    v8 = v13[0];
  }
  v6 = 1;
LABEL_16:
  if ( v8 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v6;
}

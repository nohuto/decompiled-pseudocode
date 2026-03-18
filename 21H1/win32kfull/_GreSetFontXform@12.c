/*
 * XREFs of _GreSetFontXform@12 @ 0x1EBDFB
 * Callers:
 *     _NtGdiSetFontXform@12 @ 0x214353 (_NtGdiSetFontXform@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 */

int __fastcall GreSetFontXform(HDC a1, int a2, int a3)
{
  int v3; // esi
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // edx
  unsigned int v9; // ecx
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = 0;
  memset(v11, 0, sizeof(v11));
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  v7 = v11[0];
  if ( v11[0] )
  {
    v3 = 1;
    ftoef_c(v6, v5, a2, (int *)(v11[0] + 468));
    ftoef_c(v9, v8, a3, (int *)(v7 + 476));
    *(_DWORD *)(v11[0] + 176) |= 1u;
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v3;
}

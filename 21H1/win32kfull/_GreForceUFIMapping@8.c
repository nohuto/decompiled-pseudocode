/*
 * XREFs of _GreForceUFIMapping@8 @ 0x1D8D49
 * Callers:
 *     _NtGdiForceUFIMapping@8 @ 0x212692 (_NtGdiForceUFIMapping@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreForceUFIMapping(HDC a1, _DWORD *a2)
{
  int v2; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v7[1] = 0;
  v7[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    *(_DWORD *)(v7[0] + 180) = *a2;
    v5 = a2[1];
    *(_DWORD *)(v4 + 176) |= 4u;
    *(_DWORD *)(v4 + 184) = v5;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    return 1;
  }
  return v2;
}

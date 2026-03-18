/*
 * XREFs of _NtGdiSetTextJustification@12 @ 0x222705
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  int v3; // esi
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = 1;
    *(_DWORD *)(*(_DWORD *)(v5[0] + 1020) + 292) = a2;
    *(_DWORD *)(*(_DWORD *)(v5[0] + 1020) + 296) = a3;
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}

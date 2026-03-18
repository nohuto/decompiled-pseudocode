/*
 * XREFs of _GreGetMiterLimit@8 @ 0x2113EF
 * Callers:
 *     _NtGdiGetMiterLimit@8 @ 0x213104 (_NtGdiGetMiterLimit@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
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
    *a2 = *(_DWORD *)(v6[0] + 156);
    v2 = 1;
  }
  else
  {
    EngSetLastError(0x57u);
    v4 = v6[0];
  }
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v2;
}

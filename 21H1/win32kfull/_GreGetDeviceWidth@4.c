/*
 * XREFs of _GreGetDeviceWidth@4 @ 0x21D522
 * Callers:
 *     _NtGdiGetDeviceWidth@4 @ 0x212CDF (_NtGdiGetDeviceWidth@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreGetDeviceWidth(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  memset(v3, 0, sizeof(v3));
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 1072) - *(_DWORD *)(v3[0] + 1064);
  else
    v1 = -1;
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return v1;
}

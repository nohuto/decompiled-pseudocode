/*
 * XREFs of _GreSetMetaRgn@4 @ 0xA9410
 * Callers:
 *     _NtGdiSetMetaRgn@4 @ 0xA93FE (_NtGdiSetMetaRgn@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?iSetMetaRgn@DC@@QAEHXZ @ 0xA9452 (-iSetMetaRgn@DC@@QAEHXZ.c)
 */

int __thiscall GreSetMetaRgn(HDC this)
{
  int v1; // esi
  DC *v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v3, 0, sizeof(v3));
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
    v1 = DC::iSetMetaRgn(v3[0]);
  else
    EngSetLastError(0x57u);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return v1;
}

/*
 * XREFs of _GreMirrorWindowOrg@4 @ 0x21D659
 * Callers:
 *     _NtGdiMirrorWindowOrg@4 @ 0x213A39 (_NtGdiMirrorWindowOrg@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3 (-MirrorWindowOrg@DC@@QAEXXZ.c)
 */

int __thiscall GreMirrorWindowOrg(HDC this)
{
  int v1; // esi
  DC *v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v3, 0, sizeof(v3));
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = 1;
    DC::MirrorWindowOrg(v3[0]);
    if ( v3[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}

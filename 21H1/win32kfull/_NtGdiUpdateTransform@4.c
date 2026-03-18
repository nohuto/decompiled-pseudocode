/*
 * XREFs of _NtGdiUpdateTransform@4 @ 0x21DD84
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiUpdateTransform(HDC a1)
{
  int v1; // esi
  DC *v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v3[1] = 0;
  v3[2] = 0;
  v1 = 1;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( !v3[0] )
    return 0;
  DC::vUpdateWtoDXform(v3[0]);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return v1;
}

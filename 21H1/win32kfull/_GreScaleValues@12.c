/*
 * XREFs of _GreScaleValues@12 @ 0x1FD676
 * Callers:
 *     _NtGdiScaleValues@12 @ 0x213F65 (_NtGdiScaleValues@12.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0 (-GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z.c)
 */

int __fastcall GreScaleValues(HDC a1, int *a2, struct XDCOBJ *a3)
{
  int v3; // esi
  int *v6; // [esp+0h] [ebp-14h]
  unsigned int v7; // [esp+4h] [ebp-10h]
  DC *v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = 0;
  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    GreScaleValuesInternal(a2, v8, a3, v6, v7);
    v3 = 1;
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}

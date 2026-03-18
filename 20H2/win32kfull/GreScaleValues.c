/*
 * XREFs of GreScaleValues @ 0x1C029E3E0
 * Callers:
 *     NtGdiScaleValues @ 0x1C02AF060 (NtGdiScaleValues.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013C8F4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 */

__int64 __fastcall GreScaleValues(HDC a1, int *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
  {
    GreScaleValuesInternal(v7, a2, a3);
    v5 = 1;
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v5;
}

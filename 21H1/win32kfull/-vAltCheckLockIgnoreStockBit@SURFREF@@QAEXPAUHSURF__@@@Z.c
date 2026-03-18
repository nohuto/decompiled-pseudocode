/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z @ 0x1D3836
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254 (_NtGdiDdDDIDestroyDCFromMemory@4.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFREF::vAltCheckLockIgnoreStockBit(SURFREF *this, HSURF a2)
{
  *(_DWORD *)this = HmgShareLockCheckIgnoreStockBit(a2, 5);
}

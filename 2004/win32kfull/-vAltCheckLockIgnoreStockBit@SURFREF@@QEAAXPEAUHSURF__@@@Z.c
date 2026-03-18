/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0277678
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0114920 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltCheckLockIgnoreStockBit(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *(_QWORD *)this = HmgShareLockCheckIgnoreStockBit(v3, a2);
}

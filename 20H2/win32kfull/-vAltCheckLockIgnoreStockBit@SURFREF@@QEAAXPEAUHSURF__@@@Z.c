/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0276108
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0115980 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
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

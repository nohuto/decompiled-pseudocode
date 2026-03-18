/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreReferenceObject @ 0x1C00657F8 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01145F0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0114920 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 *     vUnlinkEudcRFONTs @ 0x1C02991C4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02992C0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *(_QWORD *)this != 0LL;
}

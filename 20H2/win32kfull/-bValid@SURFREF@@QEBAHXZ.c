/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0021A28 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0098F20 (GreReferenceObject.c)
 *     NtGdiSelectBitmap @ 0x1C00F7940 (NtGdiSelectBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0115980 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 *     vUnlinkEudcRFONTs @ 0x1C0297D74 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0297E70 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *(_QWORD *)this != 0LL;
}

/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     GreReferenceObject @ 0x1C00657F8 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00EEE58 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0114920 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngDeleteSurface @ 0x1C01502C0 (NtGdiEngDeleteSurface.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 *     GreCreateHalftonePalette @ 0x1C02B78FC (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02B8240 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}

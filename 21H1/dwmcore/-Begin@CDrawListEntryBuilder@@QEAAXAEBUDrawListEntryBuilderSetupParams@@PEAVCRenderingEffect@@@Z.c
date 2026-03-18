/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800A6E64
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BF640 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1350 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C86BC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  _QWORD *v6; // rax
  struct CRenderingEffect *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  if ( *((struct CRenderingEffect **)this + 4) != a3 )
  {
    v7 = a3;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v7);
    v7 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
  }
  *((_DWORD *)this + 569) = (*(__int64 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)a3 + 32LL))(a3);
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  *(_WORD *)((char *)this + 2297) = 0;
  if ( !*v6 && !v6[2] || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  if ( (*((_BYTE *)this + 24) & 0x10) != 0 || !*v6 )
    *((_BYTE *)this + 2296) = CCommonRegistryData::EnableCpuClipping;
  else
    *((_BYTE *)this + 2296) = 0;
  CDrawListEntryBuilder::ResetAccumulationBuffers(this);
}

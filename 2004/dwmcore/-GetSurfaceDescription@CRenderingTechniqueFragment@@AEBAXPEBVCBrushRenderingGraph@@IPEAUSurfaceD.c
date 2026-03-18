/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800B93A8
 * Callers:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8CB0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800B8E94 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B92B0 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x1800B9430 (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  char v7; // al
  __int64 v8; // rax

  *(_QWORD *)a4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a3);
  *((_BYTE *)a4 + 10) = CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
                          this,
                          a3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 8),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 9));
  v7 = 0;
  if ( *(_QWORD *)this )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 64LL))(
           v8,
           *((unsigned int *)this + 4),
           a3);
  }
  *((_BYTE *)a4 + 11) = v7;
}

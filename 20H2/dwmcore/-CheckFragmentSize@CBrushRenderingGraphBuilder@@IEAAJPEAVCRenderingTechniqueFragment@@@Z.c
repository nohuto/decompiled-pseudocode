/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180057C80
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E2F8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180057B38 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180055A9C (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180057CC8 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180057FB8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x180267838 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // r15
  unsigned int v5; // esi
  struct CBrushRenderingGraph *v7; // r8
  int v8; // eax
  unsigned int v9; // ecx
  __int64 *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rdi
  int v16; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = *this;
  v5 = 0;
  while ( CRenderingTechniqueFragment::NeedsToBeBrokenUp(a2, *this) )
  {
    v7 = *this;
    v16 = *((_DWORD *)v2 + 42);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &v17, v7);
    v8 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v17, &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x225u, 0LL);
      v13 = (__int64 *)v17;
      if ( v17 )
      {
        v14 = (void *)*((_QWORD *)v17 + 14);
        if ( v14 )
          operator delete(v14);
        v15 = v13[4];
        if ( v15 )
        {
          std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v13[4], v13[5]);
          std::_Deallocate<16,0>(v15, (v13[6] - v15) & 0xFFFFFFFFFFFFFFF0uLL);
          v13[4] = 0LL;
          v13[5] = 0LL;
          v13[6] = 0LL;
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v13);
        operator delete(v13);
      }
      return v5;
    }
    v10 = (__int64 *)v17;
    if ( v17 )
    {
      v11 = (void *)*((_QWORD *)v17 + 14);
      if ( v11 )
        operator delete(v11);
      v12 = v10[4];
      if ( v12 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v10[4], v10[5]);
        std::_Deallocate<16,0>(v12, (v10[6] - v12) & 0xFFFFFFFFFFFFFFF0uLL);
        v10[4] = 0LL;
        v10[5] = 0LL;
        v10[6] = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v10);
      operator delete(v10);
    }
  }
  return v5;
}

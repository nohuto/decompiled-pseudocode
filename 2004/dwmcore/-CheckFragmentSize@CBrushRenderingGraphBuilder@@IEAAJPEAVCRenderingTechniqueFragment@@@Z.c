/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B919C
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E8C8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B7BB4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B9054 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800B8340 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800B91E4 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x1800B9948 (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x180268618 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // r15
  unsigned int v5; // esi
  struct CBrushRenderingGraph *v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rbx
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
    v8 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v17, &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x225u, 0LL);
      v13 = v17;
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
    v10 = v17;
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

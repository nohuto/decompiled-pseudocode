/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18001D2F0
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001D1A8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x18001D41C (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x18001D474 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800494CC (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18004A5BC (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v8; // esi
  CProjectedShadowApproxBlurEffect *v9; // rax
  CProjectedShadowApproxBlurEffect *v10; // rbx
  CProjectedShadowApproxBlurEffect *v11; // rcx
  void *v12; // rdi
  struct CCompiledEffectCache *ShaderCache; // rax
  struct CRenderingTechniqueFragment *v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+50h] [rbp-28h]

  v8 = 0;
  v9 = (CProjectedShadowApproxBlurEffect *)operator new(0xA8uLL);
  if ( v9 )
    v10 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v9);
  else
    v10 = 0LL;
  if ( v10 )
    (**(void (__fastcall ***)(CProjectedShadowApproxBlurEffect *))v10)(v10);
  v12 = DefaultHeap::Alloc(0x80uLL);
  if ( v12 )
  {
    ShaderCache = CProjectedShadowApproxBlurEffect::GetShaderCache(v11);
    v14 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                  v12,
                                                  ((unsigned __int64)v10 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64),
                                                  ShaderCache,
                                                  0LL,
                                                  0,
                                                  0);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v19[0] = a2;
    v15 = v19;
    v19[1] = a3;
    v16 = 2LL;
    do
    {
      v17 = *v15;
      v20[1] = 0LL;
      v21 = 0;
      v20[0] = v17;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v14,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v20);
      ++v15;
      --v16;
    }
    while ( v16 );
    *a4 = v14;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, 0x5Du, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(CProjectedShadowApproxBlurEffect *))(*(_QWORD *)v10 + 8LL))(v10);
  return v8;
}

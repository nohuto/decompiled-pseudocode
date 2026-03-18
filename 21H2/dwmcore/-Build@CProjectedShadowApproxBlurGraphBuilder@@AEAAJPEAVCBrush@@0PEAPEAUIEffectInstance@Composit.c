/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18025A000
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18025A198 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180035B1C (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180036D6C (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003719C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180037300 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180259E50 (--4-$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIEffectInst.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180259EB0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  __int64 v6; // rcx
  int v7; // ebx
  CRenderingTechniqueFragment *v8; // rsi
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v10; // rax
  int v11; // r9d
  CRenderingTechniqueFragment *v12; // rdi
  unsigned int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectInstance *v17; // [rsp+40h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v18; // [rsp+48h] [rbp-18h]
  struct CRenderingTechniqueFragment *v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]

  v17 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v18 = &v16;
  v20 = 1;
  v7 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v19);
  if ( v20 )
  {
    v8 = *v18;
    *v18 = v19;
    if ( v8 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v8);
      operator delete(v8);
    }
  }
  if ( v7 < 0 )
  {
    v11 = v7;
    v14 = 54;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v16);
    v7 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 57;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::IEffectInstance>::operator=(
        (__int64 *)&v17,
        *(void (__fastcall ****)(_QWORD))v16);
      ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v16, &v15);
      v7 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v14 = 62;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
        v7 = ShaderBodies;
        if ( ShaderBodies < 0 )
        {
          v14 = 64;
        }
        else
        {
          ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
          v7 = ShaderBodies;
          if ( ShaderBodies >= 0 )
          {
            CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
            v10 = v17;
            v17 = 0LL;
            *a4 = v10;
            goto LABEL_17;
          }
          v14 = 65;
        }
      }
    }
    v11 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v11, v14);
LABEL_17:
  v12 = v16;
  if ( v16 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v16);
    operator delete(v12);
  }
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v7;
}

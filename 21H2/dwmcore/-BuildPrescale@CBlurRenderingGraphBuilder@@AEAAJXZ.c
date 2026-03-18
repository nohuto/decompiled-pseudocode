/*
 * XREFs of ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180031BCC (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180032720 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18003277C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800327C0 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180034FA0 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800369F8 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800F38DC (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale(CBlurRenderingGraphBuilder *this)
{
  _DWORD *v2; // rax
  unsigned int v3; // ecx
  _DWORD *v4; // rbx
  CRenderingTechniqueFragment *v5; // rax
  CPassthroughEffect *v6; // rcx
  CRenderingTechniqueFragment *v7; // rdi
  struct CCompiledEffectCache *ShaderCache; // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rax
  CRenderingTechniqueFragment *v16; // rdi
  int v18; // [rsp+30h] [rbp-29h] BYREF
  CRenderingTechniqueFragment *v19; // [rsp+38h] [rbp-21h] BYREF
  __int128 v20; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = DefaultHeap::Alloc(0x18uLL);
  v4 = v2;
  if ( v2 )
  {
    v2[3] = 0;
    v2[2] = 0;
    *(_QWORD *)v2 = &CPassthroughEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
    *((_QWORD *)v2 + 2) = &CPassthroughEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
    v5 = (CRenderingTechniqueFragment *)operator new(0x80uLL);
    v7 = v5;
    if ( v5 )
    {
      ShaderCache = CPassthroughEffect::GetShaderCache(v6);
      v5 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                            v7,
                                            v4,
                                            ShaderCache,
                                            0LL,
                                            0,
                                            0);
    }
    v19 = v5;
    CRenderingTechniqueFragment::AddIntermediateInput(v5, 0xFFFFFFFF);
    v9 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v19, &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      v11 = *(_QWORD *)this;
      *(_QWORD *)&v20 = *(_QWORD *)this + 1572LL;
      v12 = *(_QWORD *)(v11 + 520);
      v13 = dword_18032C490[5 * *(int *)(v11 + 1568)] == 3;
      v11 += 512LL;
      v14 = (v12 - *(_QWORD *)v11) >> 6;
      BYTE8(v20) = v13 + 1;
      HIDWORD(v20) = v18;
      v21 = off_1802C1518;
      v23 = &v21;
      v22 = v20;
      v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
              v11,
              v14);
      *(_QWORD *)(v15 + 56) = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v15, &v21);
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v21);
      v10 = 0;
    }
    v16 = v19;
    if ( v19 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v19);
      operator delete(v16, 0x80uLL);
    }
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v4);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x11u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x8007000ELL);
  }
  return v10;
}

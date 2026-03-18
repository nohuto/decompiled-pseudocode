/*
 * XREFs of ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180032720 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18003277C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800327C0 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180034FA0 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800369F8 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEf.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1800C6C50 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1800C6CD8 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800F38DC (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildOnePass(_QWORD *a1, int a2, _QWORD *a3, char a4)
{
  __int64 v4; // r13
  char v5; // di
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // eax
  int v9; // r14d
  float v10; // xmm0_4
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rdx
  gsl::details *v24; // rcx
  int v25; // eax
  CCustomKernelEffect *v26; // rbx
  unsigned int v27; // r14d
  CCustomKernelEffect *v28; // rax
  CCustomKernelEffect *v29; // rdi
  struct CCompiledEffectCache *ShaderCache; // rax
  int v31; // eax
  CCustomKernelEffect *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rax
  CCustomKernelEffect *v36; // rdi
  int v37; // [rsp+30h] [rbp-71h]
  char v38; // [rsp+38h] [rbp-69h]
  CCustomKernelEffect *v39; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-59h]
  int v41; // [rsp+4Ch] [rbp-55h]
  _BYTE v42[8]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD *v43; // [rsp+58h] [rbp-49h]
  _QWORD *v44; // [rsp+60h] [rbp-41h]
  _QWORD *v45; // [rsp+68h] [rbp-39h]
  _QWORD v46[3]; // [rsp+70h] [rbp-31h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+88h] [rbp-19h] BYREF
  CCustomKernelEffect *v48; // [rsp+90h] [rbp-11h]
  __int64 (__fastcall ***v49)(); // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v4 = *a1;
  v43 = a3;
  v44 = a1;
  if ( a2 < 40960 )
    v5 = a2 >= 37632;
  else
    v5 = 2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3[1] - *a3) >> 2);
  v38 = v5;
  if ( (unsigned __int8)v5 < 2u )
    v7 = (0x400000009LL - (unsigned __int64)(1431655766 * (unsigned int)((__int64)(a3[1] - *a3) >> 2))) >> 32;
  else
    v7 = 128;
  v8 = v7 + v6 - 1;
  if ( v8 < (unsigned int)v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  else
  {
    v40 = v8 / v7;
    v9 = v8 / v7;
    if ( a4 )
      v10 = *(float *)(v4 + 1564);
    else
      v10 = *(float *)(v4 + 1560);
    v11 = (_QWORD *)(v4 + 512);
    v12 = (__int64)(*(_QWORD *)(v4 + 520) - *(_QWORD *)(v4 + 512)) >> 6;
    v13 = 5LL * *(int *)(v4 + 1568);
    v45 = (_QWORD *)(v4 + 512);
    if ( v10 <= flt_18032C488[v13] )
    {
      v14 = off_1802CAF88;
    }
    else
    {
      v14 = off_1802C1578;
      LOBYTE(v48) = a4;
    }
    v47 = v14;
    v49 = &v47;
    v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            v4 + 512,
            v12);
    *(_QWORD *)(v15 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v15, &v47);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v47);
    v16 = *(_DWORD *)(v4 + 168);
    v17 = 0;
    v41 = v16;
    v18 = v16;
    if ( v9 )
    {
      while ( 1 )
      {
        v19 = v17 * v7;
        v20 = v6 - v19;
        v21 = *v43 + 12 * v19;
        v22 = v7;
        if ( v7 >= v20 )
          v22 = v20;
        gsl::details::extent_type<-1>::extent_type<-1>(v46, v22);
        v46[1] = v21;
        if ( v46[0] == -1LL || !v21 && v46[0] )
        {
          gsl::details::terminate(v24);
          JUMPOUT(0x180032717LL);
        }
        v39 = 0LL;
        LOBYTE(v24) = v5;
        v25 = CCustomKernelEffect::Create(v24, v23, v46, &v39);
        v26 = v39;
        v27 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15E,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
            (const char *)(unsigned int)v25);
          goto LABEL_36;
        }
        v28 = (CCustomKernelEffect *)operator new(0x80uLL);
        v29 = v28;
        if ( v28 )
        {
          ShaderCache = CCustomKernelEffect::GetShaderCache(v26);
          LOBYTE(v37) = 0;
          v28 = (CCustomKernelEffect *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                         v29,
                                         v26,
                                         ShaderCache,
                                         0LL,
                                         0,
                                         v37);
        }
        v39 = v28;
        CRenderingTechniqueFragment::AddIntermediateInput(v28, 0xFFFFFFFF);
        v31 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v44, &v39, v42);
        v27 = v31;
        if ( v31 < 0 )
          break;
        v32 = v39;
        if ( v39 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v39);
          operator delete(v32, 0x80uLL);
        }
        if ( v26 )
          CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v26);
        v5 = v38;
        if ( ++v17 >= v40 )
        {
          v18 = *(_DWORD *)(v4 + 168);
          v11 = v45;
          v16 = v41;
          goto LABEL_25;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)v31);
      v36 = v39;
      if ( v39 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v39);
        operator delete(v36, 0x80uLL);
      }
LABEL_36:
      if ( v26 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v26);
      return v27;
    }
    else
    {
LABEL_25:
      v33 = v11[1] - *v11;
      HIDWORD(v39) = v18 - v16;
      v47 = off_1802C1548;
      LODWORD(v39) = v16;
      v48 = v39;
      v49 = &v47;
      v34 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
              v11,
              v33 >> 6);
      *(_QWORD *)(v34 + 56) = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v34, &v47);
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v47);
      return 0LL;
    }
  }
}

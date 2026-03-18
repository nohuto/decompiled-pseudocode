/*
 * XREFs of ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x18003183C (-Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800318E8 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180032720 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18003277C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800327C0 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180036D6C (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  float v12; // xmm2_4
  _DWORD *i; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int ShaderBodies; // eax
  float v19; // xmm3_4
  __int128 v20; // [rsp+20h] [rbp-39h] BYREF
  __int64 v21; // [rsp+30h] [rbp-29h]
  _QWORD v22[7]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = *(_QWORD *)this;
    v21 = 0LL;
    v20 = 0LL;
    v7 = *(int *)(v6 + 1568);
    v8 = 5 * v7;
    CGaussianKernel::GenerateTaps((unsigned __int64 *)&v20, 0, *(float *)(v6 + 1560), flt_18032C48C[5 * v7]);
    CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, 0LL);
    v9 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
    v22[0] = off_1802C14B8;
    v23 = v22;
    v10 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            v6 + 512,
            v9 >> 6);
    *(_QWORD *)(v10 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v10, v22);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v22);
    v12 = *(float *)(v6 + 1564);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 1560) - v12) & _xmm) > 0.0000011920929 )
    {
      v19 = flt_18032C48C[v8];
      *((_QWORD *)&v20 + 1) = v20;
      CGaussianKernel::GenerateTaps((unsigned __int64 *)&v20, 1, v12, v19);
    }
    else
    {
      for ( i = (_DWORD *)v20; i != *((_DWORD **)&v20 + 1); i += 3 )
      {
        v14 = i[1];
        i[1] = *i;
        *i = v14;
      }
    }
    LOBYTE(v11) = 1;
    CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, v11);
    v15 = *(_QWORD *)(v6 + 520) - *(_QWORD *)(v6 + 512);
    v22[0] = off_1802C14E8;
    v23 = v22;
    v16 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            v6 + 512,
            v15 >> 6);
    *(_QWORD *)(v16 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v16, v22);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v22);
    ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)ShaderBodies);
    else
      v5 = 0;
    if ( (_QWORD)v20 )
      std::_Deallocate<16,0>(v20, 4 * ((v21 - (__int64)v20) >> 2));
  }
  return v5;
}

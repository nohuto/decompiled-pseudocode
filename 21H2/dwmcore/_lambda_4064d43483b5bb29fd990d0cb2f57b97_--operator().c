/*
 * XREFs of _lambda_4064d43483b5bb29fd990d0cb2f57b97_::operator() @ 0x1800589A4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4064d43483b5bb29fd990d0cb2f57b97__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E8B10 (std--_Func_impl_no_alloc__lambda_4064d43483b5bb29fd990d0cb2f57b97__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x180057B58 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x1800BA398 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_4064d43483b5bb29fd990d0cb2f57b97_::operator()(__int64 a1, __int64 a2)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  __int64 v6; // rbx
  unsigned int TargetFromSource; // eax
  int v8; // ebx
  int v9; // eax
  CDrawingContext *v10; // rcx
  __int64 v12; // rdx
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-28h] BYREF
  float v14; // [rsp+30h] [rbp-18h]
  float v15; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = **(float **)a1;
  v5 = *(float *)(*(_QWORD *)a1 + 4LL);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) < 0.0000011920929 )
  {
    return 0LL;
  }
  v6 = *(unsigned int *)(a2 + 32);
  v13.top = 0.0;
  v13.right = 0.0;
  v13.left = v4;
  v13.bottom = v5;
  v14 = 0.0 - (float)(v4 * 0.0);
  v15 = 0.0 - (float)(v5 * 0.0);
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v6,
                       &v13);
  *(_BYTE *)(104 * v6 + *(_QWORD *)(a2 + 48) + 100) = *(_BYTE *)(a1 + 8);
  v8 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(
         (CExternalEffectGraph::CGraphRenderingContext *)a2,
         TargetFromSource);
  if ( v8 < 0 )
  {
    v12 = 275LL;
  }
  else
  {
    v8 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
           (CExternalEffectGraph::CGraphRenderingContext *)a2,
           *(_DWORD *)(a1 + 12),
           1u);
    if ( v8 >= 0 )
    {
      v9 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = -1;
      v10 = *(CDrawingContext **)a2;
      *(_DWORD *)(a2 + 32) = v9;
      CDrawingContext::PopLayer(v10);
      return 0LL;
    }
    v12 = 276LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}

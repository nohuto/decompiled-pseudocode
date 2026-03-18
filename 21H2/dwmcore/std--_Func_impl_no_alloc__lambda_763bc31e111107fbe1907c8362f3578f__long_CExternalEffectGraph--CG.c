/*
 * XREFs of std::_Func_impl_no_alloc__lambda_763bc31e111107fbe1907c8362f3578f__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E5B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeHalfSizeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIW4SeparableKernelPass@@@Z @ 0x180057A90 (-MakeHalfSizeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIW4SeparableKern.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x1800BA398 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_763bc31e111107fbe1907c8362f3578f__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  CExternalEffectGraph::CGraphRenderingContext *v2; // rdi
  __int64 v3; // rbx
  unsigned int HalfSizeTargetFromSource; // eax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CExternalEffectGraph::CGraphRenderingContext *)*a2;
  v3 = *(unsigned int *)(*a2 + 32);
  HalfSizeTargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeHalfSizeTargetFromSource(
                               *a2,
                               v3,
                               *(_BYTE *)(a1 + 8));
  *(_BYTE *)(104 * v3 + *((_QWORD *)v2 + 6) + 100) = 1;
  v5 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(v2, HalfSizeTargetFromSource);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v5);
  else
    return 0;
  return v6;
}

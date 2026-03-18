/*
 * XREFs of std::_Func_impl_no_alloc__lambda_676e7f6ea73e348d625bea048ced39d0__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800E5B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_676e7f6ea73e348d625bea048ced39d0__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        CExternalEffectGraph::CGraphRenderingContext **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(*a2, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x173,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v2);
  else
    return 0;
  return v3;
}

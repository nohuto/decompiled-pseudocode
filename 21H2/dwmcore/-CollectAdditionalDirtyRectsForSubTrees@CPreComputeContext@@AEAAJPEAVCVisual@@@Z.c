/*
 * XREFs of ?CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180088064
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CollectAdditionalDirtyRects@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@@Z @ 0x1800880C4 (-CollectAdditionalDirtyRects@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@@Z.c)
 */

__int64 __fastcall CPreComputeContext::CollectAdditionalDirtyRectsForSubTrees(
        struct CPreComputeContext::SubTreeContext **this,
        struct CVisual *a2)
{
  struct CPreComputeContext::SubTreeContext *v2; // rbx
  struct CPreComputeContext::SubTreeContext *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *this;
  v4 = this[1];
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0LL;
    v5 = CPreComputeContext::CollectAdditionalDirtyRects((CPreComputeContext *)this, a2, v2);
    v6 = v5;
    if ( v5 < 0 )
      break;
    v2 = (struct CPreComputeContext::SubTreeContext *)((char *)v2 + 448);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x650,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}

/*
 * XREFs of ?FenceRenderAfterScribble@CComputeScribbleFramebuffer@@QEAAJXZ @ 0x1801AA270
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800B7458 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::FenceRenderAfterScribble(CComputeScribbleFramebuffer *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 600LL) + 1184LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
         *(_QWORD *)(*((_QWORD *)this + 10) + 16LL),
         *((_QWORD *)this + 25));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}

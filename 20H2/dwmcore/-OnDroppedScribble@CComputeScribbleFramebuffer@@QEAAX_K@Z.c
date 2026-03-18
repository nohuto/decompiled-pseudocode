/*
 * XREFs of ?OnDroppedScribble@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801A5F3C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A44D0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CComputeScribbleFramebuffer::OnDroppedScribble(CComputeScribbleFramebuffer *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 24LL) + 80LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
  if ( v1 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v1);
    __debugbreak();
  }
}

/*
 * XREFs of ?Schedule@CComputeScribbleFramebuffer@@QEAAJPEAVCComputeScribbleScheduler@@I@Z @ 0x1801A6040
 * Callers:
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18019F4F8 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801A49F8 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V-$span@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801A635C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Schedule(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribbleScheduler *a2,
        int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v7; // rax
  int v8; // edi
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 14);
  if ( v3 == v4 )
    return 0LL;
  v7 = (v4 - v3) >> 3;
  if ( v7 < 0 || !v3 && v7 || (*(_QWORD *)&v9 = v7, (*((_QWORD *)&v9 + 1) = v3) == 0LL) && v7 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v8 = CComputeScribbleScheduler::ScheduleScribbleFrame(
         a2,
         (volatile signed __int32 *)this,
         &v9,
         *((CDrawListEntry **)this + 25),
         a3);
  if ( v8 >= 0 )
  {
    *((_BYTE *)this + 208) = 1;
    return 0LL;
  }
  std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear((char *)this + 104);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x107,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}

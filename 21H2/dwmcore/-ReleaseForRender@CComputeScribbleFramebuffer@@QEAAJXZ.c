/*
 * XREFs of ?ReleaseForRender@CComputeScribbleFramebuffer@@QEAAJXZ @ 0x1801A6950
 * Callers:
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18019FEC8 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801A6D2C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::ReleaseForRender(CComputeScribbleFramebuffer *this)
{
  char *v1; // rbx
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 104;
  if ( *((_QWORD *)this + 13) == *((_QWORD *)this + 14) )
    return 0LL;
  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)this + 25);
  v4 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
  *(_BYTE *)(v2 + 1435) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2 + 264) + 152LL))(
         *(_QWORD *)(v2 + 264),
         v4,
         v3);
  if ( v5 >= 0 )
    return 0LL;
  std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(v1);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE7,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}

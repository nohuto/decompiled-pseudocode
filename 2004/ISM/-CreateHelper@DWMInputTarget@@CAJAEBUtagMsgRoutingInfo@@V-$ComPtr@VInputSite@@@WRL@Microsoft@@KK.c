/*
 * XREFs of ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x180029F88
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A640 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@@Z @ 0x1800B06B8 (-InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800B63C4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z @ 0x18002A044 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::CreateHelper(int a1, __int64 *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  void *v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a5;
  if ( a5 )
  {
    *a5 = 0LL;
    v10 = RefCountedObject::operator new(0x88uLL);
    v11 = (int)v10;
    if ( v10 )
    {
      a5 = (_QWORD *)*a2;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&a5);
      v10 = (void *)DWMInputTarget::DWMInputTarget(v11, a1, (unsigned int)&a5, a3, a4);
    }
    if ( v10 )
    {
      *v5 = v10;
      v12 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return 0LL;
    }
    v14 = -2147024882;
    v15 = 104LL;
  }
  else
  {
    v14 = -2147467261;
    v15 = 95LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)v14,
    v17);
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v14;
}

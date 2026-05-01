/*
 * XREFs of ?OnDuplicateFocusedTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x180270D14
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x180270E70 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::OnDuplicateFocusedTab(TabShellHotKeyHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v11 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v11);
  v4 = v3(v2, &v11);
  if ( v4 >= 0 )
  {
    if ( v11 )
    {
      v5 = (__int64 *)*((_QWORD *)this + 5);
      v6 = *v5;
      v10 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v6 + 64))(
             v5,
             v11,
             &GUID_f264283f_b510_4555_80ed_4c7216018854,
             &v10);
      v4 = v7;
      if ( v7 < 0 )
      {
        v8 = 285LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v7);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
        goto LABEL_13;
      }
      v12 = 0LL;
      if ( v10 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 48LL))(v10, &v12);
        v4 = v7;
        if ( v7 < 0 )
        {
          v8 = 291LL;
          goto LABEL_5;
        }
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)this + 5) + 152LL))(
               *((_QWORD *)this + 5),
               v11,
               &v12);
        v4 = v7;
        if ( v7 < 0 )
        {
          v8 = 292LL;
          goto LABEL_5;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    }
    v4 = 0;
  }
LABEL_13:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return (unsigned int)v4;
}

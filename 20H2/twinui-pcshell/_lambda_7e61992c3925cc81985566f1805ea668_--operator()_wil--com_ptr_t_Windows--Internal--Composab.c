/*
 * XREFs of _lambda_7e61992c3925cc81985566f1805ea668_::operator()_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy___ @ 0x180262D14
 * Callers:
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18027E8F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_7e61992c3925cc81985566f1805ea668_::operator()_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = *a2;
  LOBYTE(v6) = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 176LL))(v2, &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x561,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
  return (_BYTE)v6 == 0;
}

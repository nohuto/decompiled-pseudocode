/*
 * XREFs of ?SetResizingState@CTaskWindow@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180080E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::SetResizingState(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 552LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F3,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v2);
  }
}

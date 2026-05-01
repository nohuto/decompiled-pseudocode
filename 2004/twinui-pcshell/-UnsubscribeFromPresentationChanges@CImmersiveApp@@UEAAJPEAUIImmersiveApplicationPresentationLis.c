/*
 * XREFs of ?UnsubscribeFromPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180182FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::UnsubscribeFromPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  RTL_SRWLOCK *v2; // rdi
  struct IImmersiveApplicationPresentationListener *v5; // rbx
  struct IImmersiveApplicationPresentationListener *v6; // rax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v5 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 80);
  if ( v6 && a2 == v6 )
  {
    *((_QWORD *)this + 80) = 0LL;
    v5 = v6;
    v7 = 0;
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9CE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v5 )
    (*(void (__fastcall **)(struct IImmersiveApplicationPresentationListener *))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}

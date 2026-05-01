/*
 * XREFs of ?SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180182A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SubscribeForPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IImmersiveApplicationPresentationListener *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveApplicationPresentationListener *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 80);
  if ( v5 )
  {
    if ( v5 != a2 )
    {
      v6 = -2147024713;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B5,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)0x800700B7LL);
      goto LABEL_8;
    }
  }
  else if ( a2 )
  {
    v10 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v7 = *((_QWORD *)this + 80);
    *((_QWORD *)this + 80) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v6 = 0;
LABEL_8:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}

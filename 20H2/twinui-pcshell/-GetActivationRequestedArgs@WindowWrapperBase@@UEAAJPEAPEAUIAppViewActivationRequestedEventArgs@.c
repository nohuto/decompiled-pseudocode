/*
 * XREFs of ?GetActivationRequestedArgs@WindowWrapperBase@@UEAAJPEAPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetActivationRequestedArgs(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs **a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v6 = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *)*((_QWORD *)this + 13);
    if ( v6 )
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x612,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}

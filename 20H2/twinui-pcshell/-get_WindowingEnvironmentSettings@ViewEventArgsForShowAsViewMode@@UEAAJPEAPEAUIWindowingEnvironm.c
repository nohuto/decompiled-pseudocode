/*
 * XREFs of ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AD6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_WindowingEnvironmentSettings(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    v4 = (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *)*((_QWORD *)this + 10);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x169,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           a4);
  }
  return result;
}

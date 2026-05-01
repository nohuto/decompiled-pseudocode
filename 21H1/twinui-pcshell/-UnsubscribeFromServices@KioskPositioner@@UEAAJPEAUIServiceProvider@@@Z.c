/*
 * XREFs of ?UnsubscribeFromServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803BCB80
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall KioskPositioner::UnsubscribeFromServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  __int64 result; // rax
  SmartCookie *v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  v4 = (KioskPositioner *)((char *)this + 208);
  try
  {
    SmartCookie::Unregister(v4);
    SmartCookie::Unregister((KioskPositioner *)((char *)this + 336));
    SmartCookie::Unregister((KioskPositioner *)((char *)this + 464));
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 22);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x240,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v5);
  }
  return result;
}

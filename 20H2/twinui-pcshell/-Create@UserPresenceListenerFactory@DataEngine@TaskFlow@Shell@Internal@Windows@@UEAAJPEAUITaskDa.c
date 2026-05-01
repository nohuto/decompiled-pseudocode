/*
 * XREFs of ?Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x18023AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x18023A81C (--$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@A.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18023B270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_18023B270.c)
 *     ?copy_to@?$com_ptr_t@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x18023B4E0 (-copy_to@-$com_ptr_t@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::Create(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *a2,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener **a3)
{
  int v4; // eax
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *a3 = 0LL;
  v10 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
         &v10,
         (__int64 *)&v9);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        56LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,wil::err_exception_policy>::copy_to(
      &v10,
      v5,
      a3);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3D,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v6);
  }
  return result;
}

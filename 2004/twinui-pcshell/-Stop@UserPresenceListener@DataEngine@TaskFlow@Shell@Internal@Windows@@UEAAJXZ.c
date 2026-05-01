/*
 * XREFs of ?Stop@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x18023BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Stop(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( *((_DWORD *)this + 22) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          85LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
          (const char *)(unsigned int)v5);
      *((_DWORD *)this + 22) = 0;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           a4);
  }
  return result;
}

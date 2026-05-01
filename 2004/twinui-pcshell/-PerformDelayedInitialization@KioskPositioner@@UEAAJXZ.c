/*
 * XREFs of ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x1803DCEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall KioskPositioner::PerformDelayedInitialization(KioskPositioner *this)
{
  int v2; // eax
  __int64 v3; // rdx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v6; // [rsp+30h] [rbp+8h]

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 23) + 56LL))(
         *((_QWORD *)this + 23),
         4LL,
         4LL);
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    586LL,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    (const char *)(unsigned int)v2);
  __debugbreak();
  *(_DWORD *)(v3 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(v3 + 40),
                           (void *)0x24D,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v4);
  return v6;
}

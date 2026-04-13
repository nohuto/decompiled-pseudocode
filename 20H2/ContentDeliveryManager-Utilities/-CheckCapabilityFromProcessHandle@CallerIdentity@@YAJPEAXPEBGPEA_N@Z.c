/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180058D80
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058E34 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180047CE4 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180058D28 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180059368 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        void **a4)
{
  int ImpersonationTokenFromProcess; // eax
  bool *v7; // r9
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hObject; // [rsp+50h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  hObject = 0LL;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(this, a2, (unsigned int)&hObject, a4);
  v8 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
    v8 = CallerIdentity::CheckCapabilityFromImpersonationToken((CallerIdentity *)hObject, a2, a3, v7);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v8;
}

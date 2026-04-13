/*
 * XREFs of ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180059178
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800591D0 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180005DA0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromImpersonationToken(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  v5 = CapabilityCheck(this, a2, &v8, a4);
  if ( v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xE,
             (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
             (const char *)(unsigned int)v5);
  *(_BYTE *)a3 = v8 != 0;
  return 0LL;
}

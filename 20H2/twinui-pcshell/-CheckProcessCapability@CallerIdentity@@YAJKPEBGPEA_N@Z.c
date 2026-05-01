/*
 * XREFs of ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x18046B5F0
 * Callers:
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x18046A670 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18046B544 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::CheckProcessCapability(DWORD dwProcessId, void *a2, unsigned __int16 *a3, bool *a4)
{
  CallerIdentity *v6; // rbx
  bool *v7; // r9
  unsigned int LastError; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  v6 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle(v6, a2, a3, v7);
    LastError = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x44,
                  (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
                  (const char *)v7);
  }
  if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return LastError;
}

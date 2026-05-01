/*
 * XREFs of ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x180028B64
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800289AC (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1800358FC (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

__int64 __fastcall HampSystemIsProcessLifetimeManaged(void *a1, unsigned int *a2)
{
  __int64 v3; // rdx
  NTSTATUS v4; // ebx
  int Policy_Internal; // eax
  _BYTE v7[8]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v4 = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( v4 >= 0 )
  {
    Policy_Internal = AppModelPolicy_GetPolicy_Internal(TokenHandle, v3, &v9, v8, v7);
    v4 = Policy_Internal | 0x10000000;
    if ( Policy_Internal >= 0 )
    {
      v4 = 0;
      *a2 = v9 == 65537;
    }
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)v4;
}

/*
 * XREFs of HamQueryCallerTerminateReason @ 0x1800074B0
 * Callers:
 *     <none>
 * Callees:
 *     CempGetTokenHostInfo @ 0x180007590 (CempGetTokenHostInfo.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007870 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

int __fastcall HamQueryCallerTerminateReason(enum _HAM_TERMINATE_REASON *a1)
{
  NTSTATUS TokenHostInfo; // ebx
  int result; // eax
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int16 v5[232]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v6[96]; // [rsp+200h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle, v5);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo < 0 )
    return TokenHostInfo;
  if ( (unsigned __int8)PsmIsDynamicKey(v5) )
  {
    *(_DWORD *)a1 = 0;
    return 0;
  }
  else
  {
    result = HampUtilQueryRegistryTerminateReason(v5, v6, a1);
    if ( result >= 0 )
      return 0;
  }
  return result;
}

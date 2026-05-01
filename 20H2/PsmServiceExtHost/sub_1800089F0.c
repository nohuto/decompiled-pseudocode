/*
 * XREFs of sub_1800089F0 @ 0x1800089F0
 * Callers:
 *     sub_180008BD0 @ 0x180008BD0 (sub_180008BD0.c)
 *     sub_18002C410 @ 0x18002C410 (sub_18002C410.c)
 *     sub_1800341A0 @ 0x1800341A0 (sub_1800341A0.c)
 *     sub_180036A90 @ 0x180036A90 (sub_180036A90.c)
 *     sub_18003DD30 @ 0x18003DD30 (sub_18003DD30.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_18003DF90 @ 0x18003DF90 (sub_18003DF90.c)
 *     sub_18003E090 @ 0x18003E090 (sub_18003E090.c)
 *     sub_180042A70 @ 0x180042A70 (sub_180042A70.c)
 *     sub_180042BF4 @ 0x180042BF4 (sub_180042BF4.c)
 *     sub_180062BD0 @ 0x180062BD0 (sub_180062BD0.c)
 *     sub_1800801E0 @ 0x1800801E0 (sub_1800801E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800089F0(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS TokenHostIdAsUlong64; // ebx
  void *v12; // rax
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v16; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-C0h] BYREF
  PSID TokenInformationa[12]; // [rsp+B0h] [rbp-50h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_20;
  CurrentThread = GetCurrentThread();
  TokenHostIdAsUlong64 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( TokenHostIdAsUlong64 < 0 )
    goto LABEL_22;
  if ( DestinationSid )
  {
    TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformationa, 0x58u, &ReturnLength);
    if ( TokenHostIdAsUlong64 >= 0 )
      TokenHostIdAsUlong64 = RtlCopySid(0x44u, DestinationSid, TokenInformationa[0]);
    if ( TokenHostIdAsUlong64 < 0 )
      goto LABEL_22;
  }
  if ( TokenInformation
    && (TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &v16),
        TokenHostIdAsUlong64 < 0)
    || a5 && (TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), TokenHostIdAsUlong64 < 0) )
  {
LABEL_22:
    RpcRevertToSelf();
    goto LABEL_17;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_20;
  if ( a4 )
  {
    memset(&RpcCallAttributes[2], 0, 0x68uLL);
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = RpcCallAttributes[16];
      goto LABEL_14;
    }
LABEL_20:
    TokenHostIdAsUlong64 = -1073741823;
    goto LABEL_17;
  }
LABEL_14:
  if ( a6 )
  {
    v12 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v12;
  }
  TokenHostIdAsUlong64 = 0;
LABEL_17:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)TokenHostIdAsUlong64;
}

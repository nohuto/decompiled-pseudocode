/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C0049DC8
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C02D2CA0 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C02D2F10 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x1C004A1D4 (-OpenThreadToken@@YAJPEAPEAX@Z.c)
 */

char IsAllowedToCallMiracast(void)
{
  signed int v0; // r13d
  PSID *v1; // r14
  PSID *v2; // r12
  void *v3; // rdi
  char v4; // bl
  int v5; // eax
  HANDLE v6; // rsi
  __int64 v7; // r9
  PUCHAR v8; // rax
  __int64 v10; // r9
  ULONG v11; // eax
  __int64 v12; // r9
  void *v13; // rax
  ULONG *v14; // r15
  ULONG v15; // ebx
  PULONG v16; // rax
  ULONG ReturnLength[6]; // [rsp+30h] [rbp-18h] BYREF
  ULONG TokenInformationLength; // [rsp+90h] [rbp+48h] BYREF
  HANDLE TokenHandle; // [rsp+98h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+A0h] [rbp+58h] BYREF
  int v21; // [rsp+A8h] [rbp+60h]

  v0 = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = OpenThreadToken(&TokenHandle);
  v6 = TokenHandle;
  if ( v5 >= 0 )
  {
    TokenInformation = 0;
    ReturnLength[0] = 0;
    if ( ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, ReturnLength) >= 0 )
    {
      if ( TokenInformation )
      {
        LODWORD(TokenHandle) = 0;
        ZwQueryInformationToken(v6, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenHandle);
        v1 = (PSID *)operator new[]((unsigned int)TokenHandle, 0x4B677844u, 256LL, v10);
        if ( v1 )
        {
          if ( ZwQueryInformationToken(v6, TokenAppContainerSid, v1, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
          {
            v11 = RtlLengthRequiredSid(8u);
            v13 = (void *)operator new[](v11, 0x4B677844u, 256LL, v12);
            v3 = v13;
            if ( v13 )
            {
              if ( RtlInitializeSid(v13, &IdentifierAuthority, 8u) >= 0 )
              {
                v21 = 0;
                v14 = (ULONG *)&unk_1C00B0B00;
                while ( 1 )
                {
                  do
                  {
                    v15 = *v14;
                    v16 = RtlSubAuthoritySid(v3, v0++);
                    ++v14;
                    *v16 = v15;
                  }
                  while ( v0 < 8 );
                  v0 = 0;
                  if ( RtlEqualSid(*v1, v3) )
                    goto LABEL_6;
                  if ( (unsigned int)++v21 >= 6 )
                  {
                    v4 = 0;
                    break;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        TokenInformationLength = 0;
        ZwQueryInformationToken(v6, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
        v2 = (PSID *)operator new[](TokenInformationLength, 0x4B677844u, 256LL, v7);
        if ( ZwQueryInformationToken(v6, TokenIntegrityLevel, v2, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          v8 = RtlSubAuthorityCountSid(*v2);
          if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v8 - 1) >= 0x1000 )
LABEL_6:
            v4 = 1;
        }
      }
    }
  }
  if ( v6 )
    ZwClose(v6);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v4;
}

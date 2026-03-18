/*
 * XREFs of ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0049810
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02D2A60 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C02D2CA0 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C02D2F10 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkNetDispAccessCheck(struct DXGPROCESS *this)
{
  NTSTATUS Acl; // ebx
  struct _ACL *v3; // rdi
  ULONG v4; // eax
  __int64 v5; // r9
  void *v6; // rax
  void *v7; // rsi
  ULONG v8; // ebx
  __int64 v9; // r9
  struct _ACL *v10; // rax
  BOOLEAN v11; // al
  int AccessStatus; // [rsp+58h] [rbp-19h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-15h] BYREF
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-11h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+A0h] [rbp+2Fh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+37h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+3Fh] BYREF

  Acl = 0;
  if ( !this
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId()) && DXGPROCESS::IsRemoteConnection(this) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v3 = 0LL;
    SeCaptureSubjectContext(&SubjectContext);
    v17 = 0LL;
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v4 = RtlLengthRequiredSid(6u);
    v6 = (void *)operator new[](v4, 0x4B677844u, 256LL, v5);
    v7 = v6;
    if ( !v6 )
      goto LABEL_13;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(v6, &IdentifierAuthority, 6u);
    *RtlSubAuthoritySid(v7, 0) = 80;
    *RtlSubAuthoritySid(v7, 1u) = 1495648203;
    *RtlSubAuthoritySid(v7, 2u) = -1791465185;
    *RtlSubAuthoritySid(v7, 3u) = 1597754693;
    *RtlSubAuthoritySid(v7, 4u) = -849792585;
    *RtlSubAuthoritySid(v7, 5u) = 1316708627;
    v8 = RtlLengthSid(v7) + 20;
    v10 = (struct _ACL *)operator new[](v8, 0x4B677844u, 256LL, v9);
    v3 = v10;
    if ( v10 )
    {
      Acl = RtlCreateAcl(v10, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0000u, v7);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            GenericMapping.GenericAll = 2031616;
            GenericMapping.GenericRead = 0x20000;
            GenericMapping.GenericWrite = 0x20000;
            GenericMapping.GenericExecute = 0x20000;
            GrantedAccess = 0;
            AccessStatus = 0;
            v11 = SeAccessCheck(
                    SecurityDescriptor,
                    &SubjectContext,
                    0,
                    0x1F0000u,
                    0,
                    0LL,
                    &GenericMapping,
                    1,
                    &GrantedAccess,
                    &AccessStatus);
            Acl = AccessStatus;
            if ( v11 )
              Acl = 0;
          }
        }
      }
    }
    else
    {
LABEL_13:
      Acl = -1073741801;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)Acl;
}

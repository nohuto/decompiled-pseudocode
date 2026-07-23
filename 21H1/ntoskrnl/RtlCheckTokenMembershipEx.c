/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x14035C130
 * Callers:
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EA3F0 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14090F5DC (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094BAD0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeSidEx @ 0x1403C5840 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1403F2B70 (ZwDuplicateToken.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14070D890 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  int v4; // edi
  char v9; // si
  TOKEN_TYPE TokenType[2]; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char *v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h] BYREF
  int v22; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl[30]; // [rsp+160h] [rbp+60h] BYREF
  char v25; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v13 = 0;
  v12 = 0;
  memset(Sid, 0, 0x44uLL);
  memset(Acl, 0, 0xECuLL);
  Handle = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v20 = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( TokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v21;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = 0x20000000CLL;
      LOWORD(v22) = 1;
      v4 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
      {
LABEL_16:
        if ( TokenHandle )
          return v4;
LABEL_17:
        if ( Handle )
          ZwClose(Handle);
        return v4;
      }
      v4 = 0;
      TokenHandle = 0LL;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 1u, SidToCheck);
    if ( (Flags & 3) != 0 )
    {
      TokenType[0] = TokenPrimary;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    if ( (Flags & 2) != 0 )
    {
      TokenType[0] = TokenImpersonation;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v16 = &v25;
    if ( !v9 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
        goto LABEL_17;
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0LL,
      (__int64)&SubjectContext,
      0LL,
      1,
      0,
      (__int64)&v16,
      (__int64)RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      (__int64)&v13,
      (__int64)&v12);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v12 )
    {
      if ( v12 == -1073741790 )
        goto LABEL_14;
    }
    else if ( v13 == 1 )
    {
      *IsMember = 1;
LABEL_14:
      if ( !v9 )
        goto LABEL_17;
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_16;
    }
    v4 = v12;
    goto LABEL_14;
  }
  return -1073741811;
}

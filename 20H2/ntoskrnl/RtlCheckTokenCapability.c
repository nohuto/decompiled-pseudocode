/*
 * XREFs of RtlCheckTokenCapability @ 0x140584D20
 * Callers:
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x140223DC0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1403F8590 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1403F89B0 (ZwDuplicateToken.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x1406FBF2C (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x1406FBF80 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406FBFB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406FC010 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  int v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  char v9; // al
  int v10; // ecx
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  int v14; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  char *v18; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v24; // [rsp+170h] [rbp+70h] BYREF
  int v25; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v27; // [rsp+220h] [rbp+120h] BYREF
  char v28; // [rsp+260h] [rbp+160h] BYREF

  v14 = 0;
  v12 = 0;
  memset(Acl, 0, sizeof(Acl));
  TokenHandlea = 0LL;
  v18 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  *HasCapability = 0;
  v16 = &v28;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v24;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v24 = 0x20000000CLL;
    LOWORD(v25) = 1;
    v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_22;
    ReturnLength = 88;
    TokenHandle = 0LL;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v6 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v16);
    *(_OWORD *)TokenInformation = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, CapabilitySidToCheck);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  v18 = &v27;
  if ( v6
    || (Object = 0LL,
        SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v9 = SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           0LL,
           (__int64)&SubjectContext,
           0LL,
           65537,
           0,
           (__int64)&v18,
           (__int64)RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           (__int64)&v14,
           (__int64)&v12);
    v10 = v12;
    v7 = v12;
    if ( !v9 )
      v7 = -1073741790;
    if ( !v6 )
    {
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
      v10 = v12;
    }
    if ( v7 >= 0 )
    {
      if ( !v10 && v14 == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
LABEL_22:
      if ( TokenHandle )
        return v7;
    }
  }
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}

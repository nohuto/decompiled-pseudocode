/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x140918670
 * Callers:
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  PVOID v2; // rdi
  void *v3; // rbx
  void *v4; // rdi
  PVOID PoolWithTag; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-98h]
  ACL v12[12]; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl[30]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset(Acl, 0, 0xECuLL);
  v11 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v12, 0, 0x54uLL);
  P = 0LL;
  v2 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( SeQueryInformationToken(v1, TokenOwner, &TokenInformation) >= 0
    && SeQueryInformationToken(v1, TokenPrimaryGroup, &P) >= 0 )
  {
    v3 = *(void **)TokenInformation;
    v4 = *(void **)P;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v3, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v4, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeWorldSid, 0);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeAllAppPackagesSid, 0);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeRestrictedSid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlCreateAcl(v12, 0x54u, 2u);
    RtlAddMandatoryAce((__int64)v12, 2u, 0, (__int64)SeLowMandatorySid, 17, 1);
    RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v12, 0);
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x65536D43u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, &BufferLength);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v2;
}

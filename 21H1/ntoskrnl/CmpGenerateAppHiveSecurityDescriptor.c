/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140703E80 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14070D890 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140751B70 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  PVOID v2; // rdi
  void *v3; // rbx
  void *v4; // rdi
  ULONG v5; // edx
  PVOID PoolWithTag; // rax
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h]
  ACL Sacl[12]; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl[30]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset(Acl, 0, 0xECuLL);
  v13 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(Sacl, 0, 0x54uLL);
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
    RtlpAddKnownAce(Acl, 2u, 2, 983103, (unsigned __int8 *)SeWorldSid, 0);
    RtlpAddKnownAce(Acl, 2u, 2, 983103, (unsigned __int8 *)SeAllAppPackagesSid, 0);
    RtlpAddKnownAce(Acl, 2u, 2, 983103, *(unsigned __int8 **)&SeRestrictedSid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlCreateAcl(Sacl, 0x54u, 2u);
    RtlAddMandatoryAce(Sacl, v5, 0, SeLowMandatorySid, AceType, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
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

/*
 * XREFs of RtlCheckTokenCapability @ 0x18003C650
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180038020 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180038080 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18003C8E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x18003C980 (RtlIsCapabilitySid.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009D600 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009DA20 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x18009DBE0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009DC00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009DE40 (NtDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  HANDLE v6; // rcx
  int v7; // ebx
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG PrivilegeSetLength; // [rsp+4Ch] [rbp-B4h] BYREF
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 *TokenInformation; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v19; // [rsp+128h] [rbp+28h]
  ACL Acl; // [rsp+130h] [rbp+30h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+1D0h] [rbp+D0h] BYREF

  ClientToken = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_9;
  }
  if ( TokenHandle )
  {
    v6 = TokenHandle;
    ClientToken = TokenHandle;
    goto LABEL_4;
  }
  v7 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &ClientToken);
  if ( v7 == -1073741700 )
  {
    v7 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_16;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v18;
    ObjectAttributes.Length = 48;
    v18[0] = 12;
    v18[1] = 2;
    v19 = 1;
    v7 = NtDuplicateToken(TokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    NtClose(TokenHandlea);
  }
  if ( v7 >= 0 )
  {
    v6 = ClientToken;
LABEL_4:
    ReturnLength = 88;
    NtQueryInformationToken(v6, 1u, &TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 65537, TokenInformation, 0);
    RtlpAddKnownAce(&Acl, 2u, 0, 65537, (unsigned __int8 *)CapabilitySidToCheck, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v7 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           0x10001u,
           (PGENERIC_MAPPING)&RtlpCheckTokenCapabilityGenericMapping,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v7 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
LABEL_9:
    if ( TokenHandle )
      return v7;
  }
LABEL_16:
  if ( ClientToken )
    NtClose(ClientToken);
  return v7;
}

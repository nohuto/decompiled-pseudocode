/*
 * XREFs of _RtlCheckTokenCapability@12 @ 0x4B2EF6F0
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetGroupSecurityDescriptor@12 @ 0x4B2D8680 (_RtlSetGroupSecurityDescriptor@12.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlIsCapabilitySid@4 @ 0x4B2D93E0 (_RtlIsCapabilitySid@4.c)
 *     _NtAccessCheck@32 @ 0x4B2F2960 (_NtAccessCheck@32.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  HANDLE v3; // eax
  int v4; // esi
  HANDLE ClientToken; // [esp+10h] [ebp-188h] BYREF
  HANDLE ExistingTokenHandle; // [esp+14h] [ebp-184h] BYREF
  ULONG ReturnLength; // [esp+18h] [ebp-180h] BYREF
  PSID Sid; // [esp+1Ch] [ebp-17Ch]
  ULONG PrivilegeSetLength; // [esp+20h] [ebp-178h] BYREF
  NTSTATUS AccessStatus; // [esp+24h] [ebp-174h] BYREF
  ACCESS_MASK GrantedAccess; // [esp+28h] [ebp-170h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+2Ch] [ebp-16Ch] BYREF
  _BYTE SecurityDescriptor[20]; // [esp+44h] [ebp-154h] BYREF
  unsigned __int8 *TokenInformation; // [esp+58h] [ebp-140h] BYREF
  _DWORD v16[2]; // [esp+ACh] [ebp-ECh] BYREF
  __int16 v17; // [esp+B4h] [ebp-E4h]
  ACL Acl; // [esp+B8h] [ebp-E0h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [esp+15Ch] [ebp-3Ch] BYREF

  ClientToken = 0;
  Sid = CapabilitySidToCheck;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  if ( TokenHandle )
  {
    v3 = TokenHandle;
    ClientToken = TokenHandle;
    goto LABEL_4;
  }
  v4 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFE, 8u, 1u, 0, &ClientToken);
  if ( v4 == -1073741700 )
  {
    v4 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 0xAu, 0, &ExistingTokenHandle);
    if ( v4 < 0 )
      goto LABEL_17;
    ObjectAttributes.Length = 24;
    ObjectAttributes.SecurityQualityOfService = v16;
    memset(&ObjectAttributes.RootDirectory, 0, 16);
    v16[0] = 12;
    v16[1] = 2;
    v17 = 1;
    v4 = NtDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    NtClose(ExistingTokenHandle);
  }
  if ( v4 >= 0 )
  {
    v3 = ClientToken;
LABEL_4:
    ReturnLength = 76;
    ZwQueryInformationToken(v3, 1u, &TokenInformation, 0x4Cu, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation, 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 65537, TokenInformation, 0);
    RtlpAddKnownAce(&Acl, 2u, 0, 65537, (unsigned __int8 *)Sid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v4 = NtAccessCheck(
           SecurityDescriptor,
           ClientToken,
           0x10001u,
           (PGENERIC_MAPPING)&RtlpCheckTokenCapabilityGenericMapping,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v4 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v4 = 0;
    }
LABEL_9:
    if ( TokenHandle )
      return v4;
  }
LABEL_17:
  if ( ClientToken )
    NtClose(ClientToken);
  return v4;
}

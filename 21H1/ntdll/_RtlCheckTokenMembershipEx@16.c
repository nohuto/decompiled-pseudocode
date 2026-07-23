/*
 * XREFs of _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 *     _RtlCheckTokenMembership@12 @ 0x4B346090 (_RtlCheckTokenMembership@12.c)
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetGroupSecurityDescriptor@12 @ 0x4B2D8680 (_RtlSetGroupSecurityDescriptor@12.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlInitializeSidEx @ 0x4B2D8830 (_RtlInitializeSidEx.c)
 *     _NtAccessCheck@32 @ 0x4B2F2960 (_NtAccessCheck@32.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenThreadTokenEx@20 @ 0x4B2F2C70 (_NtOpenThreadTokenEx@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  PSID v4; // esi
  int v5; // esi
  _BYTE SecurityDescriptor[20]; // [esp+Ch] [ebp-1C4h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-1B0h] BYREF
  ACCESS_MASK GrantedAccess; // [esp+38h] [ebp-198h] BYREF
  NTSTATUS AccessStatus; // [esp+3Ch] [ebp-194h] BYREF
  ULONG PrivilegeSetLength; // [esp+40h] [ebp-190h] BYREF
  PSID v12; // [esp+44h] [ebp-18Ch]
  HANDLE ExistingTokenHandle; // [esp+48h] [ebp-188h] BYREF
  HANDLE ClientToken; // [esp+4Ch] [ebp-184h] BYREF
  ACL Acl; // [esp+50h] [ebp-180h] BYREF
  unsigned __int8 Sid[72]; // [esp+140h] [ebp-90h] BYREF
  _DWORD v17[2]; // [esp+188h] [ebp-48h] BYREF
  __int16 v18; // [esp+190h] [ebp-40h]
  _PRIVILEGE_SET PrivilegeSet; // [esp+194h] [ebp-3Ch] BYREF

  v4 = SidToCheck;
  v12 = SidToCheck;
  ClientToken = 0;
  *IsMember = 0;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v5 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFE, 8u, 0, 0, &ClientToken);
      if ( v5 == -1073741700 )
      {
        v5 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 0xAu, 0, &ExistingTokenHandle);
        if ( v5 < 0 )
          goto LABEL_18;
        ObjectAttributes.Length = 24;
        ObjectAttributes.SecurityQualityOfService = v17;
        memset(&ObjectAttributes.RootDirectory, 0, 16);
        v17[0] = 12;
        v17[1] = 2;
        v18 = 1;
        v5 = NtDuplicateToken(ExistingTokenHandle, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        NtClose(ExistingTokenHandle);
      }
      if ( v5 < 0 )
      {
LABEL_18:
        if ( ClientToken )
          NtClose(ClientToken);
        return v5;
      }
      v4 = v12;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v4, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v4, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)v4, 0);
    if ( (Flags & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
      RtlpAddKnownAce(&Acl, 2u, 0, 1, Sid, 0);
    }
    if ( (Flags & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
      RtlpAddKnownAce(&Acl, 2u, 0, 1, Sid, 0);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v5 = NtAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&RtlpCheckTokenMembershipGenericMapping,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v5 >= 0 )
    {
      v5 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_11;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_11;
      }
      v5 = AccessStatus;
    }
LABEL_11:
    if ( TokenHandle )
      return v5;
    goto LABEL_18;
  }
  return -1073741811;
}

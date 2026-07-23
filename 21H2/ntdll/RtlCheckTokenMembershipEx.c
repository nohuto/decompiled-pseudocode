/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180036520
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18007A3A0 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800E6460 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180038020 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180038080 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x180040010 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009D600 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x18009DBE0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009DC00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009DE40 (NtDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v5; // si
  int v8; // ebx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG PrivilegeSetLength; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS AccessStatus; // [rsp+4Ch] [rbp-B4h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+60h] [rbp-A0h] BYREF
  ACL *p_Acl; // [rsp+80h] [rbp-80h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v19[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v20; // [rsp+C0h] [rbp-40h]
  _BYTE Sid[80]; // [rsp+D0h] [rbp-30h] BYREF
  ACL Acl; // [rsp+120h] [rbp+20h] BYREF
  _PRIVILEGE_SET v23; // [rsp+210h] [rbp+110h] BYREF

  ClientToken = 0LL;
  v5 = Flags;
  *IsMember = 0;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v8 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v8 == -1073741700 )
      {
        v8 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v8 < 0 )
          goto LABEL_20;
        ObjectAttributes.SecurityQualityOfService = v19;
        ObjectAttributes.Length = 48;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        v19[0] = 12;
        v19[1] = 2;
        v20 = 1;
        v8 = NtDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        NtClose(TokenHandlea);
      }
      if ( v8 < 0 )
      {
LABEL_20:
        if ( ClientToken )
          NtClose(ClientToken);
        return v8;
      }
    }
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    LOBYTE(SecurityDescriptor[0]) = 1;
    p_Acl = 0LL;
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    Acl = (ACL)15466498LL;
    RtlpAddKnownAce(&Acl, SidToCheck, 0);
    if ( (v5 & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      RtlpAddKnownAce(&Acl, Sid, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      RtlpAddKnownAce(&Acl, Sid, 0);
    }
    if ( LOBYTE(SecurityDescriptor[0]) == 1 && (SWORD1(SecurityDescriptor[0]) & 0x8000u) == 0 )
    {
      p_Acl = &Acl;
      WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
    }
    PrivilegeSetLength = 56;
    v8 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&RtlpCheckTokenMembershipGenericMapping,
           &v23,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_14;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_14;
      }
      v8 = AccessStatus;
    }
LABEL_14:
    if ( TokenHandle )
      return v8;
    goto LABEL_20;
  }
  return -1073741811;
}

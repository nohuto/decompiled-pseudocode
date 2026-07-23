/*
 * XREFs of _RtlpAddKnownAce@24 @ 0x4B2D363E
 * Callers:
 *     _RtlAddAccessAllowedAce@16 @ 0x4B2D3620 (_RtlAddAccessAllowedAce@16.c)
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlAddAccessAllowedAceEx@20 @ 0x4B2ED130 (_RtlAddAccessAllowedAceEx@20.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlAddAccessAllowedObjectAce@28 @ 0x4B34AC40 (_RtlAddAccessAllowedObjectAce@28.c)
 *     _RtlAddAccessDeniedAce@16 @ 0x4B34AC90 (_RtlAddAccessDeniedAce@16.c)
 *     _RtlAddAccessDeniedAceEx@20 @ 0x4B34ACC0 (_RtlAddAccessDeniedAceEx@20.c)
 *     _RtlAddAccessDeniedObjectAce@28 @ 0x4B34ACF0 (_RtlAddAccessDeniedObjectAce@28.c)
 *     _RtlAddAuditAccessAce@24 @ 0x4B34AF20 (_RtlAddAuditAccessAce@24.c)
 *     _RtlAddAuditAccessAceEx@28 @ 0x4B34AF60 (_RtlAddAuditAccessAceEx@28.c)
 *     _RtlAddAuditAccessObjectAce@36 @ 0x4B34AFA0 (_RtlAddAuditAccessObjectAce@36.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned int v8; // eax
  PACL v9; // edx
  unsigned int v10; // ecx
  ACL *v11; // eax
  PACL v12; // ecx
  int v13; // edx
  size_t v15; // [esp-4h] [ebp-18h]

  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return -1073741735;
  if ( Acl->AclRevision > (unsigned __int8)a2 )
    LOBYTE(a2) = Acl->AclRevision;
  v8 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v8 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v8 = a3 & 0xFFFFFFC0;
    }
    if ( v8 )
      return -1073741811;
  }
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v9 = Acl + 1;
  v10 = 0;
  if ( Acl->AceCount )
  {
    v11 = (PACL)((char *)Acl + Acl->AclSize);
    while ( v9 < v11 )
    {
      ++v10;
      v9 = (PACL)((char *)v9 + v9->AclSize);
      v11 = (PACL)((char *)Acl + Acl->AclSize);
      if ( v10 >= Acl->AceCount )
        goto LABEL_12;
    }
    return -1073741705;
  }
LABEL_12:
  v12 = (PACL)((char *)Acl + Acl->AclSize) < v9 ? 0 : v9;
  v13 = (unsigned __int16)(4 * (Sid[1] + 4));
  if ( !v12 || (char *)v12 + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  v12->Sbz1 = a3;
  *(_DWORD *)&v12->AceCount = a4;
  v12->AclRevision = a6;
  v12->AclSize = v13;
  LODWORD(v15) = 4 * Sid[1] + 8;
  memmove(&v12[1], Sid, v15);
  Acl->AclRevision = a2;
  ++Acl->AceCount;
  return 0;
}

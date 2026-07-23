/*
 * XREFs of RtlValidAcl @ 0x180037760
 * Callers:
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180066800 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180066C70 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180067290 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800701C0 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180073C10 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x180078780 (RtlDeleteAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7A94 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E96D0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9950 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9AC0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9E10 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800EA0D0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     RtlpValidKnownAce @ 0x180037900 (RtlpValidKnownAce.c)
 *     RtlpValidAccessFilterAce @ 0x1800EACC4 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800EAEAC (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800EAFA4 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1800EB020 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r14
  PACL v3; // rbx
  unsigned int i; // esi
  ACL *v5; // rcx
  unsigned __int16 *v6; // r15
  __int64 v7; // rdx
  int v8; // ecx
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= Acl->AceCount )
        return 1;
      v5 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount >= (unsigned __int16 *)v5 )
        return 0;
      v6 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v7 = *v6;
      if ( (PACL)((char *)v3 + v7) > v5 )
        return 0;
      if ( v3->AclRevision <= 0x14u && (v8 = 1730063, _bittest(&v8, v3->AclRevision)) )
      {
        if ( !(unsigned __int8)RtlpValidKnownAce(v3) )
          return 0;
      }
      else if ( v3->AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(v3->AclRevision - 5) <= 3u
             || (unsigned __int8)(v3->AclRevision - 11) <= 1u
             || (unsigned __int8)(v3->AclRevision - 15) <= 1u )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        result = RtlpValidObjectAce(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( v3->AclRevision == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v7 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v6);
    }
  }
  return 0;
}

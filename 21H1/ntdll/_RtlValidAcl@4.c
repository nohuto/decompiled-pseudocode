/*
 * XREFs of _RtlValidAcl@4 @ 0x4B2D3740
 * Callers:
 *     _RtlDeleteAce@8 @ 0x4B2A9340 (_RtlDeleteAce@8.c)
 *     _RtlAddAce@20 @ 0x4B2AAF90 (_RtlAddAce@20.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlValidSecurityDescriptor@4 @ 0x4B2E8170 (_RtlValidSecurityDescriptor@4.c)
 *     _RtlValidRelativeSecurityDescriptor@12 @ 0x4B2EB6E0 (_RtlValidRelativeSecurityDescriptor@12.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddCompoundAce@24 @ 0x4B34B010 (_RtlAddCompoundAce@24.c)
 *     _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140 (_RtlAddProcessTrustLabelAce@24.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0 (_RtlAddScopedPolicyIDAce@20.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 * Callees:
 *     _RtlpValidKnownAce@4 @ 0x4B2D381B (_RtlpValidKnownAce@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpValidAccessFilterAce@4 @ 0x4B34CA34 (_RtlpValidAccessFilterAce@4.c)
 *     _RtlpValidAttributeAce@4 @ 0x4B34CBBA (_RtlpValidAttributeAce@4.c)
 *     _RtlpValidCompoundAce@4 @ 0x4B34CC52 (_RtlpValidCompoundAce@4.c)
 *     _RtlpValidObjectAce@4 @ 0x4B34CCBA (_RtlpValidObjectAce@4.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned int v1; // ebx
  unsigned __int16 *p_AclSize; // ecx
  PACL v3; // esi
  ACL *v4; // ecx
  unsigned int AclSize; // edx
  unsigned __int8 AclRevision; // cl
  char valid; // al

  v1 = 0;
  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned int)&Acl->AclSize + 1) & 0xFFFFFFFE) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = Acl + 1;
      while ( 1 )
      {
        if ( v1 >= Acl->AceCount )
          return 1;
        v4 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v3->AceCount >= (unsigned __int16 *)v4 )
          return 0;
        if ( (unsigned __int16 *)(((unsigned int)&v3->AclSize + 1) & 0xFFFFFFFE) != &v3->AclSize )
          return 0;
        AclSize = v3->AclSize;
        if ( (PACL)((char *)v3 + AclSize) > v4 )
          return 0;
        AclRevision = v3->AclRevision;
        if ( v3->AclRevision <= 3u
          || AclRevision <= 0xAu && AclRevision >= 9u
          || AclRevision <= 0xEu && AclRevision >= 0xDu
          || AclRevision == 17
          || AclRevision == 19
          || AclRevision == 20 )
        {
          valid = RtlpValidKnownAce(v3);
          goto LABEL_11;
        }
        if ( AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u )
            return 0;
          valid = RtlpValidCompoundAce(v3);
          goto LABEL_11;
        }
        if ( AclRevision >= 5u && AclRevision <= 8u
          || AclRevision >= 0xBu && AclRevision <= 0xCu
          || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u )
            return 0;
          valid = RtlpValidObjectAce(v3);
          goto LABEL_11;
        }
        if ( AclRevision == 18 )
          break;
        if ( AclRevision == 21 )
        {
          valid = RtlpValidAccessFilterAce(v3);
LABEL_11:
          if ( !valid )
            return 0;
          goto LABEL_12;
        }
        if ( AclSize < 4 )
          return 0;
LABEL_12:
        v3 = (PACL)((char *)v3 + v3->AclSize);
        ++v1;
        p_AclSize = &Acl->AclSize;
      }
      valid = RtlpValidAttributeAce(v3);
      goto LABEL_11;
    }
  }
  return 0;
}

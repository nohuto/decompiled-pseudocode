/*
 * XREFs of RtlValidAcl @ 0x140606620
 * Callers:
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140605BC0 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1406156D0 (RtlAddAce.c)
 *     SepCheckAcl @ 0x1406754A0 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14068BE70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1406C1D40 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406DD1C0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140921920 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140921B38 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140921C9C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140921DFC (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406E1B94 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x14090E70C (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x14090E90C (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14090E988 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  unsigned int v3; // ebp
  PACL v4; // rbx
  int v5; // r15d
  ACL *v6; // rdx
  USHORT *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = 0;
      v4 = Acl + 1;
      if ( !Acl->AceCount )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v4->AceCount >= (USHORT *)v6 )
          break;
        v7 = &v4->AclSize;
        if ( (USHORT *)(((unsigned __int64)&v4->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v4->AclSize )
          break;
        v8 = *v7;
        if ( (PACL)((char *)v4 + v8) > v6 )
          break;
        AclRevision = v4->AclRevision;
        if ( (unsigned __int8)AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[1].AclRevision != 1 )
            return 0;
          Sbz1 = v4[1].Sbz1;
          if ( (unsigned __int8)Sbz1 > 0xFu || v8 < 4 * Sbz1 + 16 )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(AclRevision - 5) <= 3u
               || (unsigned __int8)(AclRevision - 11) <= 1u
               || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 18 )
        {
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 = (PACL)((char *)v4 + *v7);
        if ( v3 >= Acl->AceCount )
          return 1;
      }
    }
  }
  return 0;
}

/*
 * XREFs of RtlValidAcl @ 0x140606290
 * Callers:
 *     RtlValidRelativeSecurityDescriptor @ 0x1405E1E10 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x1405F72B0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x1406053F0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140605830 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     SepCheckAcl @ 0x1406AA240 (SepCheckAcl.c)
 *     RtlValidSecurityDescriptor @ 0x1406B4DD0 (RtlValidSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1406B9C70 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406D3100 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A92F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140914AA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140914DC0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409289F8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140928C10 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140928D74 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140928ED4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406D7B44 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1409155EC (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1409157EC (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x140915868 (RtlpValidObjectAce.c)
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

/*
 * XREFs of RtlFirstFreeAce @ 0x180037710
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180036F8C (RtlpGenerateInheritedAce.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x18003D298 (RtlpCopyAces.c)
 *     RtlAddProcessTrustLabelAce @ 0x180067CF0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180068160 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlpCombineAcls @ 0x180072A14 (RtlpCombineAcls.c)
 *     RtlDeleteAce @ 0x1800797B0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x180079DD0 (RtlQueryInformationAcl.c)
 *     RtlAddAccessFilterAce @ 0x1800E9520 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9910 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9C60 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F20 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v3; // ecx
  PACL v4; // r8

  v3 = 0;
  *FirstFree = 0LL;
  v4 = Acl + 1;
  if ( Acl->AceCount )
  {
    while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (PACL)((char *)v4 + v4->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v4;
    return 1;
  }
}

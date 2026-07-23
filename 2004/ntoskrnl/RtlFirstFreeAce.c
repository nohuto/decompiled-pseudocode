/*
 * XREFs of RtlFirstFreeAce @ 0x14067D9C0
 * Callers:
 *     RtlQueryInformationAcl @ 0x140669400 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14067C780 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x14067D860 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406FFE20 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140799FC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090EF60 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090F5B0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140922BD0 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140922DE8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140922F4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409230AC (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v2; // r9d
  PACL v3; // r8

  v2 = 0;
  v3 = Acl + 1;
  *FirstFree = 0LL;
  if ( Acl->AceCount )
  {
    while ( v3 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v2;
      v3 = (PACL)((char *)v3 + v3->AclSize);
      if ( v2 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v3;
    return 1;
  }
}

/*
 * XREFs of RtlFirstFreeAce @ 0x140605550
 * Callers:
 *     RtlQueryInformationAcl @ 0x1405F5D00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405F72B0 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x140604310 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1406053F0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406D3100 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A92F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140914AA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140914DC0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409289F8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140928C10 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140928D74 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140928ED4 (SddlAddScopedPolicyIDAce.c)
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

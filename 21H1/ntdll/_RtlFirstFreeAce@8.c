/*
 * XREFs of _RtlFirstFreeAce@8 @ 0x4B2D7F40
 * Callers:
 *     _RtlDeleteAce@8 @ 0x4B2A9340 (_RtlDeleteAce@8.c)
 *     _RtlAddAce@20 @ 0x4B2AAF90 (_RtlAddAce@20.c)
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 *     _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F (_RtlpGenerateInheritedAce@56.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _RtlQueryInformationAcl@16 @ 0x4B2D9620 (_RtlQueryInformationAcl@16.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddCompoundAce@24 @ 0x4B34B010 (_RtlAddCompoundAce@24.c)
 *     _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140 (_RtlAddProcessTrustLabelAce@24.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0 (_RtlAddScopedPolicyIDAce@20.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  PACL v2; // ecx
  unsigned int v3; // esi
  ACL *v5; // eax

  v2 = Acl + 1;
  v3 = 0;
  *FirstFree = 0;
  if ( Acl->AceCount )
  {
    v5 = (PACL)((char *)Acl + Acl->AclSize);
    while ( v2 < v5 )
    {
      ++v3;
      v2 = (PACL)((char *)v2 + v2->AclSize);
      v5 = (PACL)((char *)Acl + Acl->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v2 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v2;
    return 1;
  }
}

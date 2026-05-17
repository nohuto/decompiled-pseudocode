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
 *     RtlAddAccessFilterAce @ 0x1800E9560 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97E0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9950 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9CA0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F60 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v4 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v3;
      v4 += *(unsigned __int16 *)(v4 + 2);
      if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v4;
    return 1;
  }
}

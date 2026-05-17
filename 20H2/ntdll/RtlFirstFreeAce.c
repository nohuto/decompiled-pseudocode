/*
 * XREFs of RtlFirstFreeAce @ 0x180037710
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180036F8C (RtlpGenerateInheritedAce.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x18003D2D8 (RtlpCopyAces.c)
 *     RtlAddProcessTrustLabelAce @ 0x180066800 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180066C70 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180067290 (RtlAddMandatoryAce.c)
 *     RtlpCombineAcls @ 0x1800719E4 (RtlpCombineAcls.c)
 *     RtlDeleteAce @ 0x180078780 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x180078DA0 (RtlQueryInformationAcl.c)
 *     RtlAddAccessFilterAce @ 0x1800E96D0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9950 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9AC0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9E10 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800EA0D0 (RtlpAddKnownObjectAce.c)
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

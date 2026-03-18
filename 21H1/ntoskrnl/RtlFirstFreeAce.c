/*
 * XREFs of RtlFirstFreeAce @ 0x1406058E0
 * Callers:
 *     RtlpInheritAcl2 @ 0x1406046A0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlQueryInformationAcl @ 0x140614120 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1406156D0 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x1406DD1C0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140921920 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140921B38 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140921C9C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140921DFC (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v2;
      v3 += *(unsigned __int16 *)(v3 + 2);
      if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v3;
    return 1;
  }
}

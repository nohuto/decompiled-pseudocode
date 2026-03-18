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

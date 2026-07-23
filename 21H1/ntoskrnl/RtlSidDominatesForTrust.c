/*
 * XREFs of RtlSidDominatesForTrust @ 0x1402597C0
 * Callers:
 *     SepTrustLevelCheck @ 0x140204950 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepLocateTokenTrustLevel @ 0x140257F58 (SepLocateTokenTrustLevel.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140259670 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpValidTrustSubjectContext @ 0x140320E00 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140591500 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1405E1960 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1405E1AB0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406E8490 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x14075A9E0 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140609890 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PSID v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *DominatesTrust = 0;
  v3 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v3 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v3) )
    return -1073741811;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *DominatesTrust = 0;
  return 0;
}

/*
 * XREFs of RtlSidDominatesForTrust @ 0x14020FCC0
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x14020F908 (SepLocateTokenTrustLevel.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14022A460 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepTrustLevelCheck @ 0x14022AA60 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x14032F5B0 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140595690 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14061F960 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406B1F20 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406DE3D0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076B054 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14020FC50 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !RtlIsValidProcessTrustLabelSid(a1) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v3) )
    return 3221225485LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *a3 = 0;
  return 0LL;
}

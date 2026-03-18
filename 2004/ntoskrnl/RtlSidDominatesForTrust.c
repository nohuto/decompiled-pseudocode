/*
 * XREFs of RtlSidDominatesForTrust @ 0x140296040
 * Callers:
 *     SepTrustLevelCheck @ 0x14026DC30 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1402947D8 (SepLocateTokenTrustLevel.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140295EF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     RtlpValidTrustSubjectContext @ 0x14035E8C0 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140591BF0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140628730 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140628880 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x14070C290 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x14075C8E4 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1406819E0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a2) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v3, a2, a3, v3) )
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

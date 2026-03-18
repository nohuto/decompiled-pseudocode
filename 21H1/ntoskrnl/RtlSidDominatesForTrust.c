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

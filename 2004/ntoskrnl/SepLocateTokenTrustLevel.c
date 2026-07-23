/*
 * XREFs of SepLocateTokenTrustLevel @ 0x1402947D8
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140628730 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140628880 (SeShouldCheckForAccessRightsFromParent.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     SepAdjustAccessStateForConstraints @ 0x14075C8E4 (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x14091DBC8 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140296040 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  DominatesTrust = 0;
  if ( v1 )
  {
    RtlSidDominatesForTrust(*(PSID *)(v2 + 1104), *(PSID *)(v1 + 1104), &DominatesTrust);
    if ( DominatesTrust )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}

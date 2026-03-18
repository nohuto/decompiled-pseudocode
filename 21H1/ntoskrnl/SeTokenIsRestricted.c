/*
 * XREFs of SeTokenIsRestricted @ 0x1402C12C0
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SeTokenIsAdmin @ 0x14064BC20 (SeTokenIsAdmin.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14064BCAC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1406C80C0 (NtCompareTokens.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406CCA20 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}

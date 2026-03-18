/*
 * XREFs of SeTokenIsRestricted @ 0x14026D760
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140626B50 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenIsAdmin @ 0x140626CB0 (SeTokenIsAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1406E8780 (NtCompareTokens.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406EDD20 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}

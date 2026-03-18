/*
 * XREFs of SeTokenIsRestricted @ 0x140205C20
 * Callers:
 *     NtCompareTokens @ 0x1405E25F0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1405E34A0 (SeTokenIsAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405E52E0 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406C1CA0 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}

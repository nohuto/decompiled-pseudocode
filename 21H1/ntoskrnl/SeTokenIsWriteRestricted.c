/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1402C12E0
 * Callers:
 *     SeTokenCanImpersonate @ 0x140609600 (SeTokenCanImpersonate.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14064BCAC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     NtCompareTokens @ 0x1406C80C0 (NtCompareTokens.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}

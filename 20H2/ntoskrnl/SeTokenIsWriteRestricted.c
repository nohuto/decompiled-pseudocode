/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140205C40
 * Callers:
 *     NtCompareTokens @ 0x1405E25F0 (NtCompareTokens.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405E52E0 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}

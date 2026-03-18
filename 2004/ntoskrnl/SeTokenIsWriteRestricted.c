/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14026D740
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140626B50 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x1406816E0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1406E8780 (NtCompareTokens.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}

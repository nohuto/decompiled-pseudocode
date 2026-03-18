/*
 * XREFs of SepFinalizeTokenAcls @ 0x1405CDDB0
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     NtFilterToken @ 0x1406A83E0 (NtFilterToken.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x1407C2500 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 */

__int64 __fastcall SepFinalizeTokenAcls(_QWORD *a1)
{
  __int64 result; // rax

  result = SepAppendAceToTokenObjectAcl(a1, 8LL, SeAliasAdminsSid);
  if ( (int)result >= 0 )
    return SepSetProcessTrustLabelAceForToken(a1);
  return result;
}

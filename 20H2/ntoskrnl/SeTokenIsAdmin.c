/*
 * XREFs of SeTokenIsAdmin @ 0x1405E34A0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F07A0 (IoComputeRedirectionTrustLevel.c)
 *     PspIsContextAdmin @ 0x1405E249C (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1405E2F64 (MiIsUserQueryVmCallerTrusted.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     EtwpCoverageUserIsAdmin @ 0x140937F88 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x1402057A0 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140205C20 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)v2, 0LL, 1, 0, 0);
  }
  return v3;
}

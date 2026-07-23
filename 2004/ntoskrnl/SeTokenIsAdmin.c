/*
 * XREFs of SeTokenIsAdmin @ 0x140626CB0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402698EC (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140701B40 (MiIsUserQueryVmCallerTrusted.c)
 *     PspIsContextAdmin @ 0x140704A58 (PspIsContextAdmin.c)
 *     EtwpCoverageUserIsAdmin @ 0x140932158 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x14026D760 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x14026D774 (SepSidInToken.c)
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

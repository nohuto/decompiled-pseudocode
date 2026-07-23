/*
 * XREFs of SeTokenIsAdmin @ 0x14064BC20
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1403395EC (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14064BEFC (MiIsUserQueryVmCallerTrusted.c)
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     EtwpCoverageUserIsAdmin @ 0x140930EA8 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x140204C10 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1402C12C0 (SeTokenIsRestricted.c)
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

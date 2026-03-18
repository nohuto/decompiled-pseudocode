/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x1402FD690
 * Callers:
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x1409250C0 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x1402F0F80 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1402FD6B8 (SepIsAdminlessEnforcementModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || !SepIsSModeEnabled() )
    return 0;
  return v0;
}

/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x14027C0A8
 * Callers:
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x14091F440 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14027C0D0 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x140323F90 (SepIsSModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || (unsigned __int8)SepIsSModeEnabled() != 1 )
    return 0;
  return v0;
}

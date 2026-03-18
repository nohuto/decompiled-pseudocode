/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x14033A82C
 * Callers:
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x14091E190 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x1402E9110 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14033A854 (SepIsAdminlessEnforcementModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || !SepIsSModeEnabled() )
    return 0;
  return v0;
}

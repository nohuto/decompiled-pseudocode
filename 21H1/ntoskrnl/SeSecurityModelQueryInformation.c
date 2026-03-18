/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14091867C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x1402E9110 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14033A854 (SepIsAdminlessEnforcementModeEnabled.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x1405910B4 (SepIsAdminlessAuditModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405910C8 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 */

__int64 __fastcall SeSecurityModelQueryInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  *a3 = 4;
  memset(a1, 0, a2);
  if ( (SepIsAdminlessEnforcementModeEnabled() == 1 || SepIsAdminlessAuditModeEnabled()) && SepIsSModeEnabled() )
    *a1 |= 1u;
  if ( SepIsDeviceOwnerProtectionDowngradeAllowed() )
    *a1 |= 2u;
  return 0LL;
}

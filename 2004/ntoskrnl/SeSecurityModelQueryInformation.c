/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14091992C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x14027C0D0 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x140323F90 (SepIsSModeEnabled.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x1405917A4 (SepIsAdminlessAuditModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405917B8 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
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

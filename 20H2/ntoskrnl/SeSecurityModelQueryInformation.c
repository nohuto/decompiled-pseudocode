/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14091F5AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x1402F0F80 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1402FD6B8 (SepIsAdminlessEnforcementModeEnabled.c)
 *     memset @ 0x140411300 (memset.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x140595244 (SepIsAdminlessAuditModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140595258 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
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

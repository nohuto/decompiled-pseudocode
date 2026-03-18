/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405917B8
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091992C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}

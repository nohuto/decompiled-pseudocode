/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405910C8
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091867C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}

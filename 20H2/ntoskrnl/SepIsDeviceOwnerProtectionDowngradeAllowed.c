/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140595258
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091F5AC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}

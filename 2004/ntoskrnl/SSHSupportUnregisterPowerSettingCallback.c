/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408F8714
 * Callers:
 *     SshpUninitialize @ 0x140A90AD0 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x14075FEA0 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}

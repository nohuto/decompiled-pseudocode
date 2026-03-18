/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408F7424
 * Callers:
 *     SshpUninitialize @ 0x140A91444 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x14075DB90 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}

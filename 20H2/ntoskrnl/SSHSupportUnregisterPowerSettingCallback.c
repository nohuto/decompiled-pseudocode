/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408FE324
 * Callers:
 *     SshpUninitialize @ 0x140A96734 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x14076E510 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}

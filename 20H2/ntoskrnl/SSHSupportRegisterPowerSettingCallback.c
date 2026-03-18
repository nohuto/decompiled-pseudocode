/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x14078C54C
 * Callers:
 *     SshpSubscribeCallbacks @ 0x140A42F20 (SshpSubscribeCallbacks.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x14071D950 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           &SshpPowerSettingHandle);
}

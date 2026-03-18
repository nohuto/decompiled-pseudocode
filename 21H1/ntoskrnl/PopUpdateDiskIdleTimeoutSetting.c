/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140787CBC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140569134 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x14077C1C0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407BDA00 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A4704C (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}

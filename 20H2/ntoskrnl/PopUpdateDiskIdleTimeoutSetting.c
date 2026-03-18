/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1407903BC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056D1B4 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140792910 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407CF4B0 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A4576C (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
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
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4u, &PopCurrentDiskIdleTimeout);
  }
  return result;
}

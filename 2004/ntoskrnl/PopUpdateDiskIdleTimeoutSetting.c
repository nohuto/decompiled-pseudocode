/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x14078229C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x140569784 (PopCoalescingSetActiveState.c)
 *     PopHardDiskPowerSettingCallback @ 0x140784BC0 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407C0C20 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140A3F4CC (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1406A7304 (PopSetPowerSettingValueAcDc.c)
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

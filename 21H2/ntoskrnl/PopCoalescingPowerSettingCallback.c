/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x1407D3A10
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14079105C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // eax

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v9 = *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v9 && a3 == 4 && a2 )
  {
    PopDppeCoalescingSpindownTimeout = *a2;
    v10 = PopDppeCoalescingSpindownTimeout;
    if ( !PopDppeCoalescingSpindownTimeout )
      v10 = -1;
    if ( v10 != PopDiskCoalescingTimeout )
    {
      PopDiskCoalescingTimeout = v10;
      PopUpdateDiskIdleTimeoutSetting();
    }
    PopCheckResiliencyScenarios();
    v6 = 0;
  }
  PopReleasePolicyLock(v8, v7);
  return v6;
}

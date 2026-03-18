/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x1407851E0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryUpdateAlarms @ 0x140785210 (PopBatteryUpdateAlarms.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock((_DWORD)SettingGuid);
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock(v7, v6);
  return updated;
}

/*
 * XREFs of PopInitializePowerSettingCallbacks @ 0x140A679AC
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     PpmInfoRegisterCallbacks @ 0x140A67A88 (PpmInfoRegisterCallbacks.c)
 */

NTSTATUS PopInitializePowerSettingCallbacks()
{
  PPOWER_SETTING_CALLBACK *v0; // rbx
  __int64 v1; // rdi
  char *v2; // rbx
  __int64 v3; // rsi
  NTSTATUS result; // eax

  v0 = (PPOWER_SETTING_CALLBACK *)&PopInitialSettingCallbacks;
  v1 = 59LL;
  do
  {
    PoRegisterPowerSettingCallback(0LL, (LPCGUID)*v0, v0[1], 0LL, 0LL);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PpmInfoRegisterCallbacks();
  v2 = 0LL;
  v3 = 4LL;
  do
  {
    PoRegisterPowerSettingCallback(
      0LL,
      *(GUID **)((char *)GUIDS_BATTERY_DISCHARGE_ACTION + v1),
      (PPOWER_SETTING_CALLBACK)PopBatteryAlarmPowerSettingCallback,
      v2,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      *(GUID **)((char *)GUIDS_BATTERY_DISCHARGE_LEVEL + v1),
      (PPOWER_SETTING_CALLBACK)PopBatteryAlarmPowerSettingCallback,
      v2,
      0LL);
    result = PoRegisterPowerSettingCallback(
               0LL,
               *(GUID **)((char *)GUIDS_BATTERY_DISCHARGE_FLAGS + v1),
               (PPOWER_SETTING_CALLBACK)PopBatteryAlarmPowerSettingCallback,
               v2++,
               0LL);
    v1 += 8LL;
    --v3;
  }
  while ( v3 );
  return result;
}

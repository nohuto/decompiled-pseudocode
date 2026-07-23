/*
 * XREFs of PopArePowerSettingsEqual @ 0x14066E478
 * Callers:
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

bool __fastcall PopArePowerSettingsEqual(__int64 a1, const void *a2, unsigned int a3)
{
  return a1 && a2 && *(_DWORD *)(a1 + 4) == a3 && RtlCompareMemory((const void *)(a1 + 12), a2, a3) == a3;
}

/*
 * XREFs of PdcPoLowPower @ 0x1403DBCD0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH);
  PopReleasePolicyLock(v3, v2);
  return 0LL;
}

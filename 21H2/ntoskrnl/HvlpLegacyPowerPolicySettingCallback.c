/*
 * XREFs of HvlpLegacyPowerPolicySettingCallback @ 0x14054A150
 * Callers:
 *     <none>
 * Callees:
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140549FDC (HvlpConfigureLegacyPowerPolicySetting.c)
 */

__int64 __fastcall HvlpLegacyPowerPolicySettingCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  HIDWORD(v5) = *Value;
  LODWORD(v5) = (_DWORD)Context;
  return HvlpConfigureLegacyPowerPolicySetting(&v5);
}

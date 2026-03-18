/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C002604C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0025560 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C012C870 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C00260F0 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C0026308 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C02410F8);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C02410F8, 13LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C02410E8, 1LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}

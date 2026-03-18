/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C008B56C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C008BF30 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C012A520 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C008B610 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C008B828 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C023F0F8);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C023F0F8, 13LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C023F0E8, 1LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}

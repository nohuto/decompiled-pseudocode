/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C00109CC
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0011A30 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C0132860 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C0010A70 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C0010C88 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C02470F8);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C02470F8, 13LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C02470E8, 1LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}

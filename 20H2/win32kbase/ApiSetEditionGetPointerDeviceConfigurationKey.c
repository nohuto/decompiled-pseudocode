/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C008B6B0
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C008B460 (AccessPTPEnabledStatus.c)
 *     GetDWORDSettingValuesEx @ 0x1C008B610 (GetDWORDSettingValuesEx.c)
 *     WriteSettingValues @ 0x1C012A700 (WriteSettingValues.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax

  v2 = a2;
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      366,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0251998 )
    v5 = qword_1C0251998();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C02519A0 )
    v3 = qword_1C02519A0(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      367,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v3;
}

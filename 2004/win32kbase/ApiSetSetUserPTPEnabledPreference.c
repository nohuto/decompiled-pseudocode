/*
 * XREFs of ApiSetSetUserPTPEnabledPreference @ 0x1C01CD4E8
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C001620C (RIMUpdateDeviceForInputMode.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0182138 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetSetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      84,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0252EF8 )
    result = qword_1C0252EF8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0252F00;
    if ( qword_1C0252F00 )
      result = qword_1C0252F00(a1, v4, a3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               10,
               85,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

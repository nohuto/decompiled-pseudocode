/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C01C49DC
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0158370 (RIMOnTimerNotification.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01779B8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetDwmAsyncNotifyDigitizerActiveContacts(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      74,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0250EA8 )
    result = qword_1C0250EA8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0250EB0;
    if ( qword_1C0250EB0 )
      result = qword_1C0250EB0(0LL, v2);
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
               75,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

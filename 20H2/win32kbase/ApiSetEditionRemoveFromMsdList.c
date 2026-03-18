/*
 * XREFs of ApiSetEditionRemoveFromMsdList @ 0x1C01C7CD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     IsEditionRemoveFromMsdListSupported @ 0x1C01F66C8 (IsEditionRemoveFromMsdListSupported.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionRemoveFromMsdList(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      130,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))IsEditionRemoveFromMsdListSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0251170;
    if ( qword_1C0251170 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C0251170(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_SF_(
                                               WPP_GLOBAL_Control->DeviceExtension,
                                               5,
                                               10,
                                               131,
                                               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}

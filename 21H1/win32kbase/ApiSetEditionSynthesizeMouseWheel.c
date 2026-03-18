/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x1C01D08C4
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01AAB3C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSynthesizeMouseWheel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rsi
  __int64 result; // rax

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      350,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C02598A8 )
    result = qword_1C02598A8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C02598B0;
    if ( qword_1C02598B0 )
      result = qword_1C02598B0(a1, v7, a3, a4, a5);
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
               351,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

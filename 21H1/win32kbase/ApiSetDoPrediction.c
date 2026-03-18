/*
 * XREFs of ApiSetDoPrediction @ 0x1C01CCAC8
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C0182D44 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v9; // rdi
  int v11; // eax
  _QWORD *result; // rax

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      64,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0258E18 )
    v11 = qword_1C0258E18();
  else
    v11 = -1073741637;
  if ( v11 < 0 )
  {
    *a6 = v9;
    result = a7;
    *a7 = a3;
  }
  else
  {
    result = qword_1C0258E20;
    if ( qword_1C0258E20 )
      result = (_QWORD *)qword_1C0258E20(a1, v9, a3, a4, a5, a6, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      return (_QWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         a2,
                         10,
                         65,
                         (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

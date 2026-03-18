/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x1C0061F70
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0060A60 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     EditionHandleRawInput @ 0x1C0062080 (EditionHandleRawInput.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
        int a1,
        int a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  int v12; // ebp
  unsigned int v14; // ebx
  int v15; // eax

  v12 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      410,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v14 = 0;
  if ( qword_1C02593A8 )
    v15 = qword_1C02593A8();
  else
    v15 = -1073741637;
  if ( v15 >= 0 )
    v14 = EditionHandleRawInput(a1, v12, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      411,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v14;
}

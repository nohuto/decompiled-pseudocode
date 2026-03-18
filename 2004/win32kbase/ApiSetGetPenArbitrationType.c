/*
 * XREFs of ApiSetGetPenArbitrationType @ 0x1C01CB70C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetPenArbitrationType()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      98,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C0252F68 )
    v1 = qword_1C0252F68();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0252F70 )
    v0 = qword_1C0252F70();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      99,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

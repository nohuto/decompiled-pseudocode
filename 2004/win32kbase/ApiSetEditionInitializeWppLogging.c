/*
 * XREFs of ApiSetEditionInitializeWppLogging @ 0x1C0054EA4
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C0054CC0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      448,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v4 = 0;
  if ( qword_1C02539B8 )
    v5 = qword_1C02539B8();
  else
    v5 = -1073741637;
  if ( v5 >= 0 )
  {
    if ( qword_1C02539C0 )
      v4 = qword_1C02539C0(a1, v2);
    else
      v4 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      449,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v4;
}

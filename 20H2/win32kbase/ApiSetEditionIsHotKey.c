/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C01C63F4
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01AA958 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
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
      426,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v4 = 0;
  if ( qword_1C0251498 )
    v5 = qword_1C0251498();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C02514A0 )
    v4 = qword_1C02514A0(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      427,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v4;
}

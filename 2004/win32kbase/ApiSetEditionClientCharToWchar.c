/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1C01C70D4
 * Callers:
 *     xxxInternalToUnicode @ 0x1C00193E0 (xxxInternalToUnicode.c)
 * Callees:
 *     IsEditionHandleAltTabCancelSupported @ 0x1C006A200 (IsEditionHandleAltTabCancelSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v4; // bx
  __int16 v5; // dx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      432,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v4 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
  {
    if ( qword_1C02534D0 )
      v4 = qword_1C02534D0(a1, v2);
    else
      v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      433,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v4;
}

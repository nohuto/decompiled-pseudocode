/*
 * XREFs of ApiSetEditionOpenProfileKey @ 0x1C0037114
 * Callers:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionOpenProfileKey(unsigned int a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // rax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      440,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  *a4 = 0LL;
  v8 = 0;
  if ( qword_1C02507D8 )
    v9 = qword_1C02507D8();
  else
    v9 = -1073741637;
  if ( v9 >= 0 )
  {
    if ( qword_1C02507E0 )
      v11 = qword_1C02507E0(a1, v6, a3);
    else
      v11 = 0LL;
    *a4 = v11;
    v8 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      441,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v8;
}

/*
 * XREFs of ApiSetEditionCreateDesktopEntryPoint @ 0x1C0048218
 * Callers:
 *     NtUserCreateDesktopEx @ 0x1C00481F0 (NtUserCreateDesktopEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCreateDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v8; // rbp
  __int64 v10; // rbx
  int v11; // eax

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      478,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v10 = 0LL;
  if ( qword_1C0257CB8 )
    v11 = qword_1C0257CB8();
  else
    v11 = -1073741637;
  if ( v11 >= 0 && qword_1C0257CC0 )
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int))qword_1C0257CC0)(a1, v8, a3, a4, a5, a6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      479,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v10;
}

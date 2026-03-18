/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C01C68E0
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C008DC80 (-AccessTimeOutReset@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00B3CB0 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01812E0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0181430 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0181850 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C0181A10 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0181A60 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      172,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v3 = 0;
  if ( qword_1C02510F8 )
    v4 = qword_1C02510F8();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251100 )
    v3 = qword_1C0251100(0LL, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      173,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v3;
}

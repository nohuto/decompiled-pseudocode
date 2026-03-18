/*
 * XREFs of PostWinlogonMessage @ 0x1C0052F60
 * Callers:
 *     xxxDwmControl @ 0x1C0052EF0 (xxxDwmControl.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0189520 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C0189940 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0189A90 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0189E70 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C018B2B0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C018B650 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0052690 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C0059C20 (IsSetTimerCoalescingToleranceSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     WmsgpPostMessage @ 0x1C0280C2C (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v3 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v3 >= 0 && v2 == 1027 )
  {
    CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
    {
      if ( qword_1C02583C8 )
        qword_1C02583C8(3LL);
    }
  }
  return (unsigned int)v3;
}

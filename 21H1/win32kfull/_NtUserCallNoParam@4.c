/*
 * XREFs of _NtUserCallNoParam@4 @ 0x6E940
 * Callers:
 *     <none>
 * Callees:
 *     _xxxLoadUserApiHook@0 @ 0x16798 (_xxxLoadUserApiHook@0.c)
 *     __DrainThreadCoreMessagingCompletions@0 @ 0x6E99A (__DrainThreadCoreMessagingCompletions@0.c)
 *     _zzzDestroyCaret@0 @ 0x7DA96 (_zzzDestroyCaret@0.c)
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 *     __InitThreadCoreMessagingIocp@4 @ 0x99E68 (__InitThreadCoreMessagingIocp@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 *     _RemoteConnectState@0 @ 0xA4A72 (_RemoteConnectState@0.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     _GetClassIcoCur@8 @ 0xA7526 (_GetClassIcoCur@8.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     __GetIMEShowStatus@0 @ 0xAAB9C (__GetIMEShowStatus@0.c)
 *     __EnableMouseInPointerForThread@0 @ 0xAEF18 (__EnableMouseInPointerForThread@0.c)
 *     ?TraceLoggingSendMixedModeTelemetry@@YGHXZ @ 0xAF472 (-TraceLoggingSendMixedModeTelemetry@@YGHXZ.c)
 *     __GetQueueIocp@0 @ 0xB53AA (__GetQueueIocp@0.c)
 *     __ResetDblClk@0 @ 0xB53B8 (__ResetDblClk@0.c)
 *     __GetUnpredictedMessagePos@0 @ 0xB53CE (__GetUnpredictedMessagePos@0.c)
 *     __DoInitMessagePumpHook@0 @ 0xB54F2 (__DoInitMessagePumpHook@0.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     ?vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0xBB1BE (-vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     __DisableProcessWindowsGhosting@0 @ 0xCCA56 (__DisableProcessWindowsGhosting@0.c)
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _PrepareForLogoff@0 @ 0xD3ABA (_PrepareForLogoff@0.c)
 *     _WakeRITForShutdown@0 @ 0xD4ACC (_WakeRITForShutdown@0.c)
 *     _IsEditionSetProcessWindowStationAtProcessInitSupported@0 @ 0xD4E14 (_IsEditionSetProcessWindowStationAtProcessInitSupported@0.c)
 *     ?_LoadCursorsAndIcons@@YGHXZ @ 0xD8CF2 (-_LoadCursorsAndIcons@@YGHXZ.c)
 *     _UpdatePerUserImmEnabling@0 @ 0xEC4D0 (_UpdatePerUserImmEnabling@0.c)
 *     __CreatePopupMenu@0 @ 0xEC8A0 (__CreatePopupMenu@0.c)
 *     _xxxCreateSystemThreads@0 @ 0xEDEF4 (_xxxCreateSystemThreads@0.c)
 *     _HandleSystemThreadCreationFailure@0 @ 0xEDEFA (_HandleSystemThreadCreationFailure@0.c)
 *     _xxxUserPowerCalloutWorker@0 @ 0xEDF00 (_xxxUserPowerCalloutWorker@0.c)
 *     __RemoveQueueCompletion@0 @ 0xF2CBB (__RemoveQueueCompletion@0.c)
 *     __AllowForegroundActivation@0 @ 0x1420A9 (__AllowForegroundActivation@0.c)
 *     __CancelQueueEventCompletionPacket@0 @ 0x1420D4 (__CancelQueueEventCompletionPacket@0.c)
 *     __IsQueueAttached@0 @ 0x1421B4 (__IsQueueAttached@0.c)
 *     __ReassociateQueueEventCompletionPacket@0 @ 0x1421D5 (__ReassociateQueueEventCompletionPacket@0.c)
 *     _xxxClearWakeMask@0 @ 0x14226B (_xxxClearWakeMask@0.c)
 *     ?zzzHideCursorNoCapture@@YGKXZ @ 0x143231 (-zzzHideCursorNoCapture@@YGKXZ.c)
 *     _xxxGetDeviceChangeInfo@0 @ 0x14B4F7 (_xxxGetDeviceChangeInfo@0.c)
 *     _xxxBroadcastImeShowStatusChange@8 @ 0x14F378 (_xxxBroadcastImeShowStatusChange@8.c)
 *     __DoUninitMessagePumpHook@0 @ 0x152739 (__DoUninitMessagePumpHook@0.c)
 *     __GetInputDesktop@0 @ 0x1549CC (__GetInputDesktop@0.c)
 *     _xxxDeferredDesktopRotation@0 @ 0x1815B6 (_xxxDeferredDesktopRotation@0.c)
 *     _RemoteLogoff@0 @ 0x187A90 (_RemoteLogoff@0.c)
 *     _RemotePassthruDisable@0 @ 0x187AD9 (_RemotePassthruDisable@0.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 *     _xxxRemoteConsoleShadowStop@0 @ 0x1882F1 (_xxxRemoteConsoleShadowStop@0.c)
 *     _xxxRemotePassthruEnable@0 @ 0x188512 (_xxxRemotePassthruEnable@0.c)
 *     _xxxRemoteShadowSetup@0 @ 0x1885FB (_xxxRemoteShadowSetup@0.c)
 *     _xxxRemoteShadowStop@0 @ 0x188650 (_xxxRemoteShadowStop@0.c)
 *     __EnablePerMonitorMenuScaling@0 @ 0x1978AC (__EnablePerMonitorMenuScaling@0.c)
 *     _ZapActiveAndFocus@0 @ 0x1A6BDA (_ZapActiveAndFocus@0.c)
 *     __SetProgmanWindow@4 @ 0x1A6C17 (__SetProgmanWindow@4.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 *     ?vTransparentCopy@@YGXPAUBLTINFO@@@Z @ 0x1F1C70 (-vTransparentCopy@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x1F1F8A (-vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2048 (-vTransparentCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x1F20ED (-vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x1F21C5 (-vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x1F2282 (-vTransparentCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0x1F2333 (-vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x1F23E2 (-vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0x1F24A6 (-vTransparentCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x1F253E (-vTransparentCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0x1F25D5 (-vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0x1F2699 (-vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x1F2777 (-vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x1F283A (-vTransparentCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x1F28E4 (-vTransparentCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x1F299B (-vTransparentCopyS4D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x1F2A43 (-vTransparentCopyS4D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0x1F2AE9 (-vTransparentCopyS4D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x1F2B8F (-vTransparentCopyS4D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x1F2C30 (-vTransparentCopyS8D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x1F2CC0 (-vTransparentCopyS8D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0x1F2D56 (-vTransparentCopyS8D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0x1F2DE4 (-vTransparentCopyS8D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS8D8Identity@@YGXPAUBLTINFO@@@Z @ 0x1F2E6D (-vTransparentCopyS8D8Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vLine1Octant07@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2404D9 (-vLine1Octant07@@YGXPAU_DDALINE@@PAEJK@Z.c)
 */

_DWORD *__stdcall NtUserCallNoParam(unsigned int a1)
{
  _DWORD *v1; // esi
  _DWORD *v3; // eax

  if ( a1 != 8 )
  {
    EnterCrit(0, 1);
    if ( a1 < 0x2C )
    {
      _mm_lfence();
      v3 = (_DWORD *)apfnSimpleCall[a1]();
      v1 = v3;
      if ( a1 >= 2 )
        goto LABEL_3;
      if ( v3 )
      {
        v1 = (_DWORD *)*v3;
        goto LABEL_3;
      }
    }
    v1 = 0;
    goto LABEL_3;
  }
  EnterSharedCrit(0, 1);
  _mm_lfence();
  v1 = (_DWORD *)_DrainThreadCoreMessagingCompletions();
LABEL_3:
  UserSessionSwitchLeaveCrit();
  return v1;
}

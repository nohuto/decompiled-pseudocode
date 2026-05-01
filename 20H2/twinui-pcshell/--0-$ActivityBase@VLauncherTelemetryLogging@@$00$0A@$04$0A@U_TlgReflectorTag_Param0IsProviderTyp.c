/*
 * XREFs of ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800124B8
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180011E80 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032D320 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18032EFF0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18032F6A0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x1803372B8 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180337550 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180338670 (-s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18001DE04 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}

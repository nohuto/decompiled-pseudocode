/*
 * XREFs of ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000A700 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000AC2C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010A5C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010B70 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010DC0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180010F70 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800113E0 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800116B0 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x1800156D4 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180015CD0 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180015EEC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180016F54 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800170C0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800172A0 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x1800174F4 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017780 (-DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180018320 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180018620 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001927C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001AC18 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001ADB4 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001B3B0 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001B650 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18001B7AC (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18001BC70 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18001BEC0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002065C (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180020AEC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180020BD4 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180020CB8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020D9C (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020E6C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180023074 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800233A4 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180023524 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x180023984 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180023AAC (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x1800251B0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180025640 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18002592C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180025B40 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180025FC8 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180026300 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180027010 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18002733C (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800274B4 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180027600 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18002773C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180027884 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180027A74 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180027FD0 (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180028180 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800286BC (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180028BA0 (PbmAllowMediaPlaybackForApp.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180029840 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x18002A150 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEAH@Z @ 0x18002A450 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEA.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18002F5D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18002FABC (-TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180030388 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18003049C (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180031430 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180031920 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x1800319E0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180031E6C (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180032030 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x1800324D8 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z @ 0x180032604 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG_K@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x18003278C (-CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x1800328CC (-CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

void __fastcall AudPolicyLogError(const char *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    v6 = *((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v6 > 3u && (*(_BYTE *)(v6 + 16) & 4) != 0 && (*(_QWORD *)(v6 + 24) & 4LL) == *(_QWORD *)(v6 + 24) )
    {
      v20 = 0;
      v17 = 0;
      v18 = &v9;
      v15 = &v10;
      v9 = a3;
      v10 = a2;
      v19 = 4;
      v16 = 4;
      if ( a1 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a1[v7] );
        v8 = v7 + 1;
      }
      else
      {
        a1 = (const char *)&word_1800472F6;
        v8 = 1;
      }
      v14 = 0;
      v13 = v8;
      v12 = a1;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_18004B299, 0LL, 0LL, 5u, &v11);
    }
  }
}

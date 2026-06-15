/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000ACE4 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800112C0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011568 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180011A98 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800121E8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012658 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x1800126D0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012748 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800127C0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012868 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180012B64 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015834 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180015BC8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180016B98 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001E6B8 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001E7B8 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180020B70 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x18002262C (WPP_SF_dSd.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x1800250BC (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002975C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002AA88 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x18002BAC8 (McTemplateU0zqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  const wchar_t *v6; // rdi
  unsigned int v7; // ebx
  struct IAudioProcess *v8; // rbx
  unsigned int v9; // eax
  CApplicationManager *v10; // rcx
  unsigned int v11; // r14d
  int PBMRelatedAudioStreamCategory; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  const unsigned __int16 *v15; // r12
  int ActiveRenderStreamCount; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // r15d
  unsigned __int8 v20; // al
  __int64 v21; // rax
  struct IDuckingController *v22; // rbx
  DWORD v23; // edi
  struct IAudioStreamInfo *v24; // rdx
  const unsigned __int16 *v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+28h] [rbp-50h]
  struct IDuckingController *v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+88h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(v2 + 256);
  v29 = 0;
  v4 = v2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
    if ( v5 > 2 )
      v6 = L"unknown";
    else
      v6 = off_1800407E8[v5];
    v7 = *(_DWORD *)(*((_QWORD *)this + 3) + 192LL);
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids, v7, v6, v27);
    v4 = *((_QWORD *)this + 3);
  }
  v8 = (struct IAudioProcess *)((v4 + 16) & ((unsigned __int128)-(__int128)v4 >> 64));
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  LOBYTE(v11) = 0;
  LODWORD(v28) = 0;
  if ( v9 < 0x15 )
  {
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v8, v9, (unsigned int *)&v28);
    v11 = (unsigned int)v28;
    if ( PBMRelatedAudioStreamCategory >= 0 )
    {
      if ( (_DWORD)v28 == 3
        && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) )
      {
        CDuckingManager::OnRenderCommunicationsStreamStateChanged(
          v13,
          *((_QWORD *)this + 2),
          v14,
          1,
          *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 1));
      }
      v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu);
      v17 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
      v18 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v17;
      v19 = v18 + CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u);
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      CProcess::UpdateStreamCountAndProcessCategory(*((CProcess **)this + 3), v15, v11, 1, v20, 0LL, 0LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1))
        || v11 == 2
        || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
        && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
        && (unsigned int)CApplication::HasSmtcSubscription(v3, 1) )
      {
        v21 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v21 + 508) == 3 )
        {
          *(_QWORD *)(v21 + 508) = 0LL;
          *(_DWORD *)(v21 + 516) = 4;
        }
        CApplication::RemoveAudioPlaybackRestriction((CApplication *)v3);
        CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
        CApplication::CleanupBCMStartupLatencyGracePeriod((CApplication *)v3);
      }
      if ( v11 == 2 )
        CApplication::ApplySmtcRelatedPolicy((CApplication *)v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 456LL)
        && (v11 == 2
         || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1))
        && *(_DWORD *)(v3 + 432) )
      {
        CApplication::CleanupGoodFaithExemptionTimer((CApplication *)v3);
        if ( *(_DWORD *)(v3 + 564) == 2 )
        {
          *(_QWORD *)(v3 + 564) = 0LL;
          *(_QWORD *)(v3 + 572) = 0LL;
          *(_QWORD *)(v3 + 580) = 0LL;
          *(_DWORD *)(v3 + 588) = 1;
        }
        *(_DWORD *)(v3 + 432) = 0;
        CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)v3, 0xD1u, 0);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1)) )
      {
        if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3) )
          PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                            g_ApplicationManager,
                                            *(_DWORD *)(v3 + 212),
                                            0);
      }
      else
      {
        v28 = 0LL;
        (***((void (__fastcall ****)(_QWORD, GUID *, struct IDuckingController **))this + 1))(
          *((_QWORD *)this + 1),
          &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
          &v28);
        v22 = v28;
        v23 = *(_DWORD *)(*((_QWORD *)this + 3) + 196LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        TsSessionIdUpdateStreamClassPolicyGains(v23, v15, v11, 0, v22, &v29);
        if ( v28 )
          (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v28 + 16LL))(v28);
        if ( v29 )
          CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 212), 3u);
        PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                          g_ApplicationManager,
                                          *(_DWORD *)(v3 + 212),
                                          0);
        if ( (v11 - 10 <= 1 || v11 - 1 <= 1) && !v19 )
          CApplication::SendTrackStateNotification(v3);
        if ( v11 - 10 <= 1 || v11 <= 2 )
          TS_SessionIdStreamStarted(*(_DWORD *)(*((_QWORD *)this + 3) + 196LL), v24, v25);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v3) )
          CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v10);
      }
    }
  }
  else
  {
    PBMRelatedAudioStreamCategory = -2147024809;
  }
  v26 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v26 + 456) && Microsoft_Windows_AudioEnableBits < 0 )
    McTemplateU0zqq_EventWriteTransfer(
      (__int64)v10,
      &EVT_PBM_STREAM_STARTED,
      *(_QWORD *)(v3 + 24),
      *(_DWORD *)(v26 + 192),
      v11);
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Invoke", 267, PBMRelatedAudioStreamCategory);
  }
}

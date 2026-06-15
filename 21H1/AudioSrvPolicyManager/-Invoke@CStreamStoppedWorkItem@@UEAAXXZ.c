/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x1800319E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180010644 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180016DA4 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180016EC8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180017ADC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180017FB8 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180018030 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800180A8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180018120 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800181C8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001B194 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001B3B0 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001C4F8 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180023DB4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180024118 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x1800264D0 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180027F2C (WPP_SF_dSd.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18002A9BC (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002F05C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18003049C (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180031388 (McTemplateU0zqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r14
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  const wchar_t *v6; // rdi
  unsigned int v7; // ebx
  struct IAudioProcess *v8; // rbx
  unsigned int v9; // eax
  CApplicationManager *v10; // rcx
  unsigned int v11; // r15d
  int PBMRelatedAudioStreamCategory; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  const unsigned __int16 *v15; // r12
  unsigned __int8 v16; // al
  _DWORD *v17; // rax
  int v18; // edx
  int v19; // ecx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  struct IDuckingController *v22; // rbx
  DWORD v23; // edi
  struct IAudioStreamInfo *v24; // rdx
  const unsigned __int16 *v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+28h] [rbp-18h]
  struct IDuckingController *v28; // [rsp+80h] [rbp+40h] BYREF
  int v29; // [rsp+88h] [rbp+48h] BYREF
  int v30; // [rsp+90h] [rbp+50h] BYREF

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
      v6 = off_180045828[v5];
    v7 = *(_DWORD *)(*((_QWORD *)this + 3) + 192LL);
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
      v7,
      v6,
      v27);
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
          0,
          *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 1));
      }
      v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      CProcess::UpdateStreamCountAndProcessCategory(
        *((CProcess **)this + 3),
        v15,
        v11,
        0,
        v16,
        (int *)&v28,
        (enum _APPLICATION_CATEGORY *)&v30);
      if ( (_DWORD)v28 && v30 == 1 )
      {
        v17 = (_DWORD *)*((_QWORD *)this + 3);
        v18 = v17[128];
        v19 = v18 ? v17[129] : v17[86];
        if ( v19 != 1
          && !v18
          && !v17[112]
          && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v3) )
        {
          v20 = (_DWORD *)*((_QWORD *)this + 3);
          if ( v20[127] != 3 )
          {
            v20[127] = 3;
            v20[128] = 1;
            v20[129] = 1;
          }
          if ( !*(_DWORD *)(v3 + 208) && *(_DWORD *)(v3 + 216) )
            CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)v3);
          CProcess::StartInactivityTimer(*((char **)this + 3));
        }
      }
      if ( ((unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v3)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v3)
         && (unsigned int)CApplication::HasSmtcSubscription(v3, 1)
         || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable((CApplication *)v3))
        && !*(_DWORD *)(v3 + 208) )
      {
        v21 = *((_QWORD *)this + 3);
        if ( !*(_DWORD *)(v21 + 448) )
          CProcess::StartInactivityTimer((char *)v21);
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
        if ( (v11 - 10 <= 1 || v11 - 1 <= 1)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
          && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
        {
          CApplication::SendTrackStateNotification(v3);
        }
        v28 = 0LL;
        (***((void (__fastcall ****)(_QWORD, GUID *, struct IDuckingController **))this + 1))(
          *((_QWORD *)this + 1),
          &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
          &v28);
        v22 = v28;
        v23 = *(_DWORD *)(*((_QWORD *)this + 3) + 196LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
        TsSessionIdUpdateStreamClassPolicyGains(v23, v15, v11, 1, v22, &v29);
        if ( v28 )
          (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v28 + 16LL))(v28);
        if ( v29 )
          CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v3 + 212), 3u);
        PBMRelatedAudioStreamCategory = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(
                                          g_ApplicationManager,
                                          *(_DWORD *)(v3 + 212),
                                          0);
        if ( v11 - 10 <= 1 || v11 <= 2 )
          TS_SessionIdStreamStopped(*(_DWORD *)(*((_QWORD *)this + 3) + 196LL), v24, v25);
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
      &EVT_PBM_STREAM_STOPPED,
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
        0x11u,
        &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Invoke", 488, PBMRelatedAudioStreamCategory);
  }
}

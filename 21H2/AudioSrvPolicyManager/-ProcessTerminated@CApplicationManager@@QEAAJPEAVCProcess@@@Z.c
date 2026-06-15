/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18002CA20 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001078C (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011230 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180012D98 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180012EA0 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180012FA8 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015640 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015700 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015E4C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x1800166BC (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B65C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001F4C8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x1800290D8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800292E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180029840 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180029AAC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // rdi
  _DWORD *v6; // rax
  unsigned int i; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  CApplicationManager *v12; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h]

  v12 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v13 = v4;
  v5 = (struct CApplication *)*((_QWORD *)a2 + 32);
  LODWORD(v12) = 0;
  CProcess::MarkAsTerminated(a2);
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0, 1.0, (int *)&v12);
    if ( (_DWORD)v12 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 49), 3u);
  }
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    EnterCriticalSection(v4);
    v12 = (CApplicationManager *)v4;
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  if ( (*((_BYTE *)a2 + 480) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v6 = (_DWORD *)((char *)a2 + 528);
  if ( *((_DWORD *)a2 + 132) )
  {
    for ( i = 0; i < 2; ++i )
      *v6++ = 0;
    if ( v5 )
      CApplication::OnSmtcSubscriptionChanged(v5);
  }
  if ( (*((_DWORD *)a2 + 120) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 121) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 121) = 0;
  }
  if ( *((_DWORD *)a2 + 122) )
    *((_DWORD *)a2 + 122) = 0;
  *((_DWORD *)a2 + 130) = 0;
  v8 = *((_DWORD *)a2 + 135);
  if ( v8 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 32), -v8);
    *((_DWORD *)a2 + 135) = 0;
  }
  v9 = *((_DWORD *)a2 + 136);
  if ( v9 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 32), -v9);
    *((_DWORD *)a2 + 136) = 0;
  }
  v10 = *((_DWORD *)a2 + 137);
  if ( v10 > 0 )
  {
    CApplication::DialogSessionStateChanged(*((CApplication **)a2 + 32), -v10);
    *((_DWORD *)a2 + 137) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}

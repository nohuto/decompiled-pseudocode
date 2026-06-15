/*
 * XREFs of ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180012518
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x1800209A0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_SSd @ 0x18000A680 (WPP_SF_SSd.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015E4C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180016160 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180016294 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001EC8C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ReviveProcessesPendingTermination(CApplication *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v6; // [rsp+38h] [rbp-8h]
  int v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v7 = 0;
  v8 = 1;
  CApplicationManager::GetApplicationPBMStatus(
    g_ApplicationManager,
    this,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v9,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v7,
    (enum _PLM_EXEMPTION *)&v8);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v3 + 448) == 1 )
    {
      *(_DWORD *)(v3 + 448) = 0;
      if ( v7 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(v3 + 196), 3LL);
      CProcess::RecalculateVolume(v3, 3LL);
      if ( (*(_BYTE *)(v3 + 480) & 1) != 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v4) = *(_DWORD *)(v3 + 192);
          WPP_SF_SSd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x39u,
            &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
            L"SoundLevelChanged",
            *(const wchar_t **)(v3 + 208),
            v4);
        }
        CProcess::SendPBMNotification(v3, 0LL);
      }
      CProcess::NotifyPLM(v3, v8);
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}

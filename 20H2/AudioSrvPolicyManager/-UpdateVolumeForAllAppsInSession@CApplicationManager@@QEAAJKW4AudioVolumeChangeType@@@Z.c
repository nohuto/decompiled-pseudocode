/*
 * XREFs of ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180010BC0 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180012518 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18001FCE0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJPEAUModernStandbyStateChangedContext@@@Z @ 0x18001FEA0 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJPEAUModernStandbyStateChangedContext@@@.c)
 *     ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001FF60 (-HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180025140 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180025490 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C120 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180010800 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession(__int64 a1, int a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == a2 )
    {
      EnterCriticalSection(v6);
      CApplication::RecalculateVolume(v8, a3);
      if ( v6 )
        LeaveCriticalSection(v6);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}

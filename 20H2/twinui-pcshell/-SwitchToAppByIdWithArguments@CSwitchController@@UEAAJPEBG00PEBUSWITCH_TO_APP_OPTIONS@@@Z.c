/*
 * XREFs of ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803CB0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x1803CAB24 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x1803CAB68 (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1803CACD0 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1803CB800 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1803CB800.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803CB974 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1803CBBB4 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803CBD0C (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x1803CBFA8 (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1803CC0B0 (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180469B80 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToAppByIdWithArguments(
        CallerIdentity **this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const struct SWITCH_TO_APP_OPTIONS *a5)
{
  const WCHAR *v6; // rdi
  const WCHAR *v9; // r9
  int v10; // edx
  int v11; // ecx
  int MonitorForAppSwitchWithPreference; // ebx
  const struct SWITCH_TO_APP_OPTIONS *v13; // rsi
  struct IImmersiveApplication **v14; // r9
  CSwitchController *v15; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  struct HWND__ v19[4]; // [rsp+50h] [rbp-20h] BYREF
  char v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v9) = (_DWORD)a3;
    if ( !a3 )
      v9 = &szAgent;
    McTemplateU0zzz_EventWriteTransfer((_DWORD)this, (_DWORD)a2, (_DWORD)a2, (_DWORD)v9, (__int64)a4);
  }
  v22 = 0LL;
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v22,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v18 = 0LL;
    *(_OWORD *)&v19[0].unused = 0LL;
    v20 = 0;
    v21 = 0LL;
    v13 = a5;
    v17[0] = *((_DWORD *)a5 + 4);
    v17[1] = *((_DWORD *)a5 + 5);
    v17[2] = *((_DWORD *)a5 + 6);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v21, *((_QWORD *)a5 + 5));
    if ( *((_QWORD *)v13 + 4) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19[2].unused);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)v13 + 4), &v19[2], v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          this - 11,
                                          *(_QWORD *)v13,
                                          *((unsigned int *)v13 + 2),
                                          a2,
                                          &v18);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = ((__int64 (__fastcall *)(CallerIdentity **, const unsigned __int16 *, const WCHAR *, const unsigned __int16 *, _DWORD, _DWORD *))CSwitchController::_PrepareAppForActivation)(
                                            this - 11,
                                            a2,
                                            v6,
                                            a4,
                                            *((_DWORD *)v13 + 3),
                                            v17);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                              (CSwitchController *)(this - 11),
                                              (struct CSwitchController::ActivationData *)v17);
        if ( MonitorForAppSwitchWithPreference >= 0 )
          MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                                v15,
                                                (struct CSwitchController::ActivationData *)v17);
      }
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)v17);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    if ( !v6 )
      v6 = &szAgent;
    McTemplateU0zzzq_EventWriteTransfer(
      v11,
      v10,
      (_DWORD)a2,
      (_DWORD)v6,
      (__int64)a4,
      MonitorForAppSwitchWithPreference);
  }
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v22);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}

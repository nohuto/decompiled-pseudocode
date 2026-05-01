/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1803AB060
 * Callers:
 *     ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1803AA600 (-GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFE.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803AA940 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1803AAD60 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z.c)
 *     ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1803AB12C (-_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersive.c)
 */

__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        CallerIdentity **a1,
        __int64 a2,
        unsigned int a3,
        struct IUnknown *a4,
        struct IImmersiveMonitor **a5)
{
  struct IImmersiveMonitor **v9; // rsi
  __int64 v10; // rcx
  unsigned int MonitorForAppSwitch; // eax
  unsigned int v12; // ebx
  struct IImmersiveMonitor *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  if ( (int)CSwitchController::_GetValidDefaultMonitor(v10, a3, a2, v14, &a5) >= 0 && (_BYTE)a5 )
    MonitorForAppSwitch = (**(__int64 (__fastcall ***)(struct IImmersiveMonitor *, GUID *, struct IImmersiveMonitor **))v14[0])(
                            v14[0],
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            v9);
  else
    MonitorForAppSwitch = CSwitchController::_GetMonitorForAppSwitch(a1, v14[0], a4, v9);
  v12 = MonitorForAppSwitch;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return v12;
}

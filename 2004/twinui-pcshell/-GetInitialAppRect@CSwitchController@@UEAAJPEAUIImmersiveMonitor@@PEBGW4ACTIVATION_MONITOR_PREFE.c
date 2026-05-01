/*
 * XREFs of ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1803CB660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1803CC0C0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1803CC0C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::GetInitialAppRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        LPRECT lprc)
{
  int MonitorForAppSwitchWithPreference; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  SetRectEmpty(lprc);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                        a1 - 88,
                                        a2,
                                        a4,
                                        a3,
                                        &v11);
  if ( MonitorForAppSwitchWithPreference >= 0 )
    MonitorForAppSwitchWithPreference = (*(__int64 (__fastcall **)(__int64, LPRECT))(*(_QWORD *)v11 + 88LL))(v11, lprc);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}

/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180129EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013157C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180131834 (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180131A38 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int MonitorForNotifyApp; // esi
  struct ISyncIAMEventHandler *v6; // rbx
  void (__fastcall *v7)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int); // rdi
  int v8; // eax
  __int64 v10[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ISyncIAMEventHandler *v11; // [rsp+98h] [rbp+48h] BYREF
  struct IObjectArray *v12; // [rsp+A0h] [rbp+50h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+A8h] [rbp+58h] BYREF

  v10[0] = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  MonitorForNotifyApp = v4((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v10);
  if ( MonitorForNotifyApp >= 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 240),
                            (struct IImmersiveApplicationInternal *)a2,
                            &v13);
    if ( MonitorForNotifyApp >= 0 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 240),
                              v13,
                              &v12);
      if ( MonitorForNotifyApp >= 0 )
      {
        v11 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 240),
                                &v11);
        if ( MonitorForNotifyApp >= 0 )
        {
          v6 = v11;
          v7 = *(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(*(_QWORD *)v11 + 24LL);
          v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[17])(a2);
          v7(
            v6,
            v12,
            ((unsigned __int64)this + 8) & -(__int64)(this != (CApplicationManager *)240),
            v10[0],
            v8,
            7,
            0xFFFF);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return (unsigned int)MonitorForNotifyApp;
}

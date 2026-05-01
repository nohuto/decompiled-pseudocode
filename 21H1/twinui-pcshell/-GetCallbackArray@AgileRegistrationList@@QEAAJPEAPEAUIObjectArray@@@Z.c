/*
 * XREFs of ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180029C00
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800294E0 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180029BE0 (-GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18003A500 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18006950C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180074A18 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x180134C14 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x18013D504 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18016D90C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x18022338C (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x18040F2B0 (--$_QueueNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@Z @ 0x18040F42C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV-$ComPtr@UIVirtual.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x18040F548 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x18041C5B0 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180091EAC (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v3; // rbx
  volatile int *v4; // rdx
  const char *v5; // r9
  __int64 v6; // r10
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IObjectArray *v9; // [rsp+30h] [rbp+8h]

  *a2 = 0LL;
  v3 = this + 3;
  AcquireSRWLockShared(this + 3);
  try
  {
    Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>();
    *a2 = v9;
    ((void (__fastcall *)(struct IObjectArray *))v9->lpVtbl->AddRef)(v9);
    if ( v9 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (Microsoft::WRL::Details *)((char *)&v9[5].lpVtbl + 4),
              v4) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( v3 )
      ReleaseSRWLockShared(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v5);
  }
  return result;
}

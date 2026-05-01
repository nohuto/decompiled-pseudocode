/*
 * XREFs of ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18018FA3C
 * Callers:
 *     ??_GCControlCenterExperienceManager@@UEAAPEAXI@Z @ 0x18018FC90 (--_GCControlCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180085D60 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180450274 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180452660 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::~CControlCenterExperienceManager(
        CControlCenterExperienceManager *this,
        volatile int *a2)
{
  __int64 v3; // r10
  __int64 v4; // r10
  struct _TP_TIMER *v5; // rcx
  Concurrency::details::_RefCounter *v6; // rcx
  __int64 v7; // rcx
  volatile int *v8; // rdx

  *(_QWORD *)this = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CControlCenterExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 2) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CControlCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IBaseExperienceManager'};
  *((_QWORD *)this + 4) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 5) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 6) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 8) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 11) = &CControlCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v3 = *((_QWORD *)this + 61);
  if ( v3 )
  {
    *((_QWORD *)this + 61) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v3 + 12), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 59);
  if ( v5 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  WindowsDeleteString(*((HSTRING *)this + 50));
  *((_QWORD *)this + 50) = 0LL;
  v6 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 49);
  if ( v6 )
    Concurrency::details::_RefCounter::_Destroy(v6);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CControlCenterExperienceManager *)((char *)this + 360));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CControlCenterExperienceManager *)((char *)this + 328));
  v7 = *((_QWORD *)this + 39);
  if ( v7 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CControlCenterExperienceManager *)((char *)this + 104));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>(
    (__int64)this,
    v8);
}

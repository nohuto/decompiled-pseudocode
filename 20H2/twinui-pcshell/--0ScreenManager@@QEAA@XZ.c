/*
 * XREFs of ??0ScreenManager@@QEAA@XZ @ 0x1804040F0
 * Callers:
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z @ 0x180403D3C (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

ScreenManager *__fastcall ScreenManager::ScreenManager(ScreenManager *this)
{
  ScreenManager *result; // rax

  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::`vftable'{for `IAppViewCloseOverrideBehavior'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScreenManagerTestHook>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ScreenManager::`vftable';
  *((_QWORD *)this + 1) = &ScreenManager::`vftable'{for `IAppViewCloseOverrideBehavior'};
  *((_QWORD *)this + 2) = &ScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>'};
  *((_QWORD *)this + 3) = &ScreenManager::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 4) = &ScreenManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScreenManagerTestHook>'};
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_BYTE *)this + 344) = 0;
  return result;
}

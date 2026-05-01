/*
 * XREFs of ??1?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B70AC
 * Callers:
 *     ??_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z @ 0x18009B210 (--_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$1 @ 0x1801D2980 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$1.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$2 @ 0x1801D2990 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$3 @ 0x1801D29A0 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$3.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$4 @ 0x1801D29B3 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$5 @ 0x1801D29C6 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$6 @ 0x1801D29D9 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$7 @ 0x1801D29EC (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$7.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$8 @ 0x1801D29FF (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$8.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$1 @ 0x1802694B3 (_TabViewManager--TabViewManager_--_1_--dtor$1.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$2 @ 0x1802694C6 (_TabViewManager--TabViewManager_--_1_--dtor$2.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$3 @ 0x1802694D9 (_TabViewManager--TabViewManager_--_1_--dtor$3.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$4 @ 0x1802694EC (_TabViewManager--TabViewManager_--_1_--dtor$4.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$5 @ 0x1802694FF (_TabViewManager--TabViewManager_--_1_--dtor$5.c)
 *     _ViewGroup::ViewGroup_::_1_::dtor$6 @ 0x1802959B8 (_ViewGroup--ViewGroup_--_1_--dtor$6.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$1 @ 0x180373D2D (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$1.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091EB0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r10

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v2 + 12), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}

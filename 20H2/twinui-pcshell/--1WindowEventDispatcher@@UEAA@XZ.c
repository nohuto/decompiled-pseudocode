/*
 * XREFs of ??1WindowEventDispatcher@@UEAA@XZ @ 0x1802B1824
 * Callers:
 *     ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x1802B1DA0 (--_EWindowEventDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18004ADDC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004B7F8 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021D8F8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1802B00A0 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivatio.c)
 */

void __fastcall WindowEventDispatcher::~WindowEventDispatcher(WindowEventDispatcher *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile int *v10; // rdx

  std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    (__int64)this,
    *((_QWORD ***)this + 65));
  std::_Deallocate<16,0>(*((void **)this + 65), (const struct std::nothrow_t *)0x18);
  std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    v2,
    *((_QWORD ***)this + 63));
  std::_Deallocate<16,0>(*((void **)this + 63), (const struct std::nothrow_t *)0x18);
  v3 = (char *)*((_QWORD *)this + 60);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)this + 57);
  v4 = (void *)*((_QWORD *)this + 53);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(*((_QWORD *)this + 53), *((_QWORD *)this + 54));
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 55) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 49);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
      *((_QWORD *)this + 49),
      *((_QWORD *)this + 50));
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 51) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 46);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 47));
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 48) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
  }
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 45);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 42);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 41);
  v9 = *((_QWORD *)this + 40);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 39);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 38);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 36);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 35);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v10);
}

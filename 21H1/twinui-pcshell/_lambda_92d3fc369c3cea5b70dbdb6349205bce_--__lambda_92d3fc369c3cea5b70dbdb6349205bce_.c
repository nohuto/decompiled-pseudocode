/*
 * XREFs of _lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x180248548
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::_scalar_deleting_destructor_ @ 0x180249CE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___--_scala.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180251090 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x180248D64 (--1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180254BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180254BD0.c)
 */

__int64 __fastcall lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)(a1 + 4));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 2);
  result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v3);
  }
  return result;
}

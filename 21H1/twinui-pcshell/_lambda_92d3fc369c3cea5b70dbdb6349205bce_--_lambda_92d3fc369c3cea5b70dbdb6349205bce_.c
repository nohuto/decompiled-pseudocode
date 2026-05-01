/*
 * XREFs of _lambda_92d3fc369c3cea5b70dbdb6349205bce_::_lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x1802471FC
 * Callers:
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180251090 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180247470 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflect_ea_180247470.c)
 */

__int64 __fastcall lambda_92d3fc369c3cea5b70dbdb6349205bce_::_lambda_92d3fc369c3cea5b70dbdb6349205bce_(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  *(_QWORD *)a1 = 0LL;
  if ( (_QWORD *)a1 != a2 )
  {
    *(_QWORD *)a1 = *a2;
    *a2 = 0LL;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)(a1 + 8),
    *a3);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)(a1 + 16),
    *a4);
  *(_QWORD *)(a1 + 24) = *a5;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  return a1;
}

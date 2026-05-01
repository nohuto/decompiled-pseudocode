/*
 * XREFs of _lambda_1c24ac78ee32bcd51d07a7ccb6962ab8_::__lambda_1c24ac78ee32bcd51d07a7ccb6962ab8_ @ 0x1800879A0
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x180100714 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation_::_1_::dtor$1 @ 0x18018065A (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncVisibilityReconciliation_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x180318C93 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_--_1_--dtor$.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::FirstFrameRendered_::_1_::dtor$1 @ 0x18031A1D8 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--FirstFrameRendere_ea_18031A1D8.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x18031B76C (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_18031B76C.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x18031BAF7 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::VirtualDesktopInvoked_::_1_::dtor$1 @ 0x18031C309 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--VirtualDesktopInvoked_--_1_--dtor$1.c)
 *     _TabletModePositioner::HandleFlashDetection_::_1_::dtor$2 @ 0x1803F8B8D (_TabletModePositioner--HandleFlashDetection_--_1_--dtor$2.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x180441E9D (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x180441F62 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_0.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$2 @ 0x180441F7A (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_cons_ea_180441F7A.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$1 @ 0x1804433EF (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::RegisterAumid_::_1_::dtor$2 @ 0x180475535 (_CSingleViewShellExperience--RegisterAumid_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_1c24ac78ee32bcd51d07a7ccb6962ab8_::__lambda_1c24ac78ee32bcd51d07a7ccb6962ab8_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18018F144
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18000B510 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18000C170 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x1800681A0 (_lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18006BCA0 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x18018C4DC (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x18018CC70 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18018CDF4 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::_lambda_0f26d6a788efdefbe2c747d83abf1d95_ @ 0x18018D164 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--_lambda_0f26d6a788efdefbe2c747d83abf1d95_.c)
 *     CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___::CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___ @ 0x18018D1D8 (CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___--CAsyncCallbackWithLambda__.c)
 *     CAsyncCallbackWithLambda__lambda_58d0b42f459fba30bfac1d074d7fc715___::CAsyncCallbackWithLambda__lambda_58d0b42f459fba30bfac1d074d7fc715___ @ 0x18018D25C (CAsyncCallbackWithLambda__lambda_58d0b42f459fba30bfac1d074d7fc715___--CAsyncCallbackWithLambda__.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18018E4D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_18018E4D0.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180192D80 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180197834 (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180197A80 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 236), a2);
}

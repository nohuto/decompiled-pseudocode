/*
 * XREFs of ??1?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18018D6C4
 * Callers:
 *     _CWin32ApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x1801013E4 (_CWin32ApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::GetRootSwitchableOwner_::_1_::dtor$2 @ 0x1801014E2 (_CWin32ApplicationView--GetRootSwitchableOwner_--_1_--dtor$2.c)
 *     __lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator()_::_1_::dtor$4 @ 0x180105201 (__lambda_11a25c1b712ef8d7b807ed3fc486eab4_--operator()_--_1_--dtor$4.c)
 *     _CWinRTApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$1 @ 0x180105396 (_CWinRTApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationViewManager_IUnknown__::_1_::dtor$2 @ 0x18018C4C9 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationViewManager_IUnknown__--_1_--dtor$2.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e____::_1_::dtor$2 @ 0x18018CDD4 (_CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5_ea_18018CDD4.c)
 *     _CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360____::_1_::dtor$3 @ 0x18018CF6E (_CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558b_ea_18018CF6E.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$5 @ 0x180193042 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$5.c)
 *     _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$1 @ 0x180197BA0 (_CApplicationViewBase--SetEnterpriseId_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EFD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::~ComPtr<CApplicationViewManager>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
                    v2,
                    a2);
  }
  return v2;
}

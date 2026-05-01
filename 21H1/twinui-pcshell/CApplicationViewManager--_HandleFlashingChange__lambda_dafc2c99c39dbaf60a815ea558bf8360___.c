/*
 * XREFs of CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180169294
 * Callers:
 *     ?HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z @ 0x18016B3C0 (-HandleFlashingChangeForApplication@CApplicationViewManager@@UEAAXPEAUIImmersiveApplication@@H@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewSerialization@@@?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewSerialization@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801681C4 (--$As@UIApplicationViewSerialization@@@-$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microso.c)
 *     CreateAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___ @ 0x18016824C (CreateAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___.c)
 *     _lambda_0f26d6a788efdefbe2c747d83abf1d95_::_lambda_0f26d6a788efdefbe2c747d83abf1d95_ @ 0x180169604 (_lambda_0f26d6a788efdefbe2c747d83abf1d95_--_lambda_0f26d6a788efdefbe2c747d83abf1d95_.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016B5E4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___(
        __int64 a1,
        __int64 *a2,
        int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  volatile int *v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v19; // [rsp+A0h] [rbp+28h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp+30h]
  int v21; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+40h] BYREF

  v21 = a3;
  v20 = a2;
  v5 = *(_QWORD *)(a1 + 744);
  v14 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v19 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IImmersiveApplicationPresentation>::As<IApplicationViewSerialization>(&v14, &v19);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v15 = a1;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(a1);
      v8 = lambda_0f26d6a788efdefbe2c747d83abf1d95_::_lambda_0f26d6a788efdefbe2c747d83abf1d95_(
             (unsigned int)v16,
             (_DWORD)a2,
             (unsigned int)&v21,
             (unsigned int)&v15,
             a1);
      CreateAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95_(&v22, v8);
      v10 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
          v10,
          v9);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, v22);
      v6 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EF,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        a1,
        v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E0,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  else
  {
    v6 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000CLL);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v6;
}

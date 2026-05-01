/*
 * XREFs of _lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator() @ 0x1800681A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11a25c1b712ef8d7b807ed3fc486eab4___::Run @ 0x180068190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_11a25c1b712ef8d7b807ed3fc486eab4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CED0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EFD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000F544 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800217B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180056530 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058E00 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18018F144 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180193A08 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_11a25c1b712ef8d7b807ed3fc486eab4_::operator()(__int64 *a1)
{
  WCHAR *v2; // rsi
  int Application; // eax
  int EnterpriseIdForWindow; // edi
  unsigned __int16 **v5; // r8
  __int64 v6; // r14
  const WCHAR **v7; // rdi
  const WCHAR *v8; // r10
  const WCHAR *v9; // r8
  __int64 v10; // rax
  const WCHAR *v11; // rcx
  int v12; // eax
  volatile int *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  volatile int *v16; // rdx
  __int64 v17; // rcx
  struct HWND__ v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF
  struct IImmersiveApplication *v24; // [rsp+A0h] [rbp+50h] BYREF
  EdpHelpers *v25; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v19[0].unused = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(*a1 + 152), &v24);
    EnterpriseIdForWindow = Application;
    if ( Application < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      goto LABEL_40;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    EnterpriseIdForWindow = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(*(_QWORD *)v24 + 24LL))(
                              v24,
                              1LL,
                              &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                              &v23);
    if ( EnterpriseIdForWindow < 0
      || (EnterpriseIdForWindow = (*(__int64 (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v23 + 32LL))(v23, &v25),
          EnterpriseIdForWindow < 0) )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_9;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v19);
    v20 = -1LL;
    v21 = -1LL;
    EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v25, v19, v5);
    if ( EnterpriseIdForWindow < 0 )
    {
      v2 = *(WCHAR **)&v19[0].unused;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v2 = *(WCHAR **)&v19[0].unused;
  }
  v6 = *a1;
  AcquireSRWLockExclusive((PSRWLOCK)(v6 + 48));
  v25 = (EdpHelpers *)(v6 + 48);
  if ( !*(_BYTE *)(v6 + 56) )
    goto LABEL_34;
  v7 = (const WCHAR **)(v6 + 64);
  v8 = &szAgent;
  v9 = &szAgent;
  if ( v2 )
    v9 = v2;
  v10 = *(_QWORD *)(v6 + 72);
  v11 = *v7;
  if ( v10 == -1 )
  {
    if ( v11 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v11[v10] );
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  if ( v11 )
    v8 = *v7;
  if ( CompareStringOrdinal(v8, v10, v9, -(v2 != 0LL), 0) == 2 )
  {
LABEL_33:
    *(_BYTE *)(v6 + 56) = 0;
LABEL_34:
    if ( v6 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v6 + 48));
    EnterpriseIdForWindow = 0;
    goto LABEL_37;
  }
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (LPVOID *)(v6 + 64),
          (__int64)v2,
          0xFFFFFFFFFFFFFFFFuLL);
  EnterpriseIdForWindow = v12;
  if ( v12 >= 0 )
  {
    v23 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v24);
    if ( v24 )
    {
      v14 = *((_QWORD *)v24 + 6);
      v15 = v23;
      if ( v23 != v14 )
      {
        if ( v14 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(*((_QWORD *)v24 + 6));
          v15 = v23;
        }
        v23 = v14;
        if ( v15 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
            v15,
            v13);
      }
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)&v24);
    CApplicationViewManager::RaiseApplicationViewChanged(v23 + 136, v6, 0x12u, 0LL);
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        v17,
        v16);
    }
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x121,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v25);
LABEL_37:
  if ( EnterpriseIdForWindow >= 0 )
    EnterpriseIdForWindow = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)EnterpriseIdForWindow);
LABEL_40:
  if ( v2 )
    CoTaskMemFree(v2);
  return (unsigned int)EnterpriseIdForWindow;
}

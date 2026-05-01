/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180173F60
 * Callers:
 *     _lambda_7dedf9f14c3362839610df2f12c2fb98_::operator() @ 0x18016EB30 (_lambda_7dedf9f14c3362839610df2f12c2fb98_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BA68 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180062B90 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180124D44 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016B5E4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(CApplicationViewBase *this, const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  volatile int *v6; // rdx
  __int64 v7; // r10
  volatile int *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v11; // [rsp+40h] [rbp+20h]
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, (RTL_SRWLOCK *)this + 3);
  if ( !*((_BYTE *)this + 32) )
    goto LABEL_11;
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)this + 5,
         a2,
         -1) == 2 )
  {
LABEL_10:
    *((_BYTE *)this + 32) = 0;
LABEL_11:
    v5 = 0;
    goto LABEL_12;
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (LPVOID *)this + 5,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v12);
    if ( v12 && *(_QWORD *)(v12 + 48) )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(
        *(_QWORD *)(v12 + 48),
        v6);
      v11 = v7;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v12);
    CApplicationViewManager::RaiseApplicationViewChanged(v11 + 136, (__int64)this - 24, 0x12u, 0LL);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(
        v11,
        v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return v5;
}

/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18000CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x18000D5AC (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x1800347E0 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801292F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016A970 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_18016A970.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r10
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 v11[4]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+34h] [rbp-2Ch]
  BOOL v13; // [rsp+38h] [rbp-28h]
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A8h] [rbp+48h]

  v15 = 0LL;
  v3 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v4 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v3 = v5;
    v4 = v5;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v4 )
  {
    v7 = *(_QWORD *)(v3 + 48);
    if ( v7 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IObservableObjectArrayChanged,IVirtualDesktopContainerElement,IScrollableElement>::AddRef(v7);
      v15 = v7;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v4 + 36), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v8 = v15;
  if ( v15 )
    v8 = v15 + 136;
  AcquireSRWLockExclusive(this + 6);
  v18 = this + 6;
  if ( (a2 != 0) != LOBYTE(this[27].Ptr) )
  {
    LOBYTE(this[27].Ptr) = a2 != 0;
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[2], (unsigned __int16 **)pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v17);
      v9 = v17;
      if ( v17 )
      {
        v13 = a2 != 0;
        *(_DWORD *)v11 = 4;
        v12 = 1397960752;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v17 + 40),
          (const unsigned __int16 *)pv[0],
          L"ShowInSwitchers",
          v11,
          0xCu);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v9);
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v8 + 168LL))(
        v8,
        this,
        11 - (unsigned int)(a2 != 0),
        0LL);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}

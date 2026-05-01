/*
 * XREFs of ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1802A7DF8
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x1802C0720 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801500DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802AB18C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802ACB34 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1802AD408 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::TryConsolidate(RTL_SRWLOCK *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  struct IViewWrapperInternal *v6; // rdx
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v8; // [rsp+20h] [rbp-10h] BYREF
  struct IViewWrapperInternal *v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  v9 = 0LL;
  v5 = 0LL;
  v10 = 0LL;
  AcquireSRWLockShared(this + 35);
  v8 = this + 35;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v9) >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v9, &v10);
    v5 = v10;
  }
  if ( this != (RTL_SRWLOCK *)-280LL )
    ReleaseSRWLockShared(this + 35);
  v6 = v9;
  if ( v9 && v5 )
  {
    v7 = *(RTL_SRWLOCK **)(v5 + 32);
    v8 = v7;
    if ( v7 )
    {
      (*((void (__fastcall **)(RTL_SRWLOCK *))v7->Ptr + 1))(v7);
      v6 = v9;
    }
    ViewEventDispatcher::_RaiseViewEvent(this, v6, 35LL, &v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
}

/*
 * XREFs of ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x180286A88
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x18029F470 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012BC2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180289E3C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18028B7E4 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x18028C0B8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
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

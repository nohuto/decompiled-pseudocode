/*
 * XREFs of ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1802A7F8C
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BFE68 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003704C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18029E004 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManager_ea_18029E004.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802AAF28 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1802AB450 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  struct IInspectable *v17; // rcx
  int v18; // eax
  __int64 result; // rax
  wil *v20; // rcx
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD); // rbx
  unsigned int v23; // eax
  struct IInspectable *v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  int v27[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v28; // [rsp+60h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h] BYREF
  __int64 v30; // [rsp+70h] [rbp-28h] BYREF
  __int64 v31; // [rsp+78h] [rbp-20h] BYREF
  __int64 v32; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v34; // [rsp+B8h] [rbp+20h] BYREF

  v34 = a4;
  v28 = 0LL;
  *(_QWORD *)v27 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             (_DWORD)a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v28,
                                                             (__int64)v27,
                                                             (__int64)&v26);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        386LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v12 = a6;
    if ( a6 )
    {
      AcquireSRWLockShared(a1 + 35);
      if ( (int)ViewEventDispatcher::_FindPendingActivation(a1, v12, &v30) < 0 )
      {
        a6 = 0LL;
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v29, (__int64 *)(v30 + 32));
        v10 = v29;
      }
      if ( a1 != (RTL_SRWLOCK *)-280LL )
        ReleaseSRWLockShared(a1 + 35);
    }
    v25 = 0LL;
    v30 = v10;
    v31 = *(_QWORD *)v27;
    v13 = v28;
    v32 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
            &v25,
            &v32,
            &v31,
            &v34,
            &a5,
            &a6,
            &a7,
            &v30);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        412LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v24 = 0LL;
    v15 = v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    if ( *(_QWORD *)(v15 + 32) )
    {
      v16 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v15 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v24);
      v17 = v24;
    }
    else
    {
      v17 = 0LL;
      v24 = 0LL;
      v16 = -2147024809;
    }
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        415LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    v18 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v17->lpVtbl->GetIids)(v17, v13, v25);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        416LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  }
  catch ( ... )
  {
    v21 = a7;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a7 + 24LL);
    v23 = wil::ResultFromCaughtException(v20);
    return v22(v21, v23);
  }
  return result;
}

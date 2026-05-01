/*
 * XREFs of ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x180286F50
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18029EBB8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@W4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAW4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@$$QEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@$$QEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18027CD58 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180289BD8 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::TryShowAsViewModeAsync(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  struct IInspectable *v16; // rcx
  int v17; // eax
  __int64 result; // rax
  wil *v19; // rcx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD); // rbx
  unsigned int v22; // eax
  struct IInspectable *v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h] BYREF
  int v26[2]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h] BYREF
  int v28; // [rsp+78h] [rbp-20h] BYREF
  int v29; // [rsp+7Ch] [rbp-1Ch] BYREF
  __int64 v30; // [rsp+80h] [rbp-18h] BYREF
  __int64 v31; // [rsp+88h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v33; // [rsp+B8h] [rbp+20h] BYREF

  v33 = a4;
  v27 = 0LL;
  *(_QWORD *)v26 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v27,
                                                             (__int64)v26,
                                                             (__int64)&v25);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        484LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v24 = 0LL;
    v28 = 0;
    v29 = 0;
    v30 = *(_QWORD *)v26;
    v12 = v27;
    v31 = v27;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping &,IAsyncCallback * &>(
            &v24,
            &v31,
            &v30,
            &v33,
            &v29,
            &a5,
            &v28,
            &a6,
            &a7,
            &a8);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        496LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    v23 = 0LL;
    v14 = v25;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    if ( *(_QWORD *)(v14 + 32) )
    {
      v15 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v14 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v23);
      v16 = v23;
    }
    else
    {
      v16 = 0LL;
      v23 = 0LL;
      v15 = -2147024809;
    }
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        499LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
    v17 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v16->lpVtbl->GetIids)(v16, v12, v24);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        500LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  }
  catch ( ... )
  {
    v20 = a8;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a8 + 24LL);
    v22 = wil::ResultFromCaughtException(v19);
    return v21(v20, v22);
  }
  return result;
}

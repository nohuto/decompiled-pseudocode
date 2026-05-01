/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180066334
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180065D40 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180065EF0 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B0730 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800174EC (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180066490 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChang.c)
 *     ??0CVisibilityChangedEventArgs@@QEAA@XZ @ 0x180066534 (--0CVisibilityChangedEventArgs@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@Z @ 0x1800665C4 (--$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@-$factory_cache_entry@UViewCoordinator@S.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0f953024412bf824e857bd2efbd1b100___ @ 0x180066BC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_0f953024412bf824e857bd2efbd1b100___.c)
 *     ??$DoInvoke@V_lambda_e76785eefaca58383fb180da28b78939_@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_e76785eefaca58383fb180da28b78939_@@@Z @ 0x180066C6C (--$DoInvoke@V_lambda_e76785eefaca58383fb180da28b78939_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800803E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // r15d
  int v4; // eax
  CVisibilityChangedEventArgs *v5; // rax
  CVisibilityChangedEventArgs *v6; // r14
  int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  CActionCenterExperienceManager *v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 40);
  v15 = v3 == 2;
  v4 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, a2, v3 == 2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x395,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v12[0]);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v16 = 0LL;
  v5 = (CVisibilityChangedEventArgs *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v5;
  if ( v5 )
  {
    v6 = CVisibilityChangedEventArgs::CVisibilityChangedEventArgs(v5);
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>>(
           v6,
           &GUID_b27335b3_309e_40d6_8ed5_36dda0289f16,
           &v16);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(v6);
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x399,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
  }
  else
  {
    v18 = v16;
    v17 = this;
    *(_QWORD *)v12 = &v17;
    v13 = &v18;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_e76785eefaca58383fb180da28b78939_>(
      (char *)this + 616,
      v12);
  }
  winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<_lambda_711c13f4a08a1e89e6ea62835a20ef04_ &>(
    v8,
    &v17);
  v9 = (*(__int64 (__fastcall **)(CActionCenterExperienceManager *, _QWORD, bool))(*(_QWORD *)v17 + 72LL))(
         v17,
         0LL,
         v3 != 2);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v17);
  v15 = v3 == 2;
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_0f953024412bf824e857bd2efbd1b100___(v10, &v15);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v12[0]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
}

/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800B5990
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800B5818 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756@@@details@wil@@QEAA_NXZ @ 0x18008A1E0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOr.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$?0_JU?$ratio@$00$00@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$00@std@@@12@@Z @ 0x1800B0FA4 (--$-0_JU-$ratio@$00$00@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-$du.c)
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x1800B1504 (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 *     ??8?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x1800B4FBC (--8-$_List_const_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KUWindowData@implement.c)
 *     ??__Lwinrt@@YA?AUawaitable@?1??resume_after@0@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@0@Z @ 0x1800B53CC (--__Lwinrt@@YA-AUawaitable@-1--resume_after@0@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chron.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800B9A88 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ??$?__LI@Foundation@Windows@winrt@@YA?AU?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@2@AEBU?$IAsyncOperation@I@012@@Z @ 0x1800BAE7C (--$-__LI@Foundation@Windows@winrt@@YA-AU-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756@@@details@wil@@QEAA_NXZ @ 0x1800BB2A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_2984.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800BB534 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?end@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@XZ @ 0x1800BB5CC (-end@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uhas.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800BBE6C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800BBE7C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800BEF90 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800BF4BC (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800BF518 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x1800BFDAC (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     HandleToULong @ 0x180113B5C (HandleToULong.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180113EB8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180113EB8.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801183A8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x18018AA6C (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18043E728 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x180442188 (-await_ready@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1804423F8 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component *v3; // rax
  struct IServiceProvider *v4; // rdx
  struct IProfferService *v5; // r8
  winrt::immersive_shell_component *v6; // rax
  struct IServiceProvider *v7; // rdx
  struct IProfferService *v8; // r8
  HWND ForegroundWindow; // rax
  winrt::immersive_shell_component *v10; // rax
  struct IServiceProvider *v11; // rdx
  struct IProfferService *v12; // r8
  struct IServiceProvider *v13; // rdx
  struct IProfferService *v14; // r8
  struct IProfferService *v15; // r8
  _QWORD *v16; // [rsp+E0h] [rbp-648h]
  _QWORD *v17; // [rsp+E8h] [rbp-640h]
  _QWORD *v18; // [rsp+2E0h] [rbp-448h]
  _QWORD *v19; // [rsp+2E8h] [rbp-440h]
  IApplicationViewChangeListener *v20; // [rsp+608h] [rbp-120h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 1:
    case 3:
      goto LABEL_30;
    case 2:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 736), a2, a3);
      Microsoft::WRL::Wrappers::SRWLock::LockShared(*(_QWORD *)(a1 + 736) + 600LL, a1 + 16);
      *(_QWORD *)(a1 + 448) = std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                                *(_QWORD *)(a1 + 736) + 608LL,
                                a1 + 48,
                                a1 + 744);
      v17 = *(_QWORD **)(a1 + 448);
      v16 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::end(
                        *(_QWORD *)(a1 + 736) + 608LL,
                        a1 + 56);
      *(_BYTE *)(a1 + 464) = std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>::operator==(
                               v17,
                               v16);
      if ( *(_BYTE *)(a1 + 464) )
      {
        v3 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        winrt::immersive_shell_component::publish_services(v3, v4, v5);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(a1 + 16);
      }
      else
      {
        *(_QWORD *)(a1 + 480) = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                  *(_QWORD *)(a1 + 736) + 608LL,
                                  a1 + 744);
        *(_QWORD *)(a1 + 496) = winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
                                  *(_QWORD *)(a1 + 480),
                                  a1 + 80);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)*(_QWORD *)(a1 + 496);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(a1 + 16);
        *(_QWORD *)(a1 + 112) = a1 + 104;
        *(_QWORD *)(a1 + 512) = winrt::Windows::Foundation::operator co_await<unsigned int>(a1 + 120, 1LL);
        *(_QWORD *)(a1 + 528) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                  *(_QWORD **)(a1 + 112),
                                  *(_QWORD **)(a1 + 512));
        *(_QWORD *)(a1 + 544) = winrt::operator co_await((_QWORD *)(a1 + 24), **(_QWORD **)(a1 + 528));
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 544);
        if ( !(unsigned __int8)`winrt::resume_after'::`2'::awaitable::await_ready(*(_QWORD *)(a1 + 96)) )
        {
          *(_QWORD *)(a1 + 136) = *(_QWORD *)winrt::Windows::Foundation::operator co_await<unsigned int>(a1 + 128, a1);
          *(_WORD *)(a1 + 8) = 4;
          `winrt::resume_after'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 136));
          return;
        }
        *(_DWORD *)(a1 + 272) = 0;
LABEL_9:
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 96), a2, a3);
        `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 24);
        Microsoft::WRL::Wrappers::SRWLock::LockShared(*(_QWORD *)(a1 + 736) + 600LL, a1 + 40);
        *(_QWORD *)(a1 + 560) = std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                                  *(_QWORD *)(a1 + 736) + 608LL,
                                  a1 + 144,
                                  a1 + 744);
        v19 = *(_QWORD **)(a1 + 560);
        v18 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::end(
                          *(_QWORD *)(a1 + 736) + 608LL,
                          a1 + 152);
        *(_BYTE *)(a1 + 576) = std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>::operator==(
                                 v19,
                                 v18);
        if ( *(_BYTE *)(a1 + 576) )
        {
          v6 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
          winrt::immersive_shell_component::publish_services(v6, v7, v8);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(a1 + 40);
        }
        else
        {
          *(_QWORD *)(a1 + 592) = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                    *(_QWORD *)(a1 + 736) + 608LL,
                                    a1 + 744);
          *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 592);
          winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(*(_QWORD *)(a1 + 160), a1 + 168);
          *(_BYTE *)(a1 + 608) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabledPreCheck();
          *(_BYTE *)(a1 + 624) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::GetImpl'::`2'::impl);
          if ( *(_BYTE *)(a1 + 624) )
            *(_DWORD *)(a1 + 432) = 1;
          else
            *(_DWORD *)(a1 + 432) = 0;
          if ( *(_BYTE *)(a1 + 432) )
          {
            *(_BYTE *)(a1 + 184) = winrt::operator==(a1 + 168, a1 + 64);
            *(_OWORD *)(a1 + 224) = *(_OWORD *)(a1 + 168);
            *(_BYTE *)(a1 + 640) = winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(
                                     *(_QWORD *)(a1 + 160),
                                     a1 + 224);
            *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 640);
            ForegroundWindow = GetForegroundWindow();
            *(_DWORD *)(a1 + 288) = HandleToULong(ForegroundWindow) == *(_QWORD *)(a1 + 744);
            *(_BYTE *)(a1 + 186) = *(_BYTE *)(a1 + 288);
            if ( *(_BYTE *)(a1 + 184) && *(_BYTE *)(a1 + 185) && *(_BYTE *)(a1 + 186) )
            {
              *(_QWORD *)(a1 + 320) = *(_QWORD *)(a1 + 736);
              *(_OWORD *)(a1 + 240) = *(_OWORD *)(a1 + 168);
              *(_QWORD *)(a1 + 656) = winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(
                                        *(_QWORD *)(a1 + 160),
                                        a1 + 240);
              *(_QWORD *)(a1 + 304) = *(_QWORD *)(a1 + 656);
              *(_OWORD *)(a1 + 256) = *(_OWORD *)(a1 + 168);
              *(_QWORD *)(a1 + 672) = winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(
                                        *(_QWORD *)(a1 + 160),
                                        a1 + 256);
              winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
                *(winrt::Windows::Internal::Shell::implementation::WindowTabHost **)(a1 + 320),
                *(HWND *)(a1 + 672),
                *(HWND *)(a1 + 304));
            }
            else
            {
              WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>(
                (char *)(a1 + 184),
                (char *)(a1 + 185),
                (char *)(a1 + 186));
            }
          }
          else if ( (unsigned __int8)winrt::operator==(a1 + 168, a1 + 64) )
          {
            *(_OWORD *)(a1 + 384) = *(_OWORD *)(a1 + 168);
            *(_BYTE *)(a1 + 688) = winrt::Windows::Internal::Shell::implementation::WindowData::TabProxyWindowExists(
                                     *(_QWORD *)(a1 + 160),
                                     a1 + 384);
            if ( *(_BYTE *)(a1 + 688) )
            {
              *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 736);
              *(_OWORD *)(a1 + 400) = *(_OWORD *)(a1 + 168);
              *(_QWORD *)(a1 + 704) = winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowOwnerWindow(
                                        *(_QWORD *)(a1 + 160),
                                        a1 + 400);
              *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 704);
              *(_OWORD *)(a1 + 416) = *(_OWORD *)(a1 + 168);
              *(_QWORD *)(a1 + 720) = winrt::Windows::Internal::Shell::implementation::WindowData::GetTabProxyWindowHwnd(
                                        *(_QWORD *)(a1 + 160),
                                        a1 + 416);
              winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
                *(winrt::Windows::Internal::Shell::implementation::WindowTabHost **)(a1 + 352),
                *(HWND *)(a1 + 720),
                *(HWND *)(a1 + 336));
            }
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(a1 + 40);
          v10 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
          winrt::immersive_shell_component::publish_services(v10, v11, v12);
        }
      }
      v20 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
      *(_QWORD *)(a1 + 192) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
                                v20,
                                a1 + 200);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabledPreCheck() )
      {
        *(_DWORD *)(a1 + 368) = 0;
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 192), v13, v14);
LABEL_30:
        winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x2F0);
      }
      else
      {
        *(_QWORD *)(a1 + 216) = *(_QWORD *)winrt::Windows::Foundation::operator co_await<unsigned int>(a1 + 208, a1);
        *(_WORD *)(a1 + 8) = 0;
        winrt::immersive_shell_component::publish_services(
          *(winrt::immersive_shell_component **)(a1 + 192),
          *(struct IServiceProvider **)(a1 + 216),
          v15);
      }
      return;
    case 4:
      *(_DWORD *)(a1 + 272) = 0;
      goto LABEL_9;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 24);
      goto LABEL_30;
    default:
      __debugbreak();
      return;
  }
}

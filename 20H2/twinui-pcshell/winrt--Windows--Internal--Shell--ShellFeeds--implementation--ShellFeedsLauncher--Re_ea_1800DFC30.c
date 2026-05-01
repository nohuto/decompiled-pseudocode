/*
 * XREFs of winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800DFC30
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800DFAC0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008A450 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??__Lwinrt@@YA?AUawaitable@?1??resume_after@0@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@0@Z @ 0x1800C9C40 (--__Lwinrt@@YA-AUawaitable@-1--resume_after@0@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chron.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800CEEDC (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800CEF78 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800CFE8C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ??$?0HX@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z @ 0x1800DD610 (--$-0HX@-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBH@Z.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUevent_token@5@@Z @ 0x1800DE178 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUevent_tok.c)
 *     ?ShellFeedsLauncher_NetworkStatusChangeListenerStopped@ShellFeedsTelemetry@@SAXXZ @ 0x1800E081C (-ShellFeedsLauncher_NetworkStatusChangeListenerStopped@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E15FC (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     HandleToULong @ 0x18013800C (HandleToULong.c)
 *     ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1801F7BAC (--$-0_JU-$ratio@$00$0DOI@@std@@X@-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV-.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180461DF8 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x180465828 (-await_ready@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180465A98 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__ResumeCoro_2(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  ShellFeedsAvailability *v3; // rcx
  unsigned __int8 *v4; // r9
  winrt::immersive_shell_component *v5; // rax
  struct IServiceProvider *v6; // rdx
  struct IProfferService *v7; // r8
  struct IServiceProvider *v8; // rdx
  struct IProfferService *v9; // r8
  struct IProfferService *v10; // r8
  IApplicationViewChangeListener *v11; // [rsp+220h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+2A8h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 1:
    case 3:
      goto LABEL_14;
    case 2:
      winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 + 256), a2, a3);
      *(_QWORD *)(a1 + 48) = a1 + 40;
      *(_QWORD *)(a1 + 240) = std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
                                (_QWORD *)(a1 + 56),
                                (int *)&unk_1804F0A08);
      *(_QWORD *)(a1 + 176) = std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
                                *(_QWORD *)(a1 + 48),
                                *(_QWORD *)(a1 + 240));
      *(_QWORD *)(a1 + 160) = winrt::operator co_await((_QWORD *)(a1 + 16), **(_QWORD **)(a1 + 176));
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 160);
      if ( (unsigned __int8)`winrt::resume_after'::`2'::awaitable::await_ready(*(_QWORD *)(a1 + 32)) )
      {
        *(_DWORD *)(a1 + 128) = 0;
LABEL_7:
        winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 32), a2, a3);
        `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
        *(_BYTE *)(a1 + 80) = 1;
        *(_BYTE *)(a1 + 81) = 0;
        LOBYTE(v3) = 1;
        *(_DWORD *)(a1 + 208) = ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
                                  v3,
                                  (unsigned __int8)a1 + 80,
                                  (unsigned __int8 *)(a1 + 81),
                                  v4);
        *(_DWORD *)(a1 + 192) = HandleToULong((const void *)*(unsigned int *)(a1 + 208));
        *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 224) = retaddr;
        if ( *(int *)(a1 + 120) < 0 )
          wil::details::in1diag3::_Log_Hr(
            *(wil::details::in1diag3 **)(a1 + 224),
            (void *)0x87,
            (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
            (const char *)*(unsigned int *)(a1 + 120));
        if ( !*(_BYTE *)(a1 + 80) )
        {
          ShellFeedsTelemetry::ShellFeedsLauncher_NetworkStatusChangeListenerStopped();
          SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
          winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged((const struct winrt::event_token *)(*(_QWORD *)(a1 + 256) + 104LL));
        }
        v5 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        winrt::immersive_shell_component::publish_services(v5, v6, v7);
        v11 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
        *(_QWORD *)(a1 + 88) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
                                 (__int64)v11,
                                 (_BYTE *)(a1 + 96));
        if ( WindowWrapper::v_SupportsBack(*(WindowWrapper **)(a1 + 88)) )
        {
          *(_DWORD *)(a1 + 144) = 0;
          winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a1 + 88), v8, v9);
LABEL_14:
          winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)a1, a2, a3);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1, (const struct std::nothrow_t *)0x108);
        }
        else
        {
          *(_QWORD *)(a1 + 112) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                     (_QWORD *)(a1 + 104),
                                     a1);
          *(_WORD *)(a1 + 8) = 0;
          winrt::immersive_shell_component::publish_services(
            *(winrt::immersive_shell_component **)(a1 + 88),
            *(struct IServiceProvider **)(a1 + 112),
            v10);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 72) = *std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                  (_QWORD *)(a1 + 64),
                                  a1);
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_after'::`2'::awaitable::await_suspend(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 72));
      }
      return;
    case 4:
      *(_DWORD *)(a1 + 128) = 0;
      goto LABEL_7;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 16);
      goto LABEL_14;
    default:
      __debugbreak();
      return;
  }
}

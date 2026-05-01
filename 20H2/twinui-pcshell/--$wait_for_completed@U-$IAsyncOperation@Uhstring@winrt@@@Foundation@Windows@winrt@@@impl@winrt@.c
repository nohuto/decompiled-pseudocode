/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18003E20C
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x1800984EC (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-AUhstr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     WINRT_WaitForSingleObject @ 0x18008DCC6 (WINRT_WaitForSingleObject.c)
 *     WINRT_CreateEventW @ 0x18008E5C4 (WINRT_CreateEventW.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___ @ 0x180097DDC (winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_--AsyncOperationComple.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801F4DB8 (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
DWORD __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(
        __int64 **a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  void *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  DWORD result; // eax
  HANDLE v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  EventW = WINRT_CreateEventW(0LL, 1, 0, 0LL);
  v4 = EventW;
  if ( !EventW )
    winrt::throw_last_error(v3);
  v10 = EventW;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___(
    &v11,
    &v10);
  v5 = *a1;
  v6 = **a1;
  v7 = v11;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 48))(v5, v11);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  result = WINRT_WaitForSingleObject(v4, 0xFFFFFFFF);
  if ( v7 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v11);
  return result;
}

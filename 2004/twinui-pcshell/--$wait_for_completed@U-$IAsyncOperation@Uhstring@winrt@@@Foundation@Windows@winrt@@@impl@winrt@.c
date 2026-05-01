/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x180066914
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x18009679C (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-AUhstr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     WINRT_WaitForSingleObject @ 0x18008E166 (WINRT_WaitForSingleObject.c)
 *     WINRT_CloseHandle @ 0x18008E1BA (WINRT_CloseHandle.c)
 *     WINRT_CreateEventW @ 0x18008EA64 (WINRT_CreateEventW.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801EBEF4 (-throw_last_error@winrt@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  winrt *v3; // rcx
  void *v4; // rbx
  _QWORD *v5; // rdi
  int v6; // eax
  HANDLE hObject; // [rsp+50h] [rbp+18h]
  _QWORD *v9; // [rsp+58h] [rbp+20h] BYREF

  EventW = WINRT_CreateEventW(0LL, 1, 0, 0LL);
  v4 = EventW;
  if ( !EventW )
    winrt::throw_last_error(v3);
  v9 = 0LL;
  hObject = EventW;
  v5 = operator new(0x18uLL);
  v5[1] = hObject;
  *((_DWORD *)v5 + 4) = 1;
  *v5 = off_18048FAB0;
  v9 = v5;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, v5);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  WINRT_WaitForSingleObject(v4, 0xFFFFFFFF);
  return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v9);
}

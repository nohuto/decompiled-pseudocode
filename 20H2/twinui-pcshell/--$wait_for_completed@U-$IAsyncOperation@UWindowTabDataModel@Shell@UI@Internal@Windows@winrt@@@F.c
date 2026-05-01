/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800C8370
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800C845C (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     WINRT_WaitForSingleObject @ 0x18008DCC6 (WINRT_WaitForSingleObject.c)
 *     WINRT_CloseHandle @ 0x18008DD1A (WINRT_CloseHandle.c)
 *     WINRT_CreateEventW @ 0x18008E5C4 (WINRT_CreateEventW.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x1801F15B8 (--$check_pointer@X@winrt@@YAPEAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  void *v3; // rdi
  _QWORD *v4; // rbx
  HANDLE v5; // rcx
  unsigned int v6; // eax
  HANDLE hObject; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+50h] [rbp+18h] BYREF
  HANDLE *p_hObject; // [rsp+58h] [rbp+20h]

  EventW = WINRT_CreateEventW(0LL, 1, 0, 0LL);
  v3 = (void *)winrt::check_pointer<void>(EventW);
  v9 = 0LL;
  hObject = v3;
  p_hObject = &hObject;
  v4 = operator new(0x18uLL);
  v5 = hObject;
  hObject = 0LL;
  v4[1] = v5;
  *((_DWORD *)v4 + 4) = 1;
  *v4 = off_180497060;
  v9 = v4;
  if ( hObject )
  {
    WINRT_CloseHandle(hObject);
    hObject = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, v4);
  winrt::check_hresult(v6);
  WINRT_WaitForSingleObject(v3, 0xFFFFFFFF);
  return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v9);
}

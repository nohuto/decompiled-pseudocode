/*
 * XREFs of ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x18043ECB8
 * Callers:
 *     ?Cancel@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18043EC60 (-Cancel@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ReleaseSRWLockExclusive_0 @ 0x18008D88A (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x18008D8AE (WINRT_AcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180427B58 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18043DFC0 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x18043E2FC (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Cancel(
        __int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v6 = 0LL;
  WINRT_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 2;
    winrt::hresult_error::hresult_error((__int64)v5, winrt::impl::error_canceled);
    v3 = std::make_exception_ptr<winrt::hresult_canceled>(v4, v5);
    __ExceptionPtrAssign((void *)(a1 + 32), v3);
    __ExceptionPtrDestroy(v4);
    winrt::Windows::Foundation::IUnknown::operator=(&v6, (__int64 *)(a1 + 64));
    v2 = v6;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 48));
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v6);
  }
}

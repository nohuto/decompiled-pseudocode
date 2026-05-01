/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x18043FCE0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x18008D88A (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x18008D8AE (WINRT_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x18043E354 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXXZ @ 0x180443418 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundati.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>>::GetResults(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  char v5; // di
  __int64 v7; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v4 = (RTL_SRWLOCK *)(v3 + 48);
  WINRT_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  if ( *(_DWORD *)(v3 + 72) != 1 )
  {
    try
    {
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::rethrow_if_failed();
      winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 80) = *winrt::to_hresult(&v10);
      return (unsigned int)v10;
    }
  }
  v5 = *(_BYTE *)(v3 + 80);
  ReleaseSRWLockExclusive_0(v4);
  *a2 = v5;
  return 0LL;
}

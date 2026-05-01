/*
 * XREFs of ?AddRef@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x1804629E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rcx
  unsigned int v3; // edx
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 8LL;
  v2 = *(_QWORD *)v1;
  while ( v2 >= 0 )
  {
    v3 = v2 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 1, v2);
    v4 = v2 == v5;
    v2 = v5;
    if ( v4 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}

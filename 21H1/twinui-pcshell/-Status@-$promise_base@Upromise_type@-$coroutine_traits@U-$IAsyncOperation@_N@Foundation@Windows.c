/*
 * XREFs of ?Status@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x180441A7C
 * Callers:
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUawaitable@?1??resume_background@2@YA@XZ@$$QEAU3?1??42@YA@XZ@@Z @ 0x18043D9E8 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Upromise_type@-.c)
 *     ?get_Status@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x180442A70 (-get_Status@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x18008D88A (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x18008D8AE (WINRT_AcquireSRWLockExclusive.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Status(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v2; // rdi

  v1 = a1 + 6;
  v2 = a1;
  WINRT_AcquireSRWLockExclusive(a1 + 6);
  LODWORD(v2) = v2[9].Ptr;
  ReleaseSRWLockExclusive_0(v1);
  return (unsigned int)v2;
}

/*
 * XREFs of ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x18043E478
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804434E4 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 * Callees:
 *     WINRT_AcquireSRWLockExclusive @ 0x18008D8AE (WINRT_AcquireSRWLockExclusive.c)
 */

winrt::slim_lock_guard *__fastcall winrt::slim_lock_guard::slim_lock_guard(
        winrt::slim_lock_guard *this,
        RTL_SRWLOCK *a2)
{
  *(_QWORD *)this = a2;
  WINRT_AcquireSRWLockExclusive(a2);
  return this;
}

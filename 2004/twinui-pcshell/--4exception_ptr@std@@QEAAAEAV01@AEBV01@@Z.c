/*
 * XREFs of ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802ED2E4
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180467354 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::exception_ptr::operator=(void *a1, const void *a2)
{
  __ExceptionPtrAssign(a1, a2);
  return a1;
}

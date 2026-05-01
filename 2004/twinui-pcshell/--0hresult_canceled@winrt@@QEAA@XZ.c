/*
 * XREFs of ??0hresult_canceled@winrt@@QEAA@XZ @ 0x180462178
 * Callers:
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUawaitable@?1??resume_background@2@YA@XZ@$$QEAU3?1??42@YA@XZ@@Z @ 0x180461888 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Upromise_type@-.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x18046219C (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_canceled *__fastcall winrt::hresult_canceled::hresult_canceled(winrt::hresult_canceled *this)
{
  winrt::hresult_error::hresult_error(this, winrt::impl::error_canceled);
  return this;
}

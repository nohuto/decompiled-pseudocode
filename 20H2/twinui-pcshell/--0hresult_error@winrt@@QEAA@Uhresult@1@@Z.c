/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1804619CC
 * Callers:
 *     ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x1800C90F0 (--0hresult_not_implemented@winrt@@QEAA@XZ.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1804619A8 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ @ 0x180461A00 (--0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x180461A24 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180462388 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801B2090 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, int a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate();
  return a1;
}

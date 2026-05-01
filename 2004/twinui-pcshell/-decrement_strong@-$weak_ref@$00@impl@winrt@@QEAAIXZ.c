/*
 * XREFs of ?decrement_strong@?$weak_ref@$00@impl@winrt@@QEAAIXZ @ 0x1804663C4
 * Callers:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1804672F0 (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Fou.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::decrement_strong(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v1;
}

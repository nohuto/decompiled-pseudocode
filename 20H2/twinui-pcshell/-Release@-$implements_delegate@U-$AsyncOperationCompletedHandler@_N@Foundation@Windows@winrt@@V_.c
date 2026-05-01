/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@V_lambda_9783efd0cf9a4011a5fefd366cc6ea27_@@@impl@winrt@@UEAAIXZ @ 0x180464B40
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,_lambda_9783efd0cf9a4011a5fefd366cc6ea27_>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)(a1 + 4);
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v3);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}

/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800669C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(char *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)(a1 + 16);
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v3);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}

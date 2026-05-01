/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801AE8F8
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     SysFreeString_0 @ 0x18008EA1C (SysFreeString_0.c)
 */

void __fastcall winrt::hresult_out_of_bounds::~hresult_out_of_bounds(BSTR *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 2);
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v2);
  if ( *this )
  {
    SysFreeString_0(*this);
    *this = 0LL;
  }
}

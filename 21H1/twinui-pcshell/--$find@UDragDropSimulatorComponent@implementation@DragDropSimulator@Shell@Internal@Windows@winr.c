/*
 * XREFs of ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@34@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x18043DAC8
 * Callers:
 *     ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@56@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x18043DB30 (--$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal_ea_18043DB30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value;
  if ( !v4 )
    v4 = v3[1] + 0x6FE1EF9A5528A564LL;
  v5 = 0LL;
  if ( !v4 )
    return (a1 + 24) & -(__int64)(a1 != 0);
  v7 = *v3 - winrt::impl::guid_storage<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::value;
  if ( *v3 == winrt::impl::guid_storage<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::value )
    v7 = v3[1] + 0x2DA8EDBFAEFAF75CLL;
  if ( !v7 )
    return (a1 + 88) & -(__int64)(a1 != 0);
  return v5;
}

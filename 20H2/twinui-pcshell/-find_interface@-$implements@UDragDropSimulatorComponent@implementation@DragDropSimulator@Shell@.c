/*
 * XREFs of ?find_interface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180465C80
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@56@@impl@winrt@@SAPEAXPEBUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x180461200 (--$find@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal_ea_180461200.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v4 = *a2 - winrt::impl::guid_storage<IObjectWithSite>::value;
  v3 = *a2 == winrt::impl::guid_storage<IObjectWithSite>::value;
  v6 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( v4 )
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::impl::iid_finder>(
             v2,
             &v6);
  return v2;
}

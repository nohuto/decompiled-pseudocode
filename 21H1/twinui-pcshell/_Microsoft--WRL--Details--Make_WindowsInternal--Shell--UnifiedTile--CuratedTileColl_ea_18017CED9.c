/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor$2 @ 0x18017CED9
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser__::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 104),
    *(struct IServiceProvider **)(a2 + 96),
    a3);
}

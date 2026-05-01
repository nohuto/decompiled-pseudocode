/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@UEAA@XZ @ 0x18014344C
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$0 @ 0x1801F775C (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$0.c)
 *     _KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider_::_1_::dtor$0 @ 0x180346873 (_KeyboardHosting--PositionAndSizeOptionsProvider--PositionAndSizeOptionsProvider_--_1_--dtor$0.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$0 @ 0x18041EB79 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$0 @ 0x18044561D (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--SelectionData.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

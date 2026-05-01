/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@UEAA@XZ @ 0x1801679CC
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$0 @ 0x18021A87C (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$0.c)
 *     _KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider_::_1_::dtor$0 @ 0x180367F13 (_KeyboardHosting--PositionAndSizeOptionsProvider--PositionAndSizeOptionsProvider_--_1_--dtor$0.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$0 @ 0x1804425C9 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$0 @ 0x18046948D (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--SelectionData.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

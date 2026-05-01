/*
 * XREFs of ??1?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@QEAA@XZ @ 0x18001C0C8
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$1 @ 0x180046955 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmCollectionChanged_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged_::_1_::dtor$3 @ 0x180046967 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnUtmColle_ea_180046967.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles_::_1_::dtor$0 @ 0x180046979 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_ProcessAddedOrRemovedTi.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::function<long (WindowsInternal::Shell::UnifiedTile::ICollectionTile *)>::~function<long (WindowsInternal::Shell::UnifiedTile::ICollectionTile *)>(
        _QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[7];
  if ( v2 )
  {
    if ( v2 != a1 )
      operator delete(v2, (const struct std::nothrow_t *)0x28);
    a1[7] = 0LL;
  }
}

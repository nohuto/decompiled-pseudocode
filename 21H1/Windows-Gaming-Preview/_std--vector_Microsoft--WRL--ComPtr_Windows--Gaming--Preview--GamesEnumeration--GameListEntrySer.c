/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&__::_1_::catch$0 @ 0x180046421
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@0@Z @ 0x18000DA18 (-_Destroy@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?deallocate@?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000DA5C (-deallocate@-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     _CxxThrowException_0 @ 0x180045508 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 120),
    *(__int64 **)(a2 + 48));
  std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}

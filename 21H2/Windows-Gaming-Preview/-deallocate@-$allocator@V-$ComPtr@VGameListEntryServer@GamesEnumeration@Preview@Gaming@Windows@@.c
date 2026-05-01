/*
 * XREFs of ?deallocate@?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@QEAAXQEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000DA5C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&__::_1_::catch$0 @ 0x180046611 (_std--vector_Microsoft--WRL--ComPtr_Windows--Gaming--Preview--GamesEnumeration--GameListEntrySer.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v4 = (const struct std::nothrow_t *)(8 * a3);
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      __debugbreak();
      JUMPOUT(0x18000DAA4LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, v4);
}

/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor$4 @ 0x1800D2A6F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 128));
}

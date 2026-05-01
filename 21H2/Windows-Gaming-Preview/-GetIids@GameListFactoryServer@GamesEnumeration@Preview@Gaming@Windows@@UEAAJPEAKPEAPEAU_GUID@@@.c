/*
 * XREFs of ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025580
 * Callers:
 *     ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024F10 (-GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJPEAKPEAPEAU_GUID.c)
 *     ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025290 (-GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJPEAKPEAPEAU_GUID.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::GetIids(
           this,
           a2,
           a3);
}

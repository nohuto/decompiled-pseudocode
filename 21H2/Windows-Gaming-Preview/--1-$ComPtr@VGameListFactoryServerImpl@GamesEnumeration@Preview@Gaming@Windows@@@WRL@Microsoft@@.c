/*
 * XREFs of ??1?$ComPtr@VGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001E0AC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180046931 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180046931.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800268C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800268C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(result);
  }
  return result;
}

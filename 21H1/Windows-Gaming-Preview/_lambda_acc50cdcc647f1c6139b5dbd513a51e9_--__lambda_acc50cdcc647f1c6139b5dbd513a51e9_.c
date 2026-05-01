/*
 * XREFs of _lambda_acc50cdcc647f1c6139b5dbd513a51e9_::__lambda_acc50cdcc647f1c6139b5dbd513a51e9_ @ 0x18002BCD4
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_acc50cdcc647f1c6139b5dbd513a51e9____::_1_::dtor$2 @ 0x180046D51 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Inter_ea_180046D51.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180012300.c)
 */

volatile signed __int64 *__fastcall lambda_acc50cdcc647f1c6139b5dbd513a51e9_::__lambda_acc50cdcc647f1c6139b5dbd513a51e9_(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}

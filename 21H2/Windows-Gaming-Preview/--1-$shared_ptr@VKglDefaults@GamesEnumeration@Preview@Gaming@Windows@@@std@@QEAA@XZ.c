/*
 * XREFs of ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18000F4D0
 * Callers:
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002A9D0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     __lambda_ad7bd321257e919ed278c75d322da1b6_::operator()_::_1_::dtor$9 @ 0x180046B54 (__lambda_ad7bd321257e919ed278c75d322da1b6_--operator()_--_1_--dtor$9.c)
 *     __lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()_::_1_::dtor$6 @ 0x180046BE4 (__lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x180046EA0 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180046EA0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer_::_1_::dtor$1 @ 0x180046F69 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GameModeC_ea_180046F69.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson_::_1_::dtor$0 @ 0x180047021 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetKglDefaultsAsJson_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues_::_1_::dtor$0 @ 0x180047147 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateValues_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile_::_1_::dtor$0 @ 0x180047159 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--GetDefaultGameModeProfile_--_1_--dt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}

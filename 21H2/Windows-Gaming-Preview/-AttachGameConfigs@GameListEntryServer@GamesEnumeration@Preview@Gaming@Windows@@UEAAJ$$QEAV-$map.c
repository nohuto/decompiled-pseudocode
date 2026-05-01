/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D750 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180029830 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CDBC (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18002E838 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180039584 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003AE00 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  __int64 *v12; // rdi
  char v13; // r13
  __int64 *j; // rbx
  int v15; // eax
  int v16; // esi
  __int64 **v17; // rax
  __int64 *i; // rax
  __int64 *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v22; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v23; // rbx
  int PropertyValues; // eax
  struct _GUID v25; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 8) )
  {
    v6 = -2147024809;
    v7 = 835LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 836LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = *(volatile signed __int64 **)(a1 + 256);
  if ( v11 && *(_QWORD *)(a1 + 264) )
  {
    v12 = *(__int64 **)a2;
    v13 = 1;
    j = (__int64 *)*v12;
    while ( j != v12 )
    {
      v25 = (struct _GUID)*((_OWORD *)j + 2);
      v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
              (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
              &v25,
              (const struct ExecutionModel::GameConfig **)j + 6,
              (__int64)a3);
      v10 = 0LL;
      v16 = v15;
      if ( v15 < 0 )
      {
        v20 = (unsigned int)v15;
        v21 = 862LL;
        goto LABEL_38;
      }
      v17 = (__int64 **)j[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v19 = *v17;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v19 + 25); v19 = (__int64 *)*v19 )
          j = v19;
      }
    }
    goto LABEL_40;
  }
  v13 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v11);
  }
  *(_QWORD *)(a1 + 256) = 0LL;
  v22 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v22 )
  {
    v16 = -2147024882;
    goto LABEL_37;
  }
  v23 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v22);
  std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
    (char *)v23 + 80,
    a2);
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((char *)v23 + 64, a3);
  PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v23);
  v16 = PropertyValues;
  if ( PropertyValues >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
  if ( v16 >= 0 )
  {
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)v23);
    *(_QWORD *)(a1 + 256) = v23;
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v23);
    v16 = 0;
  }
  else if ( v23 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v23);
  }
  if ( v16 < 0 )
  {
LABEL_37:
    v20 = (unsigned int)v16;
    v21 = 850LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v20);
    goto LABEL_41;
  }
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(a1 + 264, a3);
LABEL_40:
  LOBYTE(v10) = v13;
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
    (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
    v10);
  v16 = 0;
LABEL_41:
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v16;
}

/*
 * XREFs of ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029CA0
 * Callers:
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028308 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028A58 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003AE00 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::ExtractGameConfigsOwnership(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  _QWORD *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 *j; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v7 = *(_QWORD **)(a1 + 256);
  if ( !v7 || !*(_QWORD *)(a1 + 264) )
  {
    v8 = -2147467259;
    v9 = 917LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    v8 = -2147024891;
    v9 = 920LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v8;
  }
  if ( !v7[11] )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80004005LL);
    v9 = 924LL;
    goto LABEL_32;
  }
  v10 = (__int64 *)v7[10];
  j = (__int64 *)*v10;
  while ( j != v10 )
  {
    v12 = (__int64 *)v7[8];
    v13 = *v12;
    v24 = *((_OWORD *)j + 2);
    (*(void (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(v13 + 72))(
      v12,
      &v24,
      24LL,
      &word_1800515C0,
      2);
    v14 = (__int64 **)j[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v16 = *v14;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
        j = v16;
    }
  }
  std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
    a2,
    v7 + 10);
  v17 = v7[9];
  v18 = v7[8];
  v7[8] = 0LL;
  v7[9] = 0LL;
  v19 = (volatile signed __int32 *)a3[1];
  *a3 = v18;
  a3[1] = v17;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = *(volatile signed __int64 **)(a1 + 256);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v20);
  }
  v21 = *(_QWORD *)(a1 + 192);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 192) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( *(_QWORD *)(a1 + 232) && *(_QWORD *)(a1 + 216) )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(
      (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
      v22);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}

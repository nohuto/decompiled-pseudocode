/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180039584
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029900 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800389C4 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180016DDC (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180017490 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003912C (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800393D8 (-_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003A2A4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  int IsGameModeEnabled; // eax
  __int64 FirstGameConfig; // r15
  __int64 *v4; // r14
  __int64 v5; // rcx
  int RelatedProcessesFromGameConfigStore; // eax
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int NullableInt; // ebx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct _GUID v32; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v34; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+50h] BYREF

  IsGameModeEnabled = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadIsGameModeEnabled(this);
  if ( IsGameModeEnabled < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x167,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)IsGameModeEnabled);
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(FirstGameConfig + 16) + 32LL) & 0x100) == 0;
  v4 = (__int64 *)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v34 = 0LL;
  v32 = *(struct _GUID *)FirstGameConfig;
  RelatedProcessesFromGameConfigStore = GetRelatedProcessesFromGameConfigStore(
                                          *((_QWORD *)this + 8),
                                          (__int128 *)&v32,
                                          &v34);
  v7 = RelatedProcessesFromGameConfigStore;
  v8 = v34;
  if ( RelatedProcessesFromGameConfigStore >= 0 )
  {
    v10 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    RelatedProcessesFromGameConfigStore = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v8)(
                                            v8,
                                            &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
                                            (char *)this + 104);
    v7 = RelatedProcessesFromGameConfigStore;
    if ( RelatedProcessesFromGameConfigStore < 0 )
    {
      v9 = 370LL;
      goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v12 = *((_QWORD *)this + 8);
    LODWORD(v34) = 0;
    v36 = 4;
    v32 = *(struct _GUID *)FirstGameConfig;
    v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, __int64 *, unsigned int *))(*(_QWORD *)v12 + 64LL))(
            v12,
            &v32,
            19LL,
            &v34,
            &v36);
    NullableInt = v13;
    if ( v13 >= 0 )
    {
      v17 = BYTE3(v34);
      v16 = WORD1(v34);
      v15 = (unsigned int)v34 >> 8;
      NullableInt = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v13);
      LOBYTE(v15) = v34;
      LOBYTE(v16) = v34;
      LOBYTE(v17) = v34;
    }
    if ( (_WORD)NullableInt == 2 )
    {
      v18 = *((_QWORD *)this + 14);
      if ( v18 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = *((_QWORD *)this + 15);
      if ( v19 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = *((_QWORD *)this + 16);
      if ( v20 )
      {
        *((_QWORD *)this + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v28 = 386LL;
        goto LABEL_37;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v17,
                      (__int64 *)this + 14,
                      (unsigned __int8)v17);
      if ( NullableInt < 0 )
      {
        v28 = 387LL;
        goto LABEL_37;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v29,
                      (__int64 *)this + 15,
                      (unsigned __int8)v16);
      if ( NullableInt < 0 )
      {
        v28 = 388LL;
        goto LABEL_37;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v30,
                      (__int64 *)this + 16,
                      (unsigned __int8)v15);
      if ( NullableInt < 0 )
      {
        v28 = 389LL;
        goto LABEL_37;
      }
    }
    v35 = 0;
    v21 = *((_QWORD *)this + 8);
    LODWORD(v34) = 4;
    v32 = *(struct _GUID *)FirstGameConfig;
    v22 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *, __int64 *))(*(_QWORD *)v21 + 64LL))(
            v21,
            &v32,
            20LL,
            &v35,
            &v34);
    NullableInt = v22;
    if ( v22 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v22);
    if ( (_WORD)NullableInt == 2 )
    {
      v24 = *((_QWORD *)this + 17);
      if ( v24 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v28 = 400LL;
        goto LABEL_37;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v23,
                      (__int64 *)this + 17,
                      v35);
      if ( NullableInt < 0 )
      {
        v28 = 401LL;
        goto LABEL_37;
      }
    }
    v32 = *(struct _GUID *)FirstGameConfig;
    NullableInt = GetGameCpuMask(
                    *((struct ExecutionModel::IGameConfigStore **)this + 8),
                    &v32,
                    (unsigned int *)&v34,
                    &v36);
    if ( (_WORD)NullableInt == 2 )
    {
      v26 = *((_QWORD *)this + 18);
      if ( v26 )
      {
        *((_QWORD *)this + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = *((_QWORD *)this + 19);
      if ( v27 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      return 0LL;
    }
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v25,
                      (__int64 *)this + 18,
                      v34);
      if ( NullableInt >= 0 )
      {
        NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                        v31,
                        (__int64 *)this + 19,
                        v36);
        if ( NullableInt >= 0 )
          return 0LL;
        v28 = 416LL;
      }
      else
      {
        v28 = 415LL;
      }
    }
    else
    {
      v28 = 414LL;
    }
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v9 = 368LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)(unsigned int)RelatedProcessesFromGameConfigStore);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}

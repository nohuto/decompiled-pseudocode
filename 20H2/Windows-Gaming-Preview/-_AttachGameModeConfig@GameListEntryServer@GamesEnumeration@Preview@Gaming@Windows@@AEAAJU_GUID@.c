/*
 * XREFs of ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029900 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180029B60 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016988 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x180016C70 (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180029028 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002A6E4 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A7E4 (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002BEC0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CDBC (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002CF34 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180038AC0 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180038FAC (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800392C0 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180039584 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x18003B2D4 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_d.c)
 *     ??2@YAPEAX_K@Z @ 0x180044B4C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig **a3,
        __int64 a4)
{
  const struct ExecutionModel::GameConfig *v6; // rbx
  HSTRING *v7; // r15
  __int64 v8; // rdx
  int PackageFamilyName; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v12; // r12
  __int64 **v13; // r15
  _QWORD *v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  int GamesListProperties; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  HSTRING v23; // rbx
  int LaunchParameters; // eax
  struct Windows::Storage::IStorageFile **v25; // r12
  int StringPropertyFromGameConfigStore; // eax
  int v27; // eax
  HSTRING v28; // rcx
  struct Windows::Storage::IStorageFile *v29; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  volatile signed __int64 **v32; // rdi
  int v33; // eax
  __int64 *v34; // rcx
  int v35; // eax
  wil::details::in1diag3 *v36; // rcx
  __int64 v37; // rdx
  struct Windows::Storage::IStorageFile *v38; // rcx
  int v39; // eax
  wil::details::in1diag3 *v40; // rcx
  __int64 v41; // rdx
  HSTRING v42; // rdi
  HSTRING v43; // rcx
  __int64 *v44; // rcx
  int v45; // eax
  wil::details::in1diag3 *v46; // rcx
  __int64 v47; // rdx
  volatile signed __int64 *v48; // r15
  __int64 v49; // rdi
  struct _GUID *v50; // rax
  const struct ExecutionModel::GameConfig *v51; // rdx
  int PropertyValues; // eax
  __int64 v53; // r9
  __int64 v54; // rdx
  volatile signed __int64 *v55; // rcx
  int v56; // eax
  char v57; // [rsp+30h] [rbp-50h]
  HSTRING v58; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v60; // [rsp+50h] [rbp-30h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v61; // [rsp+60h] [rbp-20h]
  struct _GUID v62; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v65; // [rsp+D8h] [rbp+58h]

  v65 = a4;
  v6 = *a3;
  v7 = (HSTRING *)((char *)this + 160);
  v57 = 1;
  if ( *((_DWORD *)*a3 + 5) != 2 )
  {
    if ( *v7 )
    {
      v8 = 645LL;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  if ( !*v7 )
  {
    v8 = 629LL;
LABEL_18:
    v10 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    goto LABEL_19;
  }
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  PackageFamilyName = GetPackageFamilyName(v6, string);
  if ( PackageFamilyName < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x27A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)PackageFamilyName);
  if ( string[0] )
  {
    if ( !Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(v7, string, 1u) )
    {
      v10 = -2147024891;
      v11 = 641LL;
      goto LABEL_8;
    }
    WindowsDeleteString(string[0]);
    a4 = v65;
LABEL_12:
    v12 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)((char *)this + 280);
    v61 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)((char *)this + 280);
    v13 = (__int64 **)((char *)this + 288);
    if ( *((_QWORD *)this + 35) && *v13 )
    {
      v60 = *a2;
      if ( Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(*v12, &v60) )
        return 0LL;
    }
    else
    {
      v57 = 0;
      std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((char *)this + 288, a4);
    }
    v15 = (_QWORD *)((char *)this + 152);
    v60 = *a2;
    if ( *((_QWORD *)this + 19) )
    {
      v16 = SetStringPropertyToGameConfigStore(*v13, (__int128 *)&v60, 0xFu, (HSTRING *)this + 19);
      v17 = retaddr;
      if ( v16 >= 0 )
        goto LABEL_39;
      v18 = 679LL;
      goto LABEL_38;
    }
    WindowsDeleteString(0LL);
    *v15 = 0LL;
    if ( (int)GetStringPropertyFromGameConfigStore((__int64)*v13, (__int128 *)&v60, 15LL, (HSTRING *)this + 19) < 0
      || !*v15 )
    {
LABEL_39:
      v23 = 0LL;
      *(_QWORD *)&v60.Data1 = 0LL;
      if ( v57 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v60.Data1 = 0LL;
        LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 16),
                             (HSTRING *)&v60);
        if ( LaunchParameters < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)LaunchParameters);
        v23 = *(HSTRING *)&v60.Data1;
      }
      v25 = (struct Windows::Storage::IStorageFile **)((char *)this + 304);
      if ( !*((_QWORD *)this + 38) && !v23 )
      {
        if ( v57 )
        {
          string[0] = 0LL;
          v62 = *a2;
          WindowsDeleteString(0LL);
          string[0] = 0LL;
          StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                                (__int64)*v13,
                                                (__int128 *)&v62,
                                                25LL,
                                                string);
          v10 = StringPropertyFromGameConfigStore;
          if ( StringPropertyFromGameConfigStore < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2FF,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_50:
            WindowsDeleteString(string[0]);
LABEL_91:
            WindowsDeleteString(v23);
            return v10;
          }
          v58 = 0LL;
          v62 = *a2;
          WindowsDeleteString(0LL);
          v58 = 0LL;
          v27 = GetStringPropertyFromGameConfigStore((__int64)*v13, (__int128 *)&v62, 26LL, &v58);
          v10 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x306,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v27);
            WindowsDeleteString(v58);
            v58 = 0LL;
            goto LABEL_50;
          }
          v28 = string[0];
          if ( string[0] || v58 )
          {
            v29 = *v25;
            if ( *v25 )
            {
              *v25 = 0LL;
              (*(void (__fastcall **)(struct Windows::Storage::IStorageFile *))(*(_QWORD *)v29 + 16LL))(v29);
              v28 = string[0];
            }
            if ( v28 )
            {
              StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
              StorageFileForFilePath = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
                                         StringRawBuffer,
                                         v25);
              if ( StorageFileForFilePath < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x30E,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  (const char *)(unsigned int)StorageFileForFilePath);
            }
            v32 = (volatile signed __int64 **)v61;
            v33 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
                    *v61,
                    (const struct Microsoft::WRL::Wrappers::HString *)string,
                    (const struct Microsoft::WRL::Wrappers::HString *)&v58);
            if ( v33 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x311,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v33);
          }
          else
          {
            v32 = (volatile signed __int64 **)v61;
          }
          WindowsDeleteString(v58);
          v58 = 0LL;
          WindowsDeleteString(string[0]);
LABEL_84:
          if ( v57 )
          {
            v62 = *a2;
            v48 = *v32;
            if ( *(_OWORD *)&v62 != 0LL && *a3 && *((_QWORD *)v48 + 11) )
            {
              v49 = *((_QWORD *)v48 + 10);
              v62 = (struct _GUID)(unsigned __int64)(v48 + 10);
              v50 = (struct _GUID *)operator new(0x38uLL);
              v50[2] = *a2;
              v51 = *a3;
              *a3 = 0LL;
              *(_QWORD *)&v50[3].Data1 = v51;
              *(_QWORD *)&v50->Data1 = v49;
              *(_QWORD *)v50->Data4 = v49;
              *(_QWORD *)&v50[1].Data1 = v49;
              *(_WORD *)v50[1].Data4 = 0;
              std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_nohint<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
                v48 + 10,
                &v62);
              PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v48);
              if ( PropertyValues < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x52,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                  (const char *)(unsigned int)PropertyValues);
LABEL_90:
              v10 = 0;
              goto LABEL_91;
            }
            v10 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
              (const char *)0x80070057LL);
            v53 = 2147942487LL;
            v54 = 793LL;
          }
          else
          {
            v55 = *v32;
            if ( *v32 )
            {
              *v32 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v55);
            }
            v56 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
                    v32,
                    a2,
                    a3,
                    v65);
            v10 = v56;
            if ( v56 >= 0 )
              goto LABEL_90;
            v53 = (unsigned int)v56;
            v54 = 801LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v54,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)v53);
          goto LABEL_91;
        }
LABEL_83:
        v32 = (volatile signed __int64 **)v61;
        goto LABEL_84;
      }
      v34 = *v13;
      v62 = *a2;
      if ( v23 )
      {
        v35 = SetStringPropertyToGameConfigStore(v34, (__int128 *)&v62, 0x1Au, (HSTRING *)&v60);
        v36 = retaddr;
        if ( v35 >= 0 )
          goto LABEL_68;
        v37 = 722LL;
      }
      else
      {
        v35 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v34 + 72))(
                v34,
                &v62,
                26LL,
                &word_1800515C0,
                2);
        v36 = retaddr;
        if ( v35 >= 0 )
          goto LABEL_68;
        v37 = 729LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v36,
        (void *)v37,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v35);
LABEL_68:
      string[0] = 0LL;
      v38 = *v25;
      if ( !*v25 )
        goto LABEL_76;
      v58 = 0LL;
      v39 = (**(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, HSTRING *))v38)(
              v38,
              &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
              &v58);
      v40 = retaddr;
      if ( v39 >= 0 )
      {
        v42 = v58;
        WindowsDeleteString(string[0]);
        string[0] = 0LL;
        v39 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v42 + 96LL))(v42, string);
        v40 = retaddr;
        if ( v39 >= 0 )
          goto LABEL_74;
        v41 = 738LL;
      }
      else
      {
        v41 = 736LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v40,
        (void *)v41,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v39);
LABEL_74:
      v43 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16LL))(v43);
      }
LABEL_76:
      v44 = *v13;
      v62 = *a2;
      if ( string[0] )
      {
        v45 = SetStringPropertyToGameConfigStore(v44, (__int128 *)&v62, 0x19u, string);
        v46 = retaddr;
        if ( v45 < 0 )
        {
          v47 = 748LL;
LABEL_81:
          wil::details::in1diag3::_Log_Hr(
            v46,
            (void *)v47,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v45);
        }
      }
      else
      {
        v45 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v44 + 72))(
                v44,
                &v62,
                25LL,
                &word_1800515C0,
                2);
        v46 = retaddr;
        if ( v45 < 0 )
        {
          v47 = 756LL;
          goto LABEL_81;
        }
      }
      WindowsDeleteString(string[0]);
      goto LABEL_83;
    }
    if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
    {
LABEL_35:
      if ( v57 )
      {
        v16 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
                *v12,
                15LL,
                (char *)this + 152);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 702LL;
LABEL_38:
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v18,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_39;
        }
      }
      goto LABEL_39;
    }
    *(_QWORD *)&v60.Data1 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            (struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)&v60);
    v20 = retaddr;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v60.Data1 + 72LL))(
                              *(_QWORD *)&v60.Data1,
                              *v15);
      v20 = retaddr;
      if ( GamesListProperties >= 0 )
        goto LABEL_33;
      v21 = 696LL;
    }
    else
    {
      v21 = 694LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v21,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_33:
    v22 = *(_QWORD *)&v60.Data1;
    if ( *(_QWORD *)&v60.Data1 )
    {
      *(_QWORD *)&v60.Data1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_35;
  }
  v10 = -2147024809;
  v11 = 636LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  WindowsDeleteString(string[0]);
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  return v10;
}

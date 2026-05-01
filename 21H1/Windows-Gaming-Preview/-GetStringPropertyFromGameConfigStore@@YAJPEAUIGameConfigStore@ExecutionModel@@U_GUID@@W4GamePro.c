/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000B2B0 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028468 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028A58 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028D74 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_a3795b8e063e319a63f5a3b15bc55068_::operator() @ 0x18002A1A8 (_lambda_a3795b8e063e319a63f5a3b15bc55068_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002BD00 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002BEC0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180038B8C (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800393D8 (-_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001AA84 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rdx
  HRESULT String; // ebx
  const char *v11; // r9
  __int64 v12; // rdx
  WCHAR *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  unsigned int v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 203LL;
LABEL_3:
    String = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  if ( !a4 )
  {
    v8 = 204LL;
    goto LABEL_3;
  }
  v20 = 0;
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
             a1,
             &v16,
             a3,
             0LL,
             &v20);
  if ( (_WORD)String == 2 )
    return 0LL;
  if ( String < 0 )
  {
    v8 = 218LL;
    goto LABEL_4;
  }
  sourceString = 0LL;
  v18 = 0LL;
  if ( v20 )
  {
    try
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(&sourceString);
      v11 = (const char *)sourceString;
    }
    catch ( ... )
    {
      v15 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xE3,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              v11);
      v13 = (WCHAR *)sourceString;
      if ( !sourceString )
        return v15;
      v14 = (const struct std::nothrow_t *)(*((_QWORD *)&v18 + 1) - (_QWORD)sourceString);
      if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString >= 0x1000uLL )
      {
        v14 = (const struct std::nothrow_t *)((char *)v14 + 39);
        v13 = (WCHAR *)*((_QWORD *)sourceString - 1);
        if ( (unsigned __int64)((char *)sourceString - (char *)v13 - 8) > 0x1F )
          goto LABEL_28;
      }
LABEL_29:
      operator delete(v13, v14);
      return v15;
    }
  }
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, &v16, v5);
  if ( String >= 0 )
  {
    String = WindowsCreateString(sourceString, (unsigned int)v20 >> 1, a4);
    if ( String >= 0 )
    {
      v13 = (WCHAR *)sourceString;
      if ( sourceString )
      {
        v14 = (const struct std::nothrow_t *)(*((_QWORD *)&v18 + 1) - (_QWORD)sourceString);
        if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString >= 0x1000uLL )
        {
          v14 = (const struct std::nothrow_t *)((char *)v14 + 39);
          v13 = (WCHAR *)*((_QWORD *)sourceString - 1);
          if ( (unsigned __int64)((char *)sourceString - (char *)v13 - 8) > 0x1F )
          {
LABEL_28:
            _o__invalid_parameter_noinfo_noreturn(v13, v14);
            __debugbreak();
            goto LABEL_29;
          }
        }
        operator delete(v13, v14);
      }
      return 0LL;
    }
    v12 = 232LL;
  }
  else
  {
    v12 = 229LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)String);
  v13 = (WCHAR *)sourceString;
  if ( !sourceString )
    return (unsigned int)String;
  v14 = (const struct std::nothrow_t *)(*((_QWORD *)&v18 + 1) - (_QWORD)sourceString);
  if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString < 0x1000uLL
    || (v14 = (const struct std::nothrow_t *)((char *)v14 + 39),
        v13 = (WCHAR *)*((_QWORD *)sourceString - 1),
        (unsigned __int64)((char *)sourceString - (char *)v13 - 8) <= 0x1F) )
  {
    operator delete(v13, v14);
    return (unsigned int)String;
  }
  goto LABEL_28;
}

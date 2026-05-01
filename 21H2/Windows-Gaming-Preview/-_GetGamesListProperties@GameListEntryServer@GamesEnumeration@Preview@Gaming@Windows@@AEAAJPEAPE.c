/*
 * XREFs of ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002A6E4
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028308 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028468 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_2d796ec39c4cc1ad3399d6c724543242_::operator() @ 0x18002C6A0 (_lambda_2d796ec39c4cc1ad3399d6c724543242_--operator().c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_acc50cdcc647f1c6139b5dbd513a51e9__Windows::Internal::CNoResult_::Run @ 0x1800315D0 (Windows--Internal--COperationLambdaVar_0__lambda_acc50cdcc647f1c6139b5dbd513a51e9__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **); // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 34);
  if ( !v4 )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8007139FLL);
    return (unsigned int)v5;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, *((_QWORD *)this + 30), &v11);
  if ( v5 < 0 )
  {
    v7 = 1073LL;
    goto LABEL_6;
  }
  v5 = (**v11)(v11, &GUID_84dabb6f_6903_4f45_b2cc_30d23eb63ca9, a2);
  if ( v5 < 0 )
  {
    v7 = 1074LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)))(*v8)[2])(v8);
    }
    return (unsigned int)v5;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSGamesListTileProperties **)))(*v9)[2])(v9);
  }
  return 0LL;
}

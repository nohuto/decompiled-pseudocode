/*
 * XREFs of ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028B84
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800275EC (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010C60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180010C60.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____lambda_f23a13fd883c5047f169eb01f235cefa___ @ 0x18002CFF8 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_WindowsIntern_ea_18002CFF8.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeListener(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h]

  if ( !*((_QWORD *)this + 32) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  v3 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v4 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::QueryInterface(
         (__int64)this,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v13);
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v6 = v13;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v13 + 24))(v13, &v12);
    v7 = v12;
    if ( v4 >= 0 )
    {
      v3 = v12;
      if ( v12 )
      {
        (*(void (**)(void))(*(_QWORD *)v12 + 8LL))();
        v7 = v12;
      }
      v14 = v3;
      if ( v7 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      v4 = 0;
      goto LABEL_16;
    }
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v5 = *v6;
    goto LABEL_6;
  }
  if ( v13 )
  {
    v5 = *v13;
LABEL_6:
    (*(void (**)(void))(v5 + 16))();
  }
LABEL_16:
  if ( v4 >= 0 )
  {
    v10[0] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v10[1] = this;
    wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____lambda_f23a13fd883c5047f169eb01f235cefa___(
      &v12,
      v10);
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    v8 = v12;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 32) + 152LL))(
           *((_QWORD *)this + 32),
           v12,
           (char *)this + 264);
    v4 = v9;
    if ( v9 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v9);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}

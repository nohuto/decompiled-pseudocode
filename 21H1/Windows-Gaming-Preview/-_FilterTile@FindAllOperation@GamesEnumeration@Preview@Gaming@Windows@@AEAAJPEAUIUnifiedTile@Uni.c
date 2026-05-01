/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A934
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@567@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000CE88 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CF54 (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000D0E8 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011EE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180011EE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180012300.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002C480 (-get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2)
{
  _WORD *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING v7; // rcx
  HSTRING v9; // rbx
  int v10; // eax
  const WCHAR *StringRawBuffer; // rax
  PWSTR v12; // rax
  HSTRING v13; // rcx
  _WORD *v14; // rax
  int v15; // eax
  HSTRING v16; // rbx
  int v17; // eax
  PCWSTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // r8
  int v23; // eax
  HSTRING v24; // rcx
  HSTRING v25; // rcx
  int v26; // eax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rbx
  int v43; // eax
  unsigned int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-78h]
  HSTRING string; // [rsp+30h] [rbp-68h] BYREF
  __int64 v52; // [rsp+38h] [rbp-60h] BYREF
  __int64 v53; // [rsp+40h] [rbp-58h] BYREF
  HSTRING v54[2]; // [rsp+48h] [rbp-50h] BYREF
  int v55[16]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 length; // [rsp+A0h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v58; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v59; // [rsp+B0h] [rbp+18h] BYREF
  HSTRING v60; // [rsp+B8h] [rbp+20h] BYREF

  v58 = a2;
  v4 = (_WORD *)*((_QWORD *)this + 11);
  if ( v4 && *v4 )
  {
    v60 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, HSTRING *))(*(_QWORD *)a2 + 96LL))(
           a2,
           &v60);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v5);
LABEL_5:
      v7 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v7 + 16LL))(v7);
      }
      return v6;
    }
    v9 = v60;
    if ( v60 )
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      v10 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v9 + 56LL))(v9, &string);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAA,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v10);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_5;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
      v12 = StrStrNW(StringRawBuffer, *((PCWSTR *)this + 11), length);
      v13 = string;
      if ( v12 )
        goto LABEL_33;
LABEL_31:
      WindowsDeleteString(v13);
      string = 0LL;
      v24 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    return 0LL;
  }
  v14 = (_WORD *)*((_QWORD *)this + 8);
  if ( !v14 || !*v14 )
    goto LABEL_35;
  v60 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, HSTRING *))(*(_QWORD *)a2 + 104LL))(
          a2,
          &v60);
  v6 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_5;
  }
  v16 = v60;
  if ( !v60 )
    return 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, &string);
  v6 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v17);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_5;
  }
  v18 = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
  v19 = *((_QWORD *)this + 9);
  if ( v19 == -1 )
  {
    v20 = *((_QWORD *)this + 8);
    if ( v20 )
    {
      do
        ++v19;
      while ( *(_WORD *)(v20 + 2 * v19) );
    }
    else
    {
      LODWORD(v19) = 0;
    }
  }
  v21 = &word_1800515C0;
  v22 = &word_1800515C0;
  if ( v18 )
    v22 = v18;
  if ( *((_QWORD *)this + 8) )
    v21 = (const WCHAR *)*((_QWORD *)this + 8);
  v23 = CompareStringOrdinal(v21, v19, v22, v18 != 0LL ? length : 0, 1);
  v13 = string;
  if ( v23 != 2 )
    goto LABEL_31;
LABEL_33:
  WindowsDeleteString(v13);
  string = 0LL;
  v25 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_35:
  v59 = 0LL;
  length = *((_QWORD *)this + 26);
  v60 = (HSTRING)*((_QWORD *)this + 14);
  v26 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &,WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
          &v59,
          &v58,
          &v60,
          &length);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v26,
      bIgnoreCase);
LABEL_87:
    if ( v59 )
    {
      v59 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return 0LL;
  }
  v27 = (_QWORD *)*((_QWORD *)this + 16);
  if ( *((_QWORD **)this + 17) == v27 )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
      (char *)this + 120,
      v27,
      &v59);
  }
  else
  {
    v28 = v59;
    *v27 = v59;
    if ( v28 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef();
    *((_QWORD *)this + 16) += 8LL;
  }
  length = 0LL;
  v29 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &length);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v29);
    v31 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( v59 )
    {
      v59 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return v30;
  }
  v60 = 0LL;
  v32 = length;
  WindowsDeleteString(0LL);
  v60 = 0LL;
  v33 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 56LL))(v32, &v60);
  v34 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v33);
    WindowsDeleteString(v60);
    v60 = 0LL;
    v35 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    if ( v59 )
    {
      v59 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
    }
    return v34;
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
    (_DWORD)this + 144,
    (int)v54);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_TitleId(
         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v59 + 16),
         &string) >= 0
    && string )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (_DWORD)this + 160,
      (int)v54);
  }
  v52 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a2 + 104LL))(
         a2,
         &v52) >= 0 )
  {
    v36 = v52;
    if ( v52 )
    {
      v54[0] = 0LL;
      WindowsDeleteString(0LL);
      v54[0] = 0LL;
      v37 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 48LL))(v36, v54);
      v38 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE4,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v37);
        WindowsDeleteString(v54[0]);
        v54[0] = 0LL;
        v39 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v60);
        v60 = 0LL;
        v40 = length;
        if ( length )
        {
          length = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        }
        if ( v59 )
        {
          v59 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
        }
        return v38;
      }
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        (_DWORD)this + 176,
        (int)v55);
      WindowsDeleteString(v54[0]);
    }
  }
  v53 = 0LL;
  v41 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)a2 + 96LL))(
          a2,
          &v53);
  v42 = v53;
  if ( v41 < 0 || !v53 )
  {
LABEL_81:
    if ( v42 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v48 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v60);
    v60 = 0LL;
    v49 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    goto LABEL_87;
  }
  v54[0] = 0LL;
  WindowsDeleteString(0LL);
  v54[0] = 0LL;
  v43 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 56LL))(v42, v54);
  v44 = v43;
  if ( v43 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (_DWORD)this + 192,
      (int)v55);
    WindowsDeleteString(v54[0]);
    v42 = v53;
    goto LABEL_81;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xED,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)(unsigned int)v43);
  WindowsDeleteString(v54[0]);
  v54[0] = 0LL;
  v45 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v60);
  v60 = 0LL;
  v47 = length;
  if ( length )
  {
    length = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  if ( v59 )
  {
    v59 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
  }
  return v44;
}

/*
 * XREFs of ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A7E4
 * Callers:
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028A58 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025E38 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800350C4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
        const unsigned __int16 *a1,
        struct Windows::Storage::IStorageFile **a2)
{
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rbx
  HSTRING_HEADER *v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  struct Windows::Storage::IStorageFile *v9; // rcx
  struct Windows::Storage::IStorageFile *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-29h] BYREF
  struct Windows::Storage::IStorageFile *v15; // [rsp+28h] [rbp-21h] BYREF
  __int64 v16; // [rsp+30h] [rbp-19h] BYREF
  const WCHAR *v17; // [rsp+38h] [rbp-11h] BYREF
  HSTRING string; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  HSTRING_HEADER v20; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v17 = a1;
  if ( WindowsCreateStringReference(L"Windows.Storage.StorageFile", 0x1Bu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v16 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_5984c710_daf2_43c8_8bb4_a4d3eacfd03f, &v16);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v5 = v16;
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v17);
    v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           v6[1].Reserved.Reserved1,
           &v14);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v15 = 0LL;
      v8 = v14;
      v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>(v14);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::IStorageFile **))(*(_QWORD *)v8 + 64LL))(
               v8,
               &v15);
      if ( v4 >= 0 )
      {
        v10 = v15;
        v9 = 0LL;
        v15 = 0LL;
        *a2 = v10;
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x445,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v4);
        v9 = v15;
      }
      if ( v9 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(struct Windows::Storage::IStorageFile *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x442,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}

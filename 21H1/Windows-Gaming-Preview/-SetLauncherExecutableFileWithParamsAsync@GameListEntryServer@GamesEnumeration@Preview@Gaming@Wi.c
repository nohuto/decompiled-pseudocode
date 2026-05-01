/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002C010
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002BFF0 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011EE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180011EE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180012300.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800311D8 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800449A0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 (__fastcall ***a2)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *),
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v9; // esi
  __int64 (__fastcall **v10)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  HSTRING v18; // rsi
  HSTRING v19; // r12
  volatile signed __int64 *v20; // r15
  char *v21; // rax
  __int64 v22; // r8
  char *v23; // rdi
  volatile signed __int64 *v24; // r14
  char *v25; // rax
  __int64 v26; // rcx
  HSTRING v27; // rdi
  HSTRING v28; // rdi
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  int v32; // [rsp+48h] [rbp-38h]
  HSTRING v33; // [rsp+50h] [rbp-30h]
  HSTRING v34; // [rsp+58h] [rbp-28h]
  char v35; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  UINT32 length; // [rsp+B0h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 30) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DA,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      v10 = *a2;
      v31 = 0LL;
      v11 = (*v10)((struct Windows::Storage::IStorageFile *)a2, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v31);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = (unsigned int)v11;
        v13 = 1507LL;
        goto LABEL_23;
      }
      v14 = v31;
      WindowsDeleteString(string);
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
      v9 = v15;
      if ( v15 < 0 )
      {
        v12 = (unsigned int)v15;
        v13 = 1508LL;
        goto LABEL_23;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        v13 = 1512LL;
        v12 = 2147942487LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v12);
        v26 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
LABEL_33:
        WindowsDeleteString(string);
        return v9;
      }
      v16 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v17 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)this - 16);
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v18 = string;
    v19 = newString;
    string = 0LL;
    newString = 0LL;
    v20 = (volatile signed __int64 *)((char *)this - 16);
    v33 = v18;
    v34 = v19;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)this - 16);
      v18 = v33;
      v19 = v34;
    }
    v32 = 0;
    v31 = 0x8000000003LL;
    v21 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v21;
    v24 = v17;
    if ( v21 )
    {
      *((_QWORD *)v21 + 1) = v17;
      v25 = v21 + 16;
      *(_QWORD *)v25 = 0LL;
      if ( v25 != &v35 )
      {
        v20 = 0LL;
        *(_QWORD *)v25 = v17;
        v24 = 0LL;
      }
      *((_QWORD *)v23 + 3) = v18;
      *((_QWORD *)v23 + 4) = v19;
      *((_DWORD *)v23 + 10) = 0;
      *(_QWORD *)v23 = &off_18004D150;
      `eh vector constructor iterator'(
        v23 + 48,
        8uLL,
        1uLL,
        (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
        (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
      *((_DWORD *)v23 + 10) = 0;
    }
    else
    {
      v23 = 0LL;
    }
    v9 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           &v31,
           a4,
           v22,
           v23);
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v20);
    if ( (v9 & 0x80000000) == 0 )
    {
      v28 = newString;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x612,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v9);
      v27 = v33;
      WindowsDeleteString(string);
      string = v27;
      v28 = v34;
      WindowsDeleteString(newString);
      newString = v28;
    }
    WindowsDeleteString(v28);
    newString = 0LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    goto LABEL_33;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5DD,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x80070057LL);
  return v9;
}

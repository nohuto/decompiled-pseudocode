/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_ad7bd321257e919ed278c75d322da1b6___ @ 0x18001E940
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001CDE0 (-MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??0?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x1800242D4 (--0-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800449A0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_ad7bd321257e919ed278c75d322da1b6___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  _QWORD *v9; // rbx
  int v10; // edi
  void *v11; // rax
  __int64 v12; // rbx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    v7[1] = 0LL;
    if ( v7 + 1 != a4 )
    {
      v7[1] = *a4;
      *a4 = 0LL;
    }
    v8 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != a4 + 1 )
    {
      v7[2] = *v8;
      *v8 = 0LL;
    }
    v9 = a4 + 2;
    v7[3] = 0LL;
    if ( v7 + 3 != v9 )
    {
      v7[3] = *v9;
      *v9 = 0LL;
    }
    *v7 = &off_18004ADC8;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v7 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  if ( !v7 )
    return (unsigned int)-2147024882;
  v11 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v11 )
    v12 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            v11,
            a1,
            L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
            0LL);
  if ( !v12 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v12 + 256) = v7;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 104LL))(v12 + 8);
  if ( v10 >= 0 )
  {
    *a2 = v12 + 176;
    v12 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 16LL))(v12 + 8);
  return (unsigned int)v10;
}

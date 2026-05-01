/*
 * XREFs of ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001CDE0
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001B500 (-MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180018580 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAU.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_ad7bd321257e919ed278c75d322da1b6___ @ 0x18001E940 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800268C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800268C0.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::MergeEntriesAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ebp
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v8 = 493LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v8 = 494LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 495LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  (*(void (__fastcall **)(__int64 *))(*a3 + 8))(a3);
  v10 = a1 - 16;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef(v10);
  v11 = *a2;
  v16 = a2;
  (*(void (__fastcall **)(__int64 *))(v11 + 8))(a2);
  v12 = *a3;
  v17 = a3;
  (*(void (__fastcall **)(__int64 *))(v12 + 8))(a3);
  v18 = v10;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef(v10);
  v15[2] = 0;
  v15[0] = 3;
  v15[1] = 128;
  v14 = ((__int64 (__fastcall *)(int *, __int64, __int64, __int64 **))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_ad7bd321257e919ed278c75d322da1b6___)(
          v15,
          a4,
          v13,
          &v16);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v14);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v10);
  (*(void (__fastcall **)(__int64 *))(*a3 + 16))(a3);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v14;
}

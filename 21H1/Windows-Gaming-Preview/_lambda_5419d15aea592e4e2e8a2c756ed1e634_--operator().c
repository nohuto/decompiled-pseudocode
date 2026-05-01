/*
 * XREFs of _lambda_5419d15aea592e4e2e8a2c756ed1e634_::operator() @ 0x18001C86C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x18001F8D0 (Windows--Internal--COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009DBC (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009FF4 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D750 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtm.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180011C20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001E008 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180026970.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004495C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_5419d15aea592e4e2e8a2c756ed1e634_::operator()(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r15
  __int64 v4; // r14
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v5; // r12
  _QWORD *v6; // rax
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int Results; // eax
  _QWORD *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v17; // [rsp+70h] [rbp+40h]
  _QWORD *v18; // [rsp+80h] [rbp+50h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v19; // [rsp+88h] [rbp+58h]

  v17 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager **)(*a1 + 56LL);
  v6 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v6;
  v18 = v6;
  v19 = (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_16;
  }
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
  *((_QWORD *)v7 + 7) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *((_QWORD *)v7 + 1) = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 2) = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  *((_QWORD *)v7 + 15) = 0LL;
  *((_QWORD *)v7 + 16) = 0LL;
  *((_QWORD *)v7 + 17) = 0LL;
  *((_QWORD *)v7 + 18) = 0LL;
  *((_QWORD *)v7 + 19) = 0LL;
  v9 = operator new(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *((_QWORD *)v7 + 18) = v9;
  *((_QWORD *)v7 + 20) = 0LL;
  *((_QWORD *)v7 + 21) = 0LL;
  v10 = operator new(0x30uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *((_QWORD *)v7 + 20) = v10;
  *((_QWORD *)v7 + 22) = 0LL;
  *((_QWORD *)v7 + 23) = 0LL;
  v11 = operator new(0x30uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  *((_QWORD *)v7 + 22) = v11;
  *((_QWORD *)v7 + 24) = 0LL;
  *((_QWORD *)v7 + 25) = 0LL;
  v12 = operator new(0x30uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  *((_QWORD *)v7 + 24) = v12;
  *((_QWORD *)v7 + 26) = 0LL;
  *((_QWORD *)v7 + 27) = 0LL;
  *((_QWORD *)v7 + 28) = 0LL;
  v19 = v7;
  v18 = 0LL;
  v8 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
         v7,
         v5,
         (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((v4 + 8) & -(__int64)(v4 != 0)),
         v3);
  if ( v8 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)v7);
    v17 = (__int64)v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
    v8 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v8 < 0 )
    goto LABEL_9;
  v18 = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v17, &v18);
  v8 = Results;
  v14 = v18;
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    a2,
                    v18),
        v8 = Results,
        Results >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Results);
  }
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
LABEL_16:
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v17);
  return (unsigned int)v8;
}

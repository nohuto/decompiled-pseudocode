/*
 * XREFs of _lambda_af94cea4af3172141190cb0b728b3d6f_::operator() @ 0x180012E98
 * Callers:
 *     ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180012E10 (-GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foun.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180011C20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013020 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800138C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStre.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013960 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAcc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_af94cea4af3172141190cb0b728b3d6f_::operator()(__int64 a1)
{
  int FileProperties; // eax
  int Interface; // esi
  __int64 v4; // rdi
  float *v5; // rax
  float v6; // xmm0_4
  _QWORD *v7; // rsi
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v14);
  Interface = FileProperties;
  if ( FileProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileProperties);
    v4 = v14;
    goto LABEL_12;
  }
  v5 = *(float **)(a1 + 8);
  v6 = *v5;
  if ( *v5 <= v5[1] )
    v6 = v5[1];
  v7 = **(_QWORD ***)(a1 + 16);
  *v7 = 0LL;
  v8 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v4 = v14;
    Interface = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_12;
  }
  v10 = v8 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 16));
  v11 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v9 + 7) = 1LL;
  if ( v11 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)v9 = off_180049900;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v4 = 0LL;
  *((_QWORD *)v9 + 8) = v14;
  *((_DWORD *)v9 + 18) = (int)v6;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::QueryInterface(
                v9,
                &GUID_33ee3134_1dd6_4e3a_8067_d1c162e8642b,
                v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_10;
  Interface = 0;
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)Interface;
}

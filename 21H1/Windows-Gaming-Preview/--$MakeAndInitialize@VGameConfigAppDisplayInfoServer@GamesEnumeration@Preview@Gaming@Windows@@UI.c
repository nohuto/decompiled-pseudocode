/*
 * XREFs of ??$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UIAppDisplayInfo@ApplicationModel@5@PEAUHSTRING__@@PEAU8@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppDisplayInfo@ApplicationModel@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18002D0D0
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028D74 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180011C20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180012B50 (-RuntimeClassInitialize@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038380 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180038380.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180038510.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer,Windows::ApplicationModel::IAppDisplayInfo,HSTRING__ *,HSTRING__ *>(
        __int64 *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  __int64 v5; // rcx
  char *v7; // rax
  char *v8; // rbx
  int Interface; // esi
  _QWORD *v10; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  char *v12; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a1 = 0LL;
  v7 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v10 = v7 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
    v11 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v8 + 7) = 1LL;
    if ( v11 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
    *(_QWORD *)v8 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable';
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Interface = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::RuntimeClassInitialize(
                  (HSTRING *)v8,
                  *a2,
                  *a3);
    v12 = v8;
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                    v8,
                    &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                    a1);
      v12 = v8;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}

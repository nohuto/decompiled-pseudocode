/*
 * XREFs of ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800A0A04
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800A05D8 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000727C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0930 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDispla.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800A18A0 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        struct Windows::ApplicationModel::IAppDisplayInfo **a3)
{
  _QWORD *v6; // rax
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *v7; // rbx
  int Interface; // edi
  _QWORD *v9; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx

  *a1 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *)v6;
  if ( v6 )
  {
    v9 = v6 + 3;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 3));
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::IAppDisplayInfo'};
    *((_QWORD *)v7 + 1) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
    *v9 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v7 + 8) = 1LL;
    if ( v10 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
    *(_QWORD *)v7 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Windows::ApplicationModel::IAppDisplayInfo'};
    *((_QWORD *)v7 + 9) = 0LL;
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v7 + 2) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
    *v9 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Interface = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
                  v7,
                  *a2,
                  *a3);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                    (__int64)v7,
                    &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                    a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}

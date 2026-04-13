/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800A0510
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvid.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0230 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInf.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD9C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rax
  __int64 v4; // rbx
  unsigned int Interface; // edi
  _QWORD *v6; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  *a2 = 0LL;
  v3 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v6 = v3 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 16));
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable';
    *(_QWORD *)(v4 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)(v4 + 56) = 1LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *(_QWORD *)v4 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable';
    *(_QWORD *)(v4 + 8) = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable'{for `IWeakReferenceSource'};
    *v6 = &Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
                  v4,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}

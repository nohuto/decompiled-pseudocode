/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180028060
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000727C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800266F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800266F0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<ContentManagement::ContentManagementBrokerServer,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rax
  __int64 v4; // rbx
  unsigned int Interface; // edi
  _QWORD *v6; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  *a2 = 0LL;
  v3 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v6 = v3 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 8));
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::`vftable'{for `IInspectable'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IContentManagementBroker>'};
    *(_QWORD *)(v4 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v4 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IContentManagementBroker>'};
    *(_QWORD *)(v4 + 64) = 1LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *(_QWORD *)v4 = &ContentManagement::ContentManagementBrokerServer::`vftable'{for `IInspectable'};
    *v6 = &ContentManagement::ContentManagementBrokerServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IContentManagementBroker>'};
    *(_QWORD *)(v4 + 40) = &ContentManagement::ContentManagementBrokerServer::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v4 + 48) = &ContentManagement::ContentManagementBrokerServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IContentManagementBroker>'};
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::QueryInterface(
                  v4,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release((volatile signed __int64 *)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}

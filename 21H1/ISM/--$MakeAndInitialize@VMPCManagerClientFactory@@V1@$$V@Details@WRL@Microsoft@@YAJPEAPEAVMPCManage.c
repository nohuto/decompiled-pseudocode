/*
 * XREFs of ??$MakeAndInitialize@VMPCManagerClientFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVMPCManagerClientFactory@@@Z @ 0x18010664C
 * Callers:
 *     ??$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180105E30 (--$CreateActivationFactory@VMPCManagerClientFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorM.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$AgileActivationFactory@UIMPCManagerClientStatics@MPCManager@Input@Internal@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180106770 (--0-$AgileActivationFactory@UIMPCManagerClientStatics@MPCManager@Input@Internal@Windows@@VNil@De.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCManagerClientFactory,MPCManagerClientFactory,>(
        MPCManagerClientFactory **a1)
{
  unsigned int v1; // edi
  MPCManagerClientFactory *v3; // rax
  MPCManagerClientFactory *v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = (MPCManagerClientFactory *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::AgileActivationFactory<Windows::Internal::Input::MPCManager::IMPCManagerClientStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::Input::MPCManager::IMPCManagerClientStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v3);
    *(_QWORD *)v4 = &MPCManagerClientFactory::`vftable';
    *((_QWORD *)v4 + 1) = &MPCManagerClientFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>>'};
    *((_QWORD *)v4 + 5) = &MPCManagerClientFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>>'};
    MPCManagerClientFactory::AddRef(v4);
    *a1 = v4;
    (*(void (__fastcall **)(MPCManagerClientFactory *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}

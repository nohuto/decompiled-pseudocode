/*
 * XREFs of ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18014F1F0
 * Callers:
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x1801510B0 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@QEAA@XZ @ 0x180156C30 (--0SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x18015ACAC (SpatialGraphDriverClientHelpers--DefaultSpatialGraphSettings.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?SpatialGraphNodeReferenceFactoryCreated_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x180163F30 (-SpatialGraphNodeReferenceFactoryCreated_@HolographicDriverClientTrace@@QEAAXPEBX@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>,IInspectable,>(
        _QWORD *a1)
{
  Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *v2; // rax
  Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // cl
  __int64 v7; // rcx
  HolographicDriverClientTrace *v8; // rcx

  *a1 = 0LL;
  v2 = (Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *)operator new(
                                                                             0x88uLL,
                                                                             (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::SpatialGraphNodeReferenceFactory(v2);
    *(_QWORD *)v3 = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::`vftable'{for `IInspectable'};
    *((_QWORD *)v3 + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v3 + 2) = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v3 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( HolographicDriverClientTrace::IsEnabled(v6, v5) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v7,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryCreated_(v8, v3);
    }
    *((_BYTE *)v3 + 72) = SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings();
    v4 = (**(__int64 (__fastcall ***)(Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a1);
    (*(void (__fastcall **)(Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}

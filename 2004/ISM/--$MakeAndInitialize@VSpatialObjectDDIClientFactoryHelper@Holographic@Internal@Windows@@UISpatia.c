/*
 * XREFs of ??$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatialObjectDDIClientFactory@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x1800D4A18
 * Callers:
 *     ?InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800D79A8 (-InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D595C (--0SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJXZ @ 0x1800D86DC (-RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJX.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,>(
        _QWORD *a1)
{
  Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *v2; // rax
  int v3; // edi
  Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *v4; // rbx

  *a1 = 0LL;
  v2 = (Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *)operator new(
                                                                                0x58uLL,
                                                                                (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *)Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::SpatialObjectDDIClientFactoryHelper(v2);
    v3 = Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_d2174086_a18d_452a_b2cf_8a90d62d43b1,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}

/*
 * XREFs of ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE130
 * Callers:
 *     ??4?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800CE8B8 (--4-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Interna.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D1DFC (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x180141248 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180142A70 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801A48BC (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}

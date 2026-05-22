/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18015A420
 * Callers:
 *     ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18004C910 (-CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUD.c)
 *     ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18004C920 (-CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a3)
{
  return (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, const struct Windows::Internal::Holographic::DynamicNodeInfo *, __int64, struct Windows::Internal::Holographic::ISpatialGraphNodeReference **))(*(_QWORD *)this + 40LL))(
           this,
           a2,
           2LL,
           a3);
}

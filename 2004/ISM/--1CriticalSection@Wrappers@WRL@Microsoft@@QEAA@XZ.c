/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800645C8
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x18004E22E (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$1 @ 0x180050539 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050539.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$9 @ 0x1800505FE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800505FE.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$14 @ 0x18005067B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005067B.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x1800506AD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800506AD.c)
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801456C0 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$3 @ 0x1801458C8 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$1 @ 0x180156BC7 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_180156BC7.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::SpatialGraphNodeReferenceFactory_::_1_::dtor$1 @ 0x180156DB8 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--SpatialGraphNode_ea_180156DB8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

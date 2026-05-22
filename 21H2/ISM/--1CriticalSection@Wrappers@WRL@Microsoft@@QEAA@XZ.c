/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180064C58
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x18004EE0E (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$1 @ 0x18005112B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005112B.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$9 @ 0x1800511F0 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800511F0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$14 @ 0x18005126D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005126D.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x18005129F (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005129F.c)
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x180145B20 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$3 @ 0x180145D28 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$1 @ 0x180157027 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_180157027.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::SpatialGraphNodeReferenceFactory_::_1_::dtor$1 @ 0x180157218 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--SpatialGraphNode_ea_180157218.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

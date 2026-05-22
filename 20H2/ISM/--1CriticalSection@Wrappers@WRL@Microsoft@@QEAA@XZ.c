/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180064508
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x18004E1DE (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$1 @ 0x1800504E9 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800504E9.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$9 @ 0x1800505AE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800505AE.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$14 @ 0x18005062B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005062B.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x18005065D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18005065D.c)
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x180145630 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$3 @ 0x180145838 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$1 @ 0x180156B37 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_180156B37.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::SpatialGraphNodeReferenceFactory_::_1_::dtor$1 @ 0x180156D28 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--SpatialGraphNode_ea_180156D28.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

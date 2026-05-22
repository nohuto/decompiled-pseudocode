/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180064BB8
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x18004E81E (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$1 @ 0x180050B29 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050B29.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$9 @ 0x180050BEE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050BEE.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$14 @ 0x180050C6B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050C6B.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x180050C9D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050C9D.c)
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x180145B80 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$3 @ 0x180145D88 (_VirtualTouchpadContextProvider--Create_--_1_--dtor$3.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$1 @ 0x180157087 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_180157087.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::SpatialGraphNodeReferenceFactory_::_1_::dtor$1 @ 0x180157278 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--SpatialGraphNode_ea_180157278.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

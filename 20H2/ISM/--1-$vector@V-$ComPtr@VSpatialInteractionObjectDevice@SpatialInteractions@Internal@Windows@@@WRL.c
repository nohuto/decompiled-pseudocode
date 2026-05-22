/*
 * XREFs of ??1?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B440C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AD90 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x18004DAF2 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::OnMitMessageReceived_::_1_::dtor$0 @ 0x18004FC7D (_CursorNotificationProcessor--OnMitMessageReceived_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x180051572 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessOrientationChangeNotification_::_1_::dtor$0 @ 0x1800B45F5 (_CursorNotificationProcessor--ProcessOrientationChangeNotification_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$0 @ 0x1800D84F1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--RemoveSpatial.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper_::_1_::dtor$3 @ 0x180156B5D (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--SpatialGraphDrive_ea_180156B5D.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::AddNodePropertiesUpdatedCallback_::_1_::dtor$2 @ 0x1801593D1 (_Windows--Internal--Holographic--DynamicNodeSourceBase--AddNodePropertiesUpdatedCal_ea_1801593D1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AEB4 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>(
        __int64 a1)
{
  __int64 *v1; // rdi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

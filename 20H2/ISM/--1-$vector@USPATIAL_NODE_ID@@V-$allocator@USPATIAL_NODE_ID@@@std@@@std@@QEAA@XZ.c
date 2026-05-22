/*
 * XREFs of ??1?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@QEAA@XZ @ 0x1801575BC
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$5 @ 0x1801569E9 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1801569E9.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveExpiredNodePropertiesUpdatedCallbacks_::_1_::dtor$0 @ 0x180163240 (_Windows--Internal--Holographic--DynamicNodeSourceBase--RemoveExpiredNodePropertiesUpdatedCallba.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<SPATIAL_NODE_ID>::~vector<SPATIAL_NODE_ID>(__int64 a1)
{
  std::vector<std::pair<unsigned long,IInputProcessor *>>::~vector<std::pair<unsigned long,IInputProcessor *>>(a1);
}

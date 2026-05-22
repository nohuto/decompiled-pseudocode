/*
 * XREFs of ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800C5B94
 * Callers:
 *     _SpatialInteractionDevices::EnumerateDevices_::_1_::dtor$0 @ 0x1800C623D (_SpatialInteractionDevices--EnumerateDevices_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$10 @ 0x1800D164C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800D164C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::Wrappers::HString>::~vector<Microsoft::WRL::Wrappers::HString>()
{
  return std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy();
}

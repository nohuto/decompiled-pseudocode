/*
 * XREFs of _lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator() @ 0x1800C93A8
 * Callers:
 *     std::_Insertion_sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C892C (std--_Insertion_sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88.c)
 *     std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8AB4 (std--_Med3_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8B58 (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____l.c)
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8DBC (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps___SpatialInteract.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(__int64 a1, _WORD *a2, _WORD *a3)
{
  return *a2 < *a3 || *a2 == *a3 && a2[2] < a3[2];
}

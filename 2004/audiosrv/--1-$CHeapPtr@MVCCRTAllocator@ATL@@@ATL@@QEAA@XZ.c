/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x1800B8488
 * Callers:
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x1800B9551 (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x1800B95E0 (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x1800C2A8A (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x1800C2CB0 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}

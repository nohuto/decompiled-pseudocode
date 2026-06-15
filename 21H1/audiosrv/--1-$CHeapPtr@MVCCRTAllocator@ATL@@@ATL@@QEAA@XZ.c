/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x1800B83E8
 * Callers:
 *     _CAudioSrv::DeviceArrivalEvent_::_1_::dtor$0 @ 0x1800B9491 (_CAudioSrv--DeviceArrivalEvent_--_1_--dtor$0.c)
 *     _CAudioSrv::DeviceRemovalEvent_::_1_::dtor$0 @ 0x1800B9520 (_CAudioSrv--DeviceRemovalEvent_--_1_--dtor$0.c)
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x1800C299A (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x1800C2BC0 (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}

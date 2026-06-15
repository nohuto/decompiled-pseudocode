/*
 * XREFs of ??1?$MakeAllocator@VCApoEndpoint@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140020BE4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FDB0 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice_void___&__::_1_::dtor$0 @ 0x14001FE51 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--AudioDeviceBroker.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void____::_1_::dtor$0 @ 0x14002D5F6 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceModulesManager_W.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___&_BRIDGE_STREAM_DESCRIPTOR___&_IAudioProcessingObject___&_IAudioMediaType___&_unsigned_int_&__::_1_::dtor$0 @ 0x14003CAA3 (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$0 @ 0x14005F8A1 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICross.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CApoEndpoint>::~MakeAllocator<CApoEndpoint>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

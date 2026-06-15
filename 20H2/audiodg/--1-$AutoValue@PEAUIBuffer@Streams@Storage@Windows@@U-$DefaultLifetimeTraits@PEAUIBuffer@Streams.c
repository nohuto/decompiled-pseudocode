/*
 * XREFs of ??1?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@XZ @ 0x1400549A0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::RemoveAtInternal_::_1_::dtor$0 @ 0x140059CE9 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140059CE9.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::SetAt_::_1_::dtor$0 @ 0x14005A17A (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14005A17A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::SetAt_::_1_::dtor$1 @ 0x14005A186 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_14005A186.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F220 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 */

__int64 __fastcall XWinRT::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>::~AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>(
        __int64 *a1)
{
  return XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(a1);
}

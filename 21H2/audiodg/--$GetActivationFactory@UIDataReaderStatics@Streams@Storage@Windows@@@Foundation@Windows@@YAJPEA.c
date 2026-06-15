/*
 * XREFs of ??$GetActivationFactory@UIDataReaderStatics@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataReaderStatics@Streams@Storage@1@@Z @ 0x140053D70
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058870 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Windows::Storage::Streams::IDataReaderStatics>(
        __int64 a1,
        __int64 a2)
{
  return RoGetActivationFactory(a1, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, a2);
}

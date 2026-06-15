/*
 * XREFs of ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x1400536DC
 * Callers:
 *     ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x140026F10 (-SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058870 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[35])
{
  if ( WindowsCreateStringReference(
         L"Windows.Storage.Streams.DataReader",
         0x22u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}

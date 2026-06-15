/*
 * XREFs of ??$?8UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x14001EDD0
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058870 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x140058D30 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x140059FE0 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator==<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>(_QWORD *a1)
{
  return *a1 == 0LL;
}

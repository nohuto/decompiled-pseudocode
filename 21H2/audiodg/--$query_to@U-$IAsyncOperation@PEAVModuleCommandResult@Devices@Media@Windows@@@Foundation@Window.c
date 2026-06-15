/*
 * XREFs of ??$query_to@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Z @ 0x1400203C4
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14005A0D0 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::query_to<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
        _QWORD *a1,
        __int64 a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::QueryInterface(
           *a1,
           &GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb,
           a2);
}

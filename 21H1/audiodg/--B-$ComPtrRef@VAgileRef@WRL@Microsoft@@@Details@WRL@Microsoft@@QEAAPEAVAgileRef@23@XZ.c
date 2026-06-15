/*
 * XREFs of ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x14004B3F4
 * Callers:
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x140049358 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PE.c)
 *     ??$Initialize@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@2@@Z @ 0x140049B78 (--$Initialize@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14001AB54 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0LL;
  v3 = *v1;
  *v1 = 0LL;
  v5 = v3;
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v5);
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v6);
  return *a1;
}

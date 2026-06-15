/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x1800239C0
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     VADServerUserSessionChanged @ 0x18002AFC8 (VADServerUserSessionChanged.c)
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006E2AC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
 *     ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z @ 0x18006E630 (-AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCPBMStreamClassVolumeGainStage@@@Z.c)
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18006E720 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006F3F4 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006F8D0 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006FA60 (-GetOffloadStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@.c)
 *     ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x180071C20 (-AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  EnterCriticalSection(a1);
  *a2 = a1;
  return a2;
}

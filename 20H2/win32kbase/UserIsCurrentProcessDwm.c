/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C0060F80
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001BA0 (NtUpdateInputSinkTransforms.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015544 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0030C84 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0060600 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0060E10 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0061220 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00628E0 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0063A60 (NtDuplicateCompositionInputSink.c)
 *     GreSfmGetNotificationTokens @ 0x1C0063E50 (GreSfmGetNotificationTokens.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C0069F40 (NtDCompositionSetMaterialProperty.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00817D4 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C00A2930 (NtQueryCompositionInputSink.c)
 *     GreSfmOpenTokenEvent @ 0x1C00B28A0 (GreSfmOpenTokenEvent.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C00B67F0 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00B7920 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01CC360 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01CC5D0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01CCE90 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01F5420 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}

/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C009D410
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001BA0 (NtUpdateInputSinkTransforms.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C000DB70 (NtDCompositionSetMaterialProperty.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C001C22C (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C0040450 (NtQueryCompositionInputSink.c)
 *     GreSfmOpenTokenEvent @ 0x1C0052210 (GreSfmOpenTokenEvent.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0057E50 (NtDCompositionCreateDwmChannel.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C006C664 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     DrvEnumDisplayDevices @ 0x1C0094400 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C009D2A0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C009D4E0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C009E498 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00A4358 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreSfmGetNotificationTokens @ 0x1C00A48C0 (GreSfmGetNotificationTokens.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00A4C10 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00A8420 (NtDuplicateCompositionInputSink.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C00B3880 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8CF4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01CE6E0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01CE950 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01CF210 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01F6D50 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}

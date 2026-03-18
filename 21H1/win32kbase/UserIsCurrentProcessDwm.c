/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C002EAC0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001A50 (NtUpdateInputSinkTransforms.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00066FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C002E7C0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C002E8F0 (GreSfmGetNotificationTokens.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C002FB64 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C00399D0 (NtDCompositionSetMaterialProperty.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C004A140 (NtDCompositionCreateDwmChannel.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006B120 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C0097170 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AE078 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00B4640 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C00B53D0 (NtQueryCompositionInputSink.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00B6BAC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00B8000 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00B8370 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00B87A0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01D4660 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01D48D0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01D5190 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01FC780 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}

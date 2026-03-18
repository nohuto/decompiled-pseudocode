/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60
 * Callers:
 *     GreResumeDirectDraw @ 0x1C004CD40 (GreResumeDirectDraw.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvDisableMDEV @ 0x1C00B0730 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00B09B8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C0144504 (UserNotifyUniversalScaleFactorChanged.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C0154520 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     <none>
 */

PVOID GreIncrementDisplaySettingsUniqueness()
{
  PVOID result; // rax

  result = gpGdiSharedMemory;
  if ( gpGdiSharedMemory )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    return (PVOID)DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}

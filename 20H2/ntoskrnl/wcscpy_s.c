/*
 * XREFs of wcscpy_s @ 0x1403D7900
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403BA250 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BA3D0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404BD640 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406FB584 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1406FCD64 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14074D6BC (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x14077E6D4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14077E7F4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140781218 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x1407AF0E0 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140879410 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140879FC0 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408B014C (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x140928910 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x140951DCC (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1409521D4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1409524AC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14095257C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x140952744 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140953298 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x140954A6C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x1409724C8 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B84CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B956C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409F29AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = (char *)Dst - (char *)Src;
    do
    {
      v6 = *Src;
      *(const wchar_t *)((char *)Src + v5) = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}

/*
 * XREFs of wcscpy_s @ 0x1403D4C70
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403B77B0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B6EB0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404BA120 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14063EFE4 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x140641F7C (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14073EAD8 (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x1407700D4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407701F4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140772C18 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x14079FDB0 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x1408738C0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140874470 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408AA61C (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x140922AE8 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x140948A40 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14094C00C (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14094C414 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094C6EC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14094C984 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14094D4D8 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14094ECAC (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14096C6F8 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B24CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B356C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
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

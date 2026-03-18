/*
 * XREFs of wcscpy_s @ 0x1403D3E30
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403B6980 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B67D0 (HalSetEnvironmentVariableEx.c)
 *     HalpQueryProfileSourceList @ 0x1404B9A40 (HalpQueryProfileSourceList.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14068F104 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14073CF58 (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x14076DCC4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14076DDE4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140770808 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x14079BDB0 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x1408725D0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140873180 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1408A92FC (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x140921838 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14094AC6C (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14094B074 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14094B34C (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094B41C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14094B5E4 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14094C138 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14094D90C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14096B358 (BiCreateFileDeviceElement.c)
 *     HalpQueryDebuggerInformation @ 0x1409B24CC (HalpQueryDebuggerInformation.c)
 *     HalpRegisterDeviceInUse @ 0x1409B356C (HalpRegisterDeviceInUse.c)
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
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

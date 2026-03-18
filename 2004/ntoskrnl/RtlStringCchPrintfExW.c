/*
 * XREFs of RtlStringCchPrintfExW @ 0x1402029D8
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1403902FC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14039042C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     _PnpStringFromGuid @ 0x1405D750C (_PnpStringFromGuid.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1405DBF20 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405E12A4 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406C0698 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x1406C130C (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406C1550 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406C2B0C (_CmGetDeviceContainerRegKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406C2EB0 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406F79A4 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406F7B3C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140700A50 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14070827C (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     PiProcessDriverInstance @ 0x14072A040 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14072A2BC (PiFindDevInstMatch.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     _PnpDeletePropertyWorker @ 0x14075A89C (_PnpDeletePropertyWorker.c)
 *     _CmGetDeviceControlKeyPath @ 0x14075EE14 (_CmGetDeviceControlKeyPath.c)
 *     PiRearrangeDeviceInstances @ 0x14076E834 (PiRearrangeDeviceInstances.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407BFEB4 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1408983D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1408984CC (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1408AF2EC (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x14090DBA8 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1409750F0 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140975D54 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140202AE4 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1403CC5F0 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x140506F38 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  wchar_t *v10; // r12
  size_t v11; // r14
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v11, dwFlags);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return v9;
}

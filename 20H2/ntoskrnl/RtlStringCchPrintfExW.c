/*
 * XREFs of RtlStringCchPrintfExW @ 0x140267C48
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1403927BC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1403928EC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140640800 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x140640C4C (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x140640E90 (_PnpOpenPropertiesKey.c)
 *     _PnpStringFromGuid @ 0x1406413C4 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x14066D034 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406CAA94 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406D41E0 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1406DAACC (_CmGetDeviceLogConfKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406E45E0 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406E721C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406EAFD8 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x140735740 (_PnpSetPropertyWorker.c)
 *     PiProcessDriverInstance @ 0x140738AD0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140738D4C (PiFindDevInstMatch.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     _PnpDeletePropertyWorker @ 0x14076905C (_PnpDeletePropertyWorker.c)
 *     _CmGetDeviceControlKeyPath @ 0x14076D484 (_CmGetDeviceControlKeyPath.c)
 *     PiRearrangeDeviceInstances @ 0x14077D264 (PiRearrangeDeviceInstances.c)
 *     DrvDbCreateDatabaseNode @ 0x140799D48 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407CE744 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089DF00 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14089DFFC (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B4E1C (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1409136E8 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14097AEC0 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097BB24 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140267D54 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1403CF28C (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14050A868 (StringExHandleOtherFlagsW.c)
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

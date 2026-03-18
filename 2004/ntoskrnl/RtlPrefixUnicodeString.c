/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405E60B0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1402FE950 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405641D4 (PopFxBuildDripsBlockingDeviceList.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405DBCC4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405E09CC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405E2D68 (_CmOpenDeviceRegKeyWorker.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x1406174A4 (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x140618300 (ObCheckRefTraceProcess.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406286A0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A6080 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406BE1B0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406C035C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406C28E4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1406E8B0C (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406F6868 (RtlpProcessIFEOKeyFilter.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140719A94 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14071A9B0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14071AED4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14089BFF4 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14089C530 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B3C68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B4724 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408D8D74 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408E9B08 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F4B74 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140971960 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097531C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v5; // rbx
  char *v6; // rdi
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // ax
  __int16 v11; // r10
  char *v12; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *(wchar_t *)((char *)Buffer + (_QWORD)v6);
        if ( *Buffer != v7 )
        {
          NLS_UPCASE(v7);
          v10 = NLS_UPCASE(v9);
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v12) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}

/*
 * XREFs of RtlPrefixUnicodeString @ 0x140671570
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x1402FD050 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140567BB4 (PopFxBuildDripsBlockingDeviceList.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E4E14 (SepAdtAuditObjectAccessWithContext.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     ObCheckRefTraceProcess @ 0x14063051C (ObCheckRefTraceProcess.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406405A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x14066BCDC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406702F4 (_CmOpenDeviceRegKeyWorker.c)
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14068E9D4 (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepIsMinTCB @ 0x1406905B8 (SepIsMinTCB.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C96F4 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406E6FF4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406E8AF0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406EAC9C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x14071FD40 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140727A84 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407289A0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140728EC4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x140738824 (IopBuildFullDriverPath.c)
 *     PiNormalizeDeviceText @ 0x140766AB0 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x1408A1B24 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1408A2060 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A9824 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B9888 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408BA344 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408DEBB4 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408EF718 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408FA784 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140977730 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097A79C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x14097B0EC (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
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

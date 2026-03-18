/*
 * XREFs of RtlPrefixUnicodeString @ 0x14061B6D0
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x140313924 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140563B84 (PopFxBuildDripsBlockingDeviceList.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405E2F30 (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140618394 (_CmOpenDeviceRegKeyWorker.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x14066EA54 (SepIsMinTCB.c)
 *     ObCheckRefTraceProcess @ 0x14066FA20 (ObCheckRefTraceProcess.c)
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1406AA2F4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406AA728 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406AB634 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406B1720 (PiPnpRtlEnumeratorFilterCallback.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1406C844C (AuthzBasepIsCompareRelevantAttribute.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D3A74 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406D9B04 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x1407109B0 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140717704 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140718620 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140718B44 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407193DC (_CmDeleteDeviceRegKeyWorker.c)
 *     IopBuildFullDriverPath @ 0x140725998 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     PiNormalizeDeviceText @ 0x140755F00 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14089ACD4 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14089B210 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A29D4 (PiDevCfgMakeServiceBootStart.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B3404 (PiDrvDbResolveKeyFilePaths.c)
 *     ObpIsUnsecureName @ 0x1408D7A24 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408E8888 (PopBatteryDeviceState.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F3884 (PopDirectedDripsDiagSanitizeHardwareId.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409705C0 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097362C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140973F7C (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
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

/*
 * XREFs of RtlStringCchPrintfW @ 0x140272280
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C1050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     IoCreateDevice @ 0x140634290 (IoCreateDevice.c)
 *     LocalpGetStringForCondition @ 0x1406417E0 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140641C08 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x140641C54 (GetPrintableOperandValue.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsSectionName @ 0x1406FF3F0 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406FF458 (RtlpInitNlsFileName.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072FAF4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoWMIOpenBlock @ 0x140745280 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x14078CC18 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x14078DEC4 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x14079EF10 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407AFC98 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407C1C20 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A6280 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A7340 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408AF2EC (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140903280 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140960FFC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1409640F0 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x140A67484 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x140A6C878 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403CDA70 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}

/*
 * XREFs of RtlStringCchPrintfW @ 0x1402E2030
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C0930 (DrvDbGetConfigurationSubKeyCallback.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     LocalpGetStringForCondition @ 0x14068F6A4 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x14068FACC (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14068FB18 (GetPrintableOperandValue.c)
 *     RtlpInitNlsSectionName @ 0x1406DC450 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406DC4B8 (RtlpInitNlsFileName.c)
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407363C8 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoWMIOpenBlock @ 0x140743700 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x14078AD48 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x14078BFF4 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x14079AB40 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407ACB38 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BE930 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A4F60 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A6020 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408ADFCC (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140902470 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x140921124 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14095FC5C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140962D50 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140A53978 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140A6C5A8 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403CCC30 (_vsnwprintf.c)
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

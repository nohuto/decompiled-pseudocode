/*
 * XREFs of RtlStringCchPrintfW @ 0x140340D00
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1405C4CD0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     RtlpInitNlsSectionName @ 0x1406D2040 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406D20A8 (RtlpInitNlsFileName.c)
 *     LocalpGetStringForCondition @ 0x1406FC3C8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x1406FC7F0 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406FC83C (GetPrintableOperandValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073E2AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoWMIOpenBlock @ 0x140753E60 (IoWMIOpenBlock.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     IopBootLog @ 0x14076D764 (IopBootLog.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNode @ 0x140799358 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x14079A604 (_SysCtxOpenControlSet.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     AslpFileQueryVersionString @ 0x1407AE240 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x1407BDBD8 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407D0420 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408AAB40 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408ABDB0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408ACE70 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408B4E1C (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140908EA0 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140966DCC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140969EC0 (AslGuidToString_UStr.c)
 *     IopCreateArcNamesDisk @ 0x140A59D74 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140A73158 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D0700 (_vsnwprintf.c)
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

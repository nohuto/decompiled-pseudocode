/*
 * XREFs of RtlStringCchPrintfA @ 0x1C001D284
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001C5D8 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001D038 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C001DD7C (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001E2B0 (ACPIGetProcessorIDWide.c)
 *     ACPIAmliDoubleToName @ 0x1C001E8BC (ACPIAmliDoubleToName.c)
 *     ACPIBuildProcessorExtension @ 0x1C001F0E0 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0049E7C (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C0056314 (ACPIGetConvertToStringWide.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D9C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2020 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2238 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC7D4 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD39C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}

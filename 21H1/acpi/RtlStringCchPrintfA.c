/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000C588
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C000C0B8 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C34C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015DC4 (ACPIBuildProcessorExtension.c)
 *     ACPIGetProcessorIDWide @ 0x1C0027480 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027AF8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027F80 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0028108 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002840C (ACPIGetConvertToInstanceIDWide.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     ACPIBuildDockExtension @ 0x1C004B40C (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055AB8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055BAC (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C006B2C8 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B219C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2420 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2638 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC584 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD18C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v3;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v3;
}

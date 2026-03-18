/*
 * XREFs of OSCloseHandle @ 0x1C00954DC
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002ED80 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0065AA0 (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C00BB8FC (AcpiDiagInitialize.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC7D4 (ACPIRegDumpAcpiTable.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC964 (OSReadAcpiConfigurationData.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BCB2C (ACPIInitGetPlatformOverrides.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD39C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}

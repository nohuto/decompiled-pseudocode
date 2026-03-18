/*
 * XREFs of OSCloseHandle @ 0x1C00969FC
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0031330 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064694 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC24C (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC584 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BC7B0 (ACPIInitGetPlatformOverrides.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD18C (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00BDD28 (AcpiDiagInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}

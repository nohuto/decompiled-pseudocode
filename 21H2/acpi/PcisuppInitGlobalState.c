/*
 * XREFs of PcisuppInitGlobalState @ 0x1C009E100
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}

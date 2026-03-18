/*
 * XREFs of PcisuppInitGlobalState @ 0x1C009F9A8
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEDC4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}

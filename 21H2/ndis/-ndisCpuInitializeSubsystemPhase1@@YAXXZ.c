/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase1@@YAXXZ @ 0x1C01462C0
 * Callers:
 *     NdisDllInitialize @ 0x1C0036470 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void ndisCpuInitializeSubsystemPhase1(void)
{
  ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
  KeQueryActiveProcessorCountEx(0);
  ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
}

/*
 * XREFs of KiSendSoftwareInterrupt @ 0x14022BA48
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KiRequestTimer2Expiration @ 0x14022B980 (KiRequestTimer2Expiration.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403D30D0 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 */

__int64 KiSendSoftwareInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt();
}

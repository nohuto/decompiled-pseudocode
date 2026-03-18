/*
 * XREFs of KiSendSoftwareInterrupt @ 0x1402F7E88
 * Callers:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiRequestTimer2Expiration @ 0x1402F7DC0 (KiRequestTimer2Expiration.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C57FC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x1402F7EB0 (HalSendSoftwareInterrupt.c)
 */

__int64 KiSendSoftwareInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt();
}

/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140375CF0
 * Callers:
 *     EmonQueryInformation @ 0x1403739C0 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140374050 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140374900 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140374FE0 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x140375760 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140375BF4 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140383120 (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x1403891A0 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A3360 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A3B50 (HalpMaskInterrupt.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403C974C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EB984 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404B5C90 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B6300 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404B7190 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B85DC (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB140 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BB2F0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BB4D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BB5C0 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CB450 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404CB5C0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404CB878 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404CB94C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404CBB20 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404CBC10 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404CBEA0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404CD9A0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404CE0D0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404CF010 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8010 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404D8470 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404D88F0 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404D8B70 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404D8D50 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DCB30 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404DDF50 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}

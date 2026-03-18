/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140378A90
 * Callers:
 *     EmonQueryInformation @ 0x140376760 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140376DF0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x1403776A0 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140377D80 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x140378500 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140378994 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140385B9C (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x14038C4B0 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1CC4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A2EAC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A30E0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A5E90 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A66D0 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD18C (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EF454 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404B9890 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B9F00 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BAD90 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BC1DC (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BED40 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BEEF0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BF0D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BF1C0 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CEE60 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404CEFD0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404CF288 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404CF35C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404CF530 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404CF620 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404CF8B0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404D13F0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404D1B20 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404D2A60 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DBAB0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404DBF10 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404DC390 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404DC610 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404DC7F0 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E0660 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E1AA0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
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

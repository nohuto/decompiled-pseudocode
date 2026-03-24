/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140378F20
 * Callers:
 *     EmonQueryInformation @ 0x140376BF0 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140377280 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140377B30 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140378210 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x140378990 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140378E24 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14038698C (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x14038CBD0 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A2584 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A376C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A39A0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A6750 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A6F90 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDB6C (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFDC4 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404BB250 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BB8C0 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC750 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDB9C (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0710 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C08C0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0AA4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0B90 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0830 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404D09A0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404D0C58 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404D0D2C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404D0F00 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404D0FF0 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404D1280 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404D2DC0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404D34F0 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404D4430 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD4C0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404DD920 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404DDDA0 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404DE020 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404DE200 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E20C0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E3590 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
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

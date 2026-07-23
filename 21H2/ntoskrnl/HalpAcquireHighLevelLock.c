/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140378A70
 * Callers:
 *     EmonQueryInformation @ 0x140376740 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140376DD0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140377680 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140377D60 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x1403784E0 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140386ADC (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x14038CD20 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A68A0 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A70E0 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDCDC (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFF34 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404BB490 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC990 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDDDC (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0950 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C0B00 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0CE4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0DD0 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404D0A70 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404D0BE0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404D0E98 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404D0F6C (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404D1140 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404D1230 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404D14C0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404D3730 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404D4670 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404DDB60 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404DDFE0 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404DE260 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404DE440 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E37D0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
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

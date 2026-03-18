/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140376B00
 * Callers:
 *     EmonQueryInformation @ 0x1403747D0 (EmonQueryInformation.c)
 *     HalDisableInterrupt @ 0x140374E60 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140375710 (HalEnableInterrupt.c)
 *     EmonSetInterval @ 0x140375DF0 (EmonSetInterval.c)
 *     HalpInterruptSetDestination @ 0x140376570 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140376A04 (HalpInterruptApplyOverrides.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140383A70 (HalpTimerEnableHypervisorTimer.c)
 *     HalpUnmaskInterrupt @ 0x14038A210 (HalpUnmaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F7F4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A09DC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0C10 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403A3AC0 (HalpInterruptLocalErrorService.c)
 *     HalpMaskInterrupt @ 0x1403A42B0 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CA54C (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EC92C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404B6370 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B69E0 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1404B7870 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B8CBC (HalpInterruptServiceActiveBoth.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB820 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BB9D0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BBBB4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BBCA0 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CB900 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x1404CBA70 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x1404CBD28 (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x1404CBDFC (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x1404CBFD0 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404CC0C0 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x1404CC350 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x1404CDE50 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x1404CE580 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x1404CF4C0 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8520 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1404D8980 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404D8E00 (Amd64QueryInformation.c)
 *     Amd64RemoveProfileSource @ 0x1404D9080 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x1404D9260 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404DD0D0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1404DE510 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
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

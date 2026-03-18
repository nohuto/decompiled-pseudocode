/*
 * XREFs of HalpAcquireHighLevelLock @ 0x140252344
 * Callers:
 *     HalpInterruptSetDestination @ 0x140251DC0 (HalpInterruptSetDestination.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpQueryProfileSource @ 0x140376F58 (HalpQueryProfileSource.c)
 *     EmonSetInterval @ 0x140389F90 (EmonSetInterval.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1403916B0 (HalpTimerEnableHypervisorTimer.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140397D10 (HalpMaskInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptLocalErrorService @ 0x1403B5BB0 (HalpInterruptLocalErrorService.c)
 *     HalpUnmaskInterrupt @ 0x1403B6180 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403B9214 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x140507CF0 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140508364 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1405091D0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x140509344 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050A60C (HalpInterruptServiceActiveBoth.c)
 *     HalpQueryProfileSourceList @ 0x14050B88C (HalpQueryProfileSourceList.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x14050D1D0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x14050D380 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x14050D564 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x14050D650 (HalpVpptStop.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14051CE3C (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpCreateSecondaryIcEntry @ 0x14051CFB0 (HalpCreateSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntry @ 0x14051D24C (HalpFindSecondaryIcEntry.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x14051D320 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x14051D4F4 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14051D5E4 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x14051D870 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x14051FB70 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x140520330 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x140521670 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x14052AF40 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x14052B860 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14052C660 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x14052C880 (Amd64SetInterval.c)
 *     HsaAllocateRemappingTableEntry @ 0x140530DE0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140532200 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
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

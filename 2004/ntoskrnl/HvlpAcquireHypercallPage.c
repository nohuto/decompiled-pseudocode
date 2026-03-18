/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1404ED430
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x1403804F0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403ED190 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404EC428 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404EC580 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1404EC97C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404ECED0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ED250 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404ED7F8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404EDAFC (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404EDC00 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404EDE60 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404EEB1C (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404EECE0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404EED70 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404EEEC8 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404EF300 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404EF400 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404EF6A0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404EF9E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404EFBB0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F00C0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404F0220 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404F0320 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404F0460 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404F0550 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404F05E0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F08AC (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F0930 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F09F0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F0A84 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F0C10 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F0D30 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F0EF0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F1150 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F12F8 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F1390 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F1430 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F14D0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F1B00 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1C50 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F1F30 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F237C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F2438 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F250C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F2AD8 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1404F2BE0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F2D04 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F2F10 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2F80 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F3308 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F3808 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F44D0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F4658 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F4AA8 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4FB4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F5588 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404F5C34 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404F5CD8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404F5DEC (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404F5F6C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404F6300 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C408C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C41C0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C443C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C4594 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C46E8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14088B67C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A8C778 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  __int16 v9; // ax
  struct _KPRCB *v10; // rax
  _QWORD *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  _DWORD *SchedulerAssist; // r9
  __int16 v21; // ax
  struct _KPRCB *v22; // rax
  __int16 v23; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v13->Next;
    if ( v13 )
    {
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
    }
    else
    {
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        p_Next = (_QWORD *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          p_Next = (_QWORD *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        a1->LowPart = 2;
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(a1[1].LowPart) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (v19 + 1)) - 1) & 4;
            }
          }
        }
        Next = MmGetPhysicalAddress(p_Next);
      }
      else
      {
        v21 = v23;
        a1->LowPart = 4;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v21 & 0x200) != 0;
        v22 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          p_Next = v22->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          p_Next = (char *)v22->HypercallCachedPages + 4096;
        }
        Next = (PHYSICAL_ADDRESS)p_Next[2];
      }
    }
    a1[3] = Next;
    return p_Next;
  }
  else
  {
    v9 = v23;
    a1->LowPart = 4;
    _disable();
    a1[1].HighPart = a2;
    LOBYTE(a1[1].LowPart) = (v9 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (_QWORD *)HypercallCachedPages;
    a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  }
  return result;
}

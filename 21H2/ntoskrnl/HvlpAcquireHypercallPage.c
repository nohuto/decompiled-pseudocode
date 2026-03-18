/*
 * XREFs of HvlpAcquireHypercallPage @ 0x14039DF90
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140398488 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpSlowFlushListTb @ 0x14039D79C (HvlpSlowFlushListTb.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1405432A8 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1405436CC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140543B40 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140543EB0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14054455C (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140544670 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405448D4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1405454FC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1405456C0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140545750 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1405458A0 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x14054599C (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140545C94 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140546200 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140546900 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140546AE0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x140547040 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405471A0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405472A0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1405473F0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1405474E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140547570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140547850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405478E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1405479B0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140547A48 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140547BD0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140547D00 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140547F80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405481F0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140548398 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140548430 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140548560 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140548600 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140548C30 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x140549100 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140549558 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14054961C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405496F8 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140549B18 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140549C24 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140549D4C (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140549FDC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14054A050 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14054A3D8 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x14054A9B4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14054B670 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054B7FC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14054BC60 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14054C770 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14054CE04 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054CEAC (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14054CFC4 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054D374 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140653C40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140653D68 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140653EC4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140654038 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x14065416C (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409311AC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140B4E934 (HvlpLpCpuid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 */

_QWORD *__fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rax
  _QWORD *result; // rax
  __int16 v14; // ax
  struct _KPRCB *v15; // rax
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
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v10->Next;
    if ( v10 )
    {
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
      a1[2].QuadPart = (LONGLONG)v10;
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
LABEL_4:
      a1[3] = Next;
      return p_Next;
    }
    if ( (a2 & 4) == 0 )
    {
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
      goto LABEL_4;
    }
    return 0LL;
  }
  else
  {
    v14 = v23;
    a1->LowPart = 4;
    _disable();
    a1[1].HighPart = a2;
    LOBYTE(a1[1].LowPart) = (v14 & 0x200) != 0;
    v15 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages + 4096;
    }
    result = (_QWORD *)HypercallCachedPages;
    a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  }
  return result;
}

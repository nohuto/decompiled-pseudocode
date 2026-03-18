/*
 * XREFs of HalpMmAllocCtxFree @ 0x1403B1B5C
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BEAD0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403BEF40 (HalpAcpiCacheTable.c)
 *     HalpIommuFreeDeviceId @ 0x1403CD2B8 (HalpIommuFreeDeviceId.c)
 *     HalpDmaAllocateDomain @ 0x1403CD570 (HalpDmaAllocateDomain.c)
 *     HalpIommuCloneDeviceId @ 0x1403CD7E0 (HalpIommuCloneDeviceId.c)
 *     IommupGetSystemContext @ 0x1403DB0A0 (IommupGetSystemContext.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocatePmcCounterSetEx @ 0x14050ADB0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x14050B600 (HalpFreePmcCounterSet.c)
 *     HalFreeCommonBufferVector @ 0x140511760 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140512EF0 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140514F70 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpIommuBlockDevice @ 0x14051A460 (HalpIommuBlockDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14051A670 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051A824 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x14051AF88 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x14051B094 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x14051E390 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14051FB70 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14051FFF8 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x140521310 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x140521670 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1405226CC (ExtEnvFreePhysicalMemory.c)
 *     IommuCreateAtsDevice @ 0x1405251A0 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140525420 (IommuDeleteAtsDevice.c)
 *     IommuDisableDevicePasid @ 0x140525620 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140525930 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1405263E0 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1405264A0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140527130 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140528160 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x140528320 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405283C0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140528B30 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x140529030 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     HalpIommuCleanupPageTable @ 0x1405294E0 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x140529654 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuDestroyDmarPageTable @ 0x140529724 (HalpIommuDestroyDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x14052AF40 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x14052C0C8 (Amd64InitializeUncoreStatus.c)
 *     Amd64RemoveProfileSource @ 0x14052C660 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x1405346B0 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405346EC (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140534894 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140534970 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140534CBC (HalpBuddyAllocatorSplitNode.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 *     HalpAcpiDetectPiix4Work @ 0x140865300 (HalpAcpiDetectPiix4Work.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140909214 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x140A5228C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x140A522B8 (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140A52D84 (HalpFreeNvsBuffers.c)
 *     HalpMapCR3Ex @ 0x140A54D70 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x140A5A98C (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B1DB14 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140B1DD34 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B1DE58 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B1DEB4 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B4BE3C (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140B4BF10 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x140398F30 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 i; // rbx
  ULONG v5; // r8d
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // ecx
  int *v11; // rdx
  int v12; // r9d
  int *v13; // r8
  bool j; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4DD50);
  if ( (a2 & 0xFFF) == 0 )
  {
    for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
    {
      if ( a2 == *(_QWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 28);
        LODWORD(v6) = 0;
        *(_DWORD *)(i + 28) = 0;
        goto LABEL_3;
      }
    }
  }
  i = *(_QWORD *)(a2 - 16);
  v5 = *(_DWORD *)(a2 - 8);
  v6 = (a2 - 16 - *(_QWORD *)(i + 16)) / 16;
LABEL_3:
  v7 = (unsigned int *)(i + 32);
  RtlClearBits((PRTL_BITMAP)(i + 32), v6, v5);
  *(_DWORD *)(i + 24) = v6;
  v8 = *(_QWORD *)i;
  v9 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v9 != i )
    goto LABEL_35;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *v7;
  if ( !*v7 )
  {
LABEL_13:
    v15 = HalpNPPoolAllocCtx;
    if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) == &HalpNPPoolAllocCtx )
    {
      *(_QWORD *)i = HalpNPPoolAllocCtx;
      *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
      *(_QWORD *)(v15 + 8) = i;
      HalpNPPoolAllocCtx = i;
      i = 0LL;
      goto LABEL_15;
    }
LABEL_35:
    __fastfail(3u);
  }
  if ( v10 <= 1 )
  {
    if ( v10 != 1 || _bittest(*(const signed __int32 **)(i + 40), 0) )
      goto LABEL_13;
    goto LABEL_15;
  }
  v11 = *(int **)(i + 40);
  v12 = *v11;
  v13 = &v11[(unsigned __int64)(v10 - 1) >> 5];
  if ( v11 == v13 )
  {
    if ( (v12 & (0xFFFFFFFF >> (32 - v10))) == 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  for ( j = v12 == 0; ; j = *v11 == 0 )
  {
    if ( !j )
      goto LABEL_13;
    if ( ++v11 == v13 )
      break;
  }
  if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v11) != 0 )
    goto LABEL_13;
LABEL_15:
  KxReleaseSpinLock(&qword_140C4DD50);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = (unsigned int)(v3 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        j = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( j )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v16, (_QWORD *)i);
}

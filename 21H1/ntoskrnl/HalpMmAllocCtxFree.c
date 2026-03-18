/*
 * XREFs of HalpMmAllocCtxFree @ 0x1403764C0
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuFreeDeviceId @ 0x140376A7C (HalpIommuFreeDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403A9028 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6EA0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403B73F0 (HalpAcpiCacheTable.c)
 *     IommupGetSystemContext @ 0x1403C7BF4 (IommupGetSystemContext.c)
 *     HalpIommuCloneDeviceId @ 0x1403EBB80 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403EBCF4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404B92A0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404B9690 (HalpFreePmcCounterSet.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BF528 (HalpDmaDereferenceDomainObject.c)
 *     HalAllocateCommonBufferVector @ 0x1404C03A0 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C0CC0 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C1C78 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C3DA4 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C41C0 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C4248 (HalpIommuGetHardwareDomain.c)
 *     HalpNumaAddRangeProximity @ 0x1404CC840 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404CD9A0 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404CDD98 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404CECE0 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1404CF010 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x1404CFF9C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404CFFDC (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x1404D2B80 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D2E90 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D39C0 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D3A80 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D4710 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D4F90 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D51A0 (IommuDomainDetachDevice.c)
 *     HalpLaDeleteBlt @ 0x1404D5C14 (HalpLaDeleteBlt.c)
 *     HalpLaFreeState @ 0x1404D5D14 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404D5D50 (HalpLaInitializeState.c)
 *     HalpLapDeleteSubtree @ 0x1404D6140 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404D61FC (HalpLapSplitNode.c)
 *     HalpIommuCleanupPageTable @ 0x1404D63A0 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D650C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404D8010 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404D8B70 (Amd64RemoveProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140860044 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14086031C (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x14086074C (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x14099394C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x1409939CC (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140994528 (HalpFreeNvsBuffers.c)
 *     HalpMmFreeTiledMemoryMap @ 0x1409957C0 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x140995910 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x14099C020 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5E10C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A5E244 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A5E388 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A5E4AC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A5E508 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8A7F4 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A8A8C8 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A2A10 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
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
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4B990);
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
    if ( !_bittest(*(const signed __int32 **)(i + 40), 0) )
      goto LABEL_15;
    goto LABEL_13;
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
  KxReleaseSpinLock(&qword_140C4B990);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = (unsigned int)(v3 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        j = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( j )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( i )
    return HalpMmAllocCtxBufferCleanup(v16, i);
  return result;
}

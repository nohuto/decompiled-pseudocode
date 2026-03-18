/*
 * XREFs of HalpMmAllocCtxFree @ 0x1403772D0
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036ABB0 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuFreeDeviceId @ 0x14037788C (HalpIommuFreeDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403B00E8 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B7CD0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403B8220 (HalpAcpiCacheTable.c)
 *     IommupGetSystemContext @ 0x1403C8A04 (IommupGetSystemContext.c)
 *     HalpIommuCloneDeviceId @ 0x1403ECAB8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403ECBE0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404B9980 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404B9D70 (HalpFreePmcCounterSet.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BFC08 (HalpDmaDereferenceDomainObject.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C1130 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C20E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C4214 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C4674 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C46FC (HalpIommuGetHardwareDomain.c)
 *     HalpNumaAddRangeProximity @ 0x1404CCCF0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404CDE50 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404CE248 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404CF190 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1404CF4C0 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x1404D044C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D048C (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x1404D3030 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D3340 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D3E70 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D3F30 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D4BC0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D5440 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D5650 (IommuDomainDetachDevice.c)
 *     HalpLaDeleteBlt @ 0x1404D6124 (HalpLaDeleteBlt.c)
 *     HalpLaFreeState @ 0x1404D6224 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404D6260 (HalpLaInitializeState.c)
 *     HalpLapDeleteSubtree @ 0x1404D6650 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404D670C (HalpLapSplitNode.c)
 *     HalpIommuCleanupPageTable @ 0x1404D68B0 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D6A1C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404D8520 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404D9080 (Amd64RemoveProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140861394 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140861620 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140861A48 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x140994F8C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099500C (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140995B68 (HalpFreeNvsBuffers.c)
 *     HalpMmFreeTiledMemoryMap @ 0x140996B90 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x140996CE0 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x14099D7C0 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A5D2E4 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A5D428 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A5D54C (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A5D5A8 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A89D84 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A89E58 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A31A0 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4B830);
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
  KxReleaseSpinLock(&qword_140C4B830);
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

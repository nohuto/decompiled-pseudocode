/*
 * XREFs of HalpMmAllocCtxFree @ 0x140378FB0
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036D370 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuFreeDeviceId @ 0x14037956C (HalpIommuFreeDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403AD418 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BB2E0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403BB830 (HalpAcpiCacheTable.c)
 *     IommupGetSystemContext @ 0x1403CC184 (IommupGetSystemContext.c)
 *     HalpIommuCloneDeviceId @ 0x1403F00C8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403F01F0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BEAB0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BEEA0 (HalpFreePmcCounterSet.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C6260 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuBlockDevice @ 0x1404C90A0 (HalpIommuBlockDevice.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C934C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C97AC (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1EA0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404D33F8 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404D4340 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1404D4670 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D563C (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x1404D81D0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D84E0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D9010 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D9DA0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA620 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA830 (IommuDomainDetachDevice.c)
 *     HalpLaDeleteBlt @ 0x1404DB304 (HalpLaDeleteBlt.c)
 *     HalpLaFreeState @ 0x1404DB404 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404DB440 (HalpLaInitializeState.c)
 *     HalpLapDeleteSubtree @ 0x1404DB830 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404DB8EC (HalpLapSplitNode.c)
 *     HalpIommuCleanupPageTable @ 0x1404DBA90 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DE260 (Amd64RemoveProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x1409992DC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140999EB8 (HalpFreeNvsBuffers.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099B150 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099B2A0 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A2010 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A66C64 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A66DA8 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A66ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A66F28 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8D8F4 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A8D9C8 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A5F70 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4B030);
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
  KxReleaseSpinLock(&qword_140C4B030);
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

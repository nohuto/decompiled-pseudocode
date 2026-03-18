/*
 * XREFs of HalpMmAllocCtxFree @ 0x140379260
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuFreeDeviceId @ 0x14037981C (HalpIommuFreeDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403B26D8 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BA770 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403BACC0 (HalpAcpiCacheTable.c)
 *     IommupGetSystemContext @ 0x1403CB644 (IommupGetSystemContext.c)
 *     HalpIommuCloneDeviceId @ 0x1403EF5E8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403EF710 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BCEA0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BD290 (HalpFreePmcCounterSet.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C3128 (HalpDmaDereferenceDomainObject.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C4650 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C5608 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuBlockDevice @ 0x1404C7490 (HalpIommuBlockDevice.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C773C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C7B9C (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7C24 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuUnblockDevice @ 0x1404C84B0 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x1404D0290 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404D13F0 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404D17E8 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404D2730 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1404D2A60 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x1404D39EC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D3A2C (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x1404D65C0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D68D0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D7400 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D74C0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D8150 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D89D0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D8BE0 (IommuDomainDetachDevice.c)
 *     HalpLaDeleteBlt @ 0x1404D96B4 (HalpLaDeleteBlt.c)
 *     HalpLaFreeState @ 0x1404D97B4 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404D97F0 (HalpLaInitializeState.c)
 *     HalpLapDeleteSubtree @ 0x1404D9BE0 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404D9C9C (HalpLapSplitNode.c)
 *     HalpIommuCleanupPageTable @ 0x1404D9E40 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404D9FAC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404DBAB0 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DC610 (Amd64RemoveProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140866DB4 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140867040 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140867468 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x14099B0EC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099B16C (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x14099BCC8 (HalpFreeNvsBuffers.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099CBD0 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099CD20 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A38C0 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A6450C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A64644 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A64788 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A648AC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A64908 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8FA94 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A8FB68 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A5560 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4B8B0);
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
  KxReleaseSpinLock(&qword_140C4B8B0);
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

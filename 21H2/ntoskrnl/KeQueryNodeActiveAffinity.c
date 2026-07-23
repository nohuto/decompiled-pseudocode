/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1402942D0
 * Callers:
 *     MiCreateColorAnchors @ 0x1402936E4 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x140293810 (MiGetClosestNodeWithProcessors.c)
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1402F7538 (PnpSetDeviceAffinityThread.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x14036BCFC (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403C1890 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8860 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x1405602FC (MiComputeIdealDpcGang.c)
 *     ExProcessorCounterSetCallback @ 0x140642A80 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x1406A7338 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406A7700 (ExpQueryNumaProcessorMap.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407C2654 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407C2C08 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2CB8 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x1409A0CB0 (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6F2CC (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     <none>
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v3 = KeNodeBlock[NodeNumber];
    if ( Affinity )
    {
      Affinity->Group = *(_WORD *)(v3 + 144);
      Affinity->Mask = *(_QWORD *)(v3 + 136);
    }
    if ( Count )
    {
      v4 = *(_QWORD *)(v3 + 136) - ((*(_QWORD *)(v3 + 136) >> 1) & 0x5555555555555555LL);
      *Count = (0x101010101010101LL
              * (((v4 & 0x3333333333333333LL)
                + ((v4 >> 2) & 0x3333333333333333LL)
                + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
  }
}

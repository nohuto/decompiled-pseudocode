/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x14033F590
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1402045F8 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     MiCreateColorAnchors @ 0x1403379F0 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x140337B1C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x14036B89C (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403C0C10 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C7930 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x14055E5EC (MiComputeIdealDpcGang.c)
 *     ExpNodeCreateSystemThread @ 0x1406EDF4C (ExpNodeCreateSystemThread.c)
 *     ExProcessorCounterSetCallback @ 0x1406F8CE0 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F9D80 (ExpQueryNumaProcessorMap.c)
 *     ExpWorkQueueManagerThread @ 0x1407A6A90 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407BDD34 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407BE2E8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407BE398 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x1409A255C (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A7134C (MiComputeMemoryNodeProcessorAssignments.c)
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

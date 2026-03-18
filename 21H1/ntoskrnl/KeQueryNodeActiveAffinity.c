/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140328260
 * Callers:
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1402E0D28 (PnpSetDeviceAffinityThread.c)
 *     MiCreateColorAnchors @ 0x14031ECF0 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x14031EE1C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x140368EFC (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403BE600 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C3FD0 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x14055A5CC (MiComputeIdealDpcGang.c)
 *     ExpNodeCreateSystemThread @ 0x140655448 (ExpNodeCreateSystemThread.c)
 *     ExProcessorCounterSetCallback @ 0x1406F0210 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F0C54 (ExpQueryNumaProcessorMap.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407ACC94 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407AD248 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407AD2F8 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x14099ACBC (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6A7E0 (MiComputeMemoryNodeProcessorAssignments.c)
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

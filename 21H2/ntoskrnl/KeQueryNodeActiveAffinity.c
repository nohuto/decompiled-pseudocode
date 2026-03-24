/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1402E2F80
 * Callers:
 *     ExpWorkerThread @ 0x140241E80 (ExpWorkerThread.c)
 *     MiCreateColorAnchors @ 0x1402E2394 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402E24C0 (MiGetClosestNodeWithProcessors.c)
 *     PnpSetDeviceAffinityThread @ 0x140361E70 (PnpSetDeviceAffinityThread.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x14036BB4C (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403C1460 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C86C0 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x1405600BC (MiComputeIdealDpcGang.c)
 *     ExProcessorCounterSetCallback @ 0x14064DC60 (ExProcessorCounterSetCallback.c)
 *     ExpNodeCreateSystemThread @ 0x1406D0058 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406D0420 (ExpQueryNumaProcessorMap.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF840 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407C2134 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407C26E8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2798 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x14099FD80 (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6E2CC (MiComputeMemoryNodeProcessorAssignments.c)
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

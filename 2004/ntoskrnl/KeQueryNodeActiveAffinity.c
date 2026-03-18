/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1402DE440
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140271698 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     MiCreateColorAnchors @ 0x14035C800 (MiCreateColorAnchors.c)
 *     MiGetClosestNodeWithProcessors @ 0x14035C92C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x1403698BC (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403BF590 (PpmParkRegisterParking.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C4F40 (ExAllocateCacheAwarePushLock.c)
 *     MiComputeIdealDpcGang @ 0x14055AC1C (MiComputeIdealDpcGang.c)
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1406A6FC4 (ExpQueryNumaProcessorMap.c)
 *     ExpNodeCreateSystemThread @ 0x1406CFAA8 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerThread @ 0x140797760 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1407AFDF4 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407B03A8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0458 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 *     KiConfigureSchedulingInformation @ 0x14099C45C (KiConfigureSchedulingInformation.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6AA40 (MiComputeMemoryNodeProcessorAssignments.c)
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

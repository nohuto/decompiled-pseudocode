/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140263730
 * Callers:
 *     MiCreatePageChains @ 0x140263558 (MiCreatePageChains.c)
 *     MiGetClosestNodeWithProcessors @ 0x14026367C (MiGetClosestNodeWithProcessors.c)
 *     PnpSetDeviceAffinityThread @ 0x1402D301C (PnpSetDeviceAffinityThread.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x140378C44 (KeQueryNodeActiveDpcGangAffinity.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 *     MiComputeIdealDpcGang @ 0x1405BFFD0 (MiComputeIdealDpcGang.c)
 *     ExpNodeCreateSystemThread @ 0x1406F2278 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F2350 (ExpQueryNumaProcessorMap.c)
 *     ExpPartitionStart @ 0x140851C58 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1408521A4 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140852250 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B2A220 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x140264270 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14026428C (KiQuerySubNodeActiveAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity, Count, 0LL);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, v4, v5);
  }
}

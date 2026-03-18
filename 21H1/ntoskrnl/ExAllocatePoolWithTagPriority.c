/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14024FDE0
 * Callers:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140252B80 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_0 @ 0x140281F38 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140307EE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePool_1 @ 0x140316D0C (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403C6B0C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140501324 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x14050139C (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140502C10 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x140502D5C (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140502DD0 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_4 @ 0x1405048E4 (IopVerifierExAllocatePool_4.c)
 *     IopVerifierExAllocatePool_5 @ 0x1405051A8 (IopVerifierExAllocatePool_5.c)
 *     IopQueryNameInternal @ 0x1405DABE4 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14064406C (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C16C4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x1409C3E50 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D2040 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D2414 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x1409D267C (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409D8C88 (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x1409DD120 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409E1CC0 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x14024FE80 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x140252360 (MmResourcesAvailable.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  char v4; // bl
  __int64 v8; // r9

  v4 = Priority;
  if ( Priority != HighPoolPriority
    && (PoolType & 2) == 0
    && !(unsigned int)MmResourcesAvailable(PoolType, NumberOfBytes, (unsigned int)Priority)
    && NumberOfBytes > 0xFE0 )
  {
    return 0LL;
  }
  v8 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  LODWORD(v8) = v8 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)PoolType, NumberOfBytes, Tag, v8, (v4 & 8) != 0);
}

/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140211F50
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140211880 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_0 @ 0x14029FE88 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140317034 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePool_1 @ 0x140325470 (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CA55C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x14050524C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x1405052C4 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140506C70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x140506DBC (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140506E30 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_4 @ 0x140508944 (IopVerifierExAllocatePool_4.c)
 *     IopVerifierExAllocatePool_5 @ 0x140509208 (IopVerifierExAllocatePool_5.c)
 *     IopQueryNameInternal @ 0x1406361C4 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070AE4C (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool3 @ 0x1409B7340 (ExAllocatePool3.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C76E4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x1409C9E80 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D80C0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D8494 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x1409D86FC (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409DED08 (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x1409E31A0 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409E7D40 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140211FF0 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x1402144D0 (MmResourcesAvailable.c)
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

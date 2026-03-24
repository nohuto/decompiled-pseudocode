/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14033C0E0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022BCD0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x1402B6C78 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402B7B3C (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1402C5D6C (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140351F10 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CAF28 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506DCC (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x140506E44 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405087A0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405088EC (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140508960 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_4 @ 0x14050A474 (IopVerifierExAllocatePool_4.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AD38 (IopVerifierExAllocatePool_5.c)
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406D4C3C (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C46D4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x1409C6E70 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D50B0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D5484 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x1409D56EC (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409DBCF8 (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x1409E0190 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409E4D30 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x14033C180 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14033E660 (MmResourcesAvailable.c)
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

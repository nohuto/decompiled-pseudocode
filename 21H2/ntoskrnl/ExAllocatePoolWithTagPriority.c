/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140346E30
 * Callers:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x140234E58 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140235D1C (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x14024454C (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14035CC60 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CB09C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506D4C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x140506DC4 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405089DC (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x140508B28 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140508B9C (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_4 @ 0x14050A6B4 (IopVerifierExAllocatePool_4.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     IopQueryNameInternal @ 0x14068A174 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406ABF1C (IopAllocateMiniCompletionPacket.c)
 *     ExAllocatePool3 @ 0x1409B5270 (ExAllocatePool3.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C56D4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D60B0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D6484 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x1409D66EC (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409DCCF8 (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x1409E1190 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409E5D30 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140346ED0 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x1403493B0 (MmResourcesAvailable.c)
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

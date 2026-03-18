/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14028C680
 * Callers:
 *     IopVerifierExAllocatePool @ 0x140228EE8 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140345CE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePool_1 @ 0x1403547B0 (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403C791C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140501974 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x1405019EC (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140503260 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405033AC (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140503420 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopVerifierExAllocatePool_4 @ 0x140504F34 (IopVerifierExAllocatePool_4.c)
 *     IopVerifierExAllocatePool_5 @ 0x1405057F8 (IopVerifierExAllocatePool_5.c)
 *     IopAllocateMiniCompletionPacket @ 0x14060EE3C (IopAllocateMiniCompletionPacket.c)
 *     IopQueryNameInternal @ 0x140660EE4 (IopQueryNameInternal.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C16D4 (IoVerifierCheckForSettingsChange.c)
 *     VfInitVerifierComponents @ 0x1409C3E60 (VfInitVerifierComponents.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D20A0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D2474 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x1409D26DC (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x1409D8CE8 (VfKeCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x1409DD180 (VfPoolInitPhase0.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409E1D20 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x14028C720 (ExpAllocatePoolWithTagFromNode.c)
 *     MmResourcesAvailable @ 0x14028EC00 (MmResourcesAvailable.c)
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

/*
 * XREFs of ExAllocatePoolMm @ 0x140248040
 * Callers:
 *     MiAllocateAccessLog @ 0x140247E40 (MiAllocateAccessLog.c)
 *     MiZeroPageCalibrate @ 0x1403A7530 (MiZeroPageCalibrate.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054A338 (MiLockWorkingSetForLargeMapping.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x14028C720 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B1010 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, unsigned int a4)
{
  char v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+31h] [rbp-17h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF

  PoolType = NonPagedPool;
  v9 = 0;
  v8 = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v9, (__int64)&v8) < 0 )
    return 0LL;
  if ( v9 )
    return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
  return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)PoolType, a2, a3, a4, v8 != 0);
}

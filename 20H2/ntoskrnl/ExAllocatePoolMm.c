/*
 * XREFs of ExAllocatePoolMm @ 0x14022D3E0
 * Callers:
 *     MiAllocateAccessLog @ 0x14022D1E0 (MiAllocateAccessLog.c)
 *     MiZeroPageCalibrate @ 0x1403A9F18 (MiZeroPageCalibrate.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054DD08 (MiLockWorkingSetForLargeMapping.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiAddSecureEntry @ 0x140623880 (MiAddSecureEntry.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140211FF0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B70D0 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, int a4)
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
  return (PVOID)ExpAllocatePoolWithTagFromNode(PoolType, a2, a3, a4, v8 != 0);
}

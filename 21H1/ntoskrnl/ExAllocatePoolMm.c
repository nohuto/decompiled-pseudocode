/*
 * XREFs of ExAllocatePoolMm @ 0x1402A1070
 * Callers:
 *     MiAllocateAccessLog @ 0x1402A0E70 (MiAllocateAccessLog.c)
 *     MiZeroPageCalibrate @ 0x1403AD950 (MiZeroPageCalibrate.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140549CE8 (MiLockWorkingSetForLargeMapping.c)
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14024FE80 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B10D0 (ExpPoolFlagsToPoolType.c)
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

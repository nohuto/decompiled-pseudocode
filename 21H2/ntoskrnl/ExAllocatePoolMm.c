/*
 * XREFs of ExAllocatePoolMm @ 0x14030B860
 * Callers:
 *     MiGetHugePageToZero @ 0x140205FD4 (MiGetHugePageToZero.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x1403D3CA0 (MiCreateZeroThreadContext.c)
 *     MiZeroPageCalibrate @ 0x1403D3EE0 (MiZeroPageCalibrate.c)
 *     MiComputeRunTimeZeroComparisons @ 0x1403D4120 (MiComputeRunTimeZeroComparisons.c)
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403D9FA8 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1405B06E0 (MiLockWorkingSetForLargeMapping.c)
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall ExAllocatePoolMm(__int64 a1, SIZE_T a2, ULONG a3, unsigned int a4)
{
  char v4; // r11
  char v5; // bl
  int v9; // r9d
  __int64 v10; // rax
  int v11; // edx
  POOL_TYPE v12; // r10d
  int v14; // edx
  int v15; // r8d
  int v16; // edx

  v4 = 0;
  v5 = 0;
  if ( (a1 & 0xFFFFF800) != 0 )
    return 0LL;
  v9 = 0;
  v10 = a1 & 0x1C0;
  if ( v10 != 64 )
  {
    if ( v10 == 128 )
    {
      v11 = 0;
      goto LABEL_4;
    }
    if ( v10 == 256 )
    {
      v11 = 1;
      if ( (a1 & 0x10) != 0 )
        v11 = -2147483647;
      goto LABEL_4;
    }
    return 0LL;
  }
  v11 = 512;
LABEL_4:
  if ( (a1 & 4) != 0 )
    v11 |= 0x20u;
  v12 = v11 | 0x400;
  if ( (a1 & 2) != 0 )
    v12 = v11;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v14 = v12 | 4;
    if ( (a1 & 8) == 0 )
      v14 = v12;
    v15 = v14 | 0x80;
    if ( (a1 & 0x200) == 0 )
      v15 = v14;
    v16 = v15 | 0x40;
    if ( (a1 & 0x400) == 0 )
      v16 = v15;
    v12 = v16;
    if ( (a1 & 1) != 0 )
    {
      v12 = v16 | 8;
      v4 = 1;
      if ( (a1 & 0x20) != 0 )
        v12 = v16;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v12 = v16 | 0x10;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      v5 = 1;
  }
  if ( v5 )
    v9 = 1;
  if ( v4 )
    return ExAllocatePoolWithQuotaTag(v12, a2, a3);
  else
    return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)v12, a2, a3, a4, v9);
}

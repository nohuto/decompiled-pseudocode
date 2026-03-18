/*
 * XREFs of CcWriteBehind @ 0x14024A910
 * Callers:
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140249D40 (CcCachemapUninitWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403154B0 (CcWaitForUninitializeCacheMap.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2)
{
  void *v3; // rsi
  __int64 Partition; // rbx
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD v9[18]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+100h] [rbp+77h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  Partition = CcGetPartition(a1);
  v6 = CcAllocateWorkQueueEntry(Partition, &v10);
  v7 = (_QWORD *)v10;
  if ( v6 < 0
    || (*(_BYTE *)(v10 + 120) = 2,
        v7[1] = 0LL,
        *v7 = 0LL,
        v7[2] = a1,
        v7[3] = a2,
        *(_DWORD *)(Partition + 960) >= *(_DWORD *)(Partition + 200))
    || *(_QWORD *)(Partition + 928)
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || *(_BYTE *)(Partition + 966)
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u), (v3 = PoolWithTag) == 0LL) )
  {
    memset(v9, 0, 0x88uLL);
    if ( !v7 )
    {
      v9[16] = Partition;
      v7 = v9;
      LOBYTE(v9[15]) = 2;
      v9[1] = 0LL;
      v9[0] = 0LL;
      v9[2] = a1;
      v9[3] = a2;
      LOBYTE(v9[7]) = 0;
    }
    *((_BYTE *)v7 + 56) = 0;
    CcWriteBehindInternal(v7);
    if ( v7 == v9 )
      v7 = 0LL;
  }
  else
  {
    PoolWithTag[7] = Partition;
    *((_DWORD *)PoolWithTag + 8) = 1;
    *((_BYTE *)v7 + 56) = 1;
    v7[6] = v7 + 5;
    v7[5] = v7 + 5;
    *((_WORD *)v7 + 16) = 1;
    *((_BYTE *)v7 + 34) = 6;
    *((_DWORD *)v7 + 9) = 0;
    PoolWithTag[2] = CcWriteBehindInternal;
    PoolWithTag[3] = v7;
    *PoolWithTag = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)PoolWithTag);
    KeWaitForSingleObject(v7 + 4, Executive, 0, 0, 0LL);
  }
  if ( v7 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v7);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x71576343u);
}

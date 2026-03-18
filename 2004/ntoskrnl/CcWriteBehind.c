/*
 * XREFs of CcWriteBehind @ 0x1402C5514
 * Callers:
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402C72E0 (CcCachemapUninitWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcAllocateWorkQueueEntry @ 0x1402C5B84 (CcAllocateWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402C7E8C (ExQueueWorkItemToPartition.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void *v5; // rsi
  __int64 Partition; // rbx
  int v8; // eax
  _QWORD *v9; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD v11[18]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+100h] [rbp+77h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  Partition = CcGetPartition((_QWORD *)a1, a2, a3, a4);
  v8 = CcAllocateWorkQueueEntry(Partition, &v12);
  v9 = (_QWORD *)v12;
  if ( v8 < 0
    || (*(_BYTE *)(v12 + 120) = 2,
        v9[1] = 0LL,
        *v9 = 0LL,
        v9[2] = a1,
        v9[3] = a2,
        *(_DWORD *)(Partition + 960) >= *(_DWORD *)(Partition + 200))
    || *(_QWORD *)(Partition + 928)
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || *(_BYTE *)(Partition + 966)
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u), (v5 = PoolWithTag) == 0LL) )
  {
    memset(v11, 0, 0x88uLL);
    if ( !v9 )
    {
      v11[16] = Partition;
      v9 = v11;
      LOBYTE(v11[15]) = 2;
      v11[1] = 0LL;
      v11[0] = 0LL;
      v11[2] = a1;
      v11[3] = a2;
      LOBYTE(v11[7]) = 0;
    }
    *((_BYTE *)v9 + 56) = 0;
    CcWriteBehindInternal((__int64)v9);
    if ( v9 == v11 )
      v9 = 0LL;
  }
  else
  {
    PoolWithTag[7] = Partition;
    *((_DWORD *)PoolWithTag + 8) = 1;
    *((_BYTE *)v9 + 56) = 1;
    v9[6] = v9 + 5;
    v9[5] = v9 + 5;
    *((_WORD *)v9 + 16) = 1;
    *((_BYTE *)v9 + 34) = 6;
    *((_DWORD *)v9 + 9) = 0;
    PoolWithTag[2] = CcWriteBehindInternal;
    PoolWithTag[3] = v9;
    *PoolWithTag = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)PoolWithTag);
    KeWaitForSingleObject(v9 + 4, Executive, 0, 0, 0LL);
  }
  if ( v9 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x71576343u);
}

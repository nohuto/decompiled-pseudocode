/*
 * XREFs of CcWriteBehind @ 0x140300EB0
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x1402369D0 (CcWaitForUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402FE5F0 (CcCachemapUninitWorkerThread.c)
 * Callees:
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, char a3)
{
  void *v4; // rsi
  __int64 Partition; // rbx
  int v7; // eax
  _QWORD *v8; // rdi
  char v9; // dl
  char v10; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD v12[18]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+100h] [rbp+77h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  Partition = CcGetPartition(a1, a2, a3);
  v7 = CcAllocateWorkQueueEntry(Partition, &v13);
  v8 = (_QWORD *)v13;
  if ( v7 < 0
    || (*(_BYTE *)(v13 + 120) = 2,
        v8[1] = 0LL,
        *v8 = 0LL,
        v8[2] = a1,
        v8[3] = a2,
        *(_DWORD *)(Partition + 960) >= *(_DWORD *)(Partition + 200))
    || *(_QWORD *)(Partition + 928)
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || *(_BYTE *)(Partition + 966)
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u), (v4 = PoolWithTag) == 0LL) )
  {
    memset(v12, 0, 0x88uLL);
    if ( !v8 )
    {
      v12[16] = Partition;
      v8 = v12;
      LOBYTE(v12[15]) = 2;
      v12[1] = 0LL;
      v12[0] = 0LL;
      v12[2] = a1;
      v12[3] = a2;
      LOBYTE(v12[7]) = 0;
    }
    *((_BYTE *)v8 + 56) = 0;
    CcWriteBehindInternal((__int64)v8, v9, v10);
    if ( v8 == v12 )
      v8 = 0LL;
  }
  else
  {
    PoolWithTag[7] = Partition;
    *((_DWORD *)PoolWithTag + 8) = 1;
    *((_BYTE *)v8 + 56) = 1;
    v8[6] = v8 + 5;
    v8[5] = v8 + 5;
    *((_WORD *)v8 + 16) = 1;
    *((_BYTE *)v8 + 34) = 6;
    *((_DWORD *)v8 + 9) = 0;
    PoolWithTag[2] = CcWriteBehindInternal;
    PoolWithTag[3] = v8;
    *PoolWithTag = 0LL;
    ExQueueWorkItemToPartition((ULONG_PTR)PoolWithTag);
    KeWaitForSingleObject(v8 + 4, Executive, 0, 0, 0LL);
  }
  if ( v8 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}

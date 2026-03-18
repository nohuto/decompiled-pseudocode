/*
 * XREFs of CcWriteBehind @ 0x140275FC0
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14023AFD8 (CcWaitForUninitializeCacheMap.c)
 *     CcCachemapUninitWorkerThread @ 0x140275000 (CcCachemapUninitWorkerThread.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcAllocateWorkQueueEntry @ 0x1402768E4 (CcAllocateWorkQueueEntry.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcGetCurrentNumaNode @ 0x14029E3A0 (CcGetCurrentNumaNode.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140349670 (ExAllocatePoolWithTagFromNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  void *v4; // r14
  __int64 CurrentNumaNode; // r15
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  ULONG_PTR PoolWithTagFromNode; // rax
  _QWORD v15[20]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+108h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 528);
  v4 = 0LL;
  v16 = 0LL;
  CurrentNumaNode = a3;
  if ( !a3 )
    CurrentNumaNode = CcGetCurrentNumaNode(v3, a1);
  v8 = *(_QWORD *)(a1 + 592);
  v9 = CcAllocateWorkQueueEntry(v3, v8, CurrentNumaNode, &v16);
  v11 = (_QWORD *)v16;
  if ( v9 < 0 )
    goto LABEL_5;
  *(_BYTE *)(v16 + 128) = 2;
  v11[1] = 0LL;
  *v11 = 0LL;
  v11[2] = a1;
  v11[3] = a2;
  if ( !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v3, 0LL, v10) )
    goto LABEL_5;
  if ( *(_QWORD *)(v3 + 1192) == v12
    && *(_DWORD *)(a1 + 516) == (_DWORD)v12
    && (*(_DWORD *)(a1 + 152) & 0x10000) == 0
    && *(_BYTE *)(v3 + 1230) == (_BYTE)v12
    && (v13 = *(unsigned int *)(CurrentNumaNode + 24),
        LODWORD(v13) = v13 | 0x80000000,
        PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(512LL, 80LL, 1901552451LL, v13),
        (v4 = (void *)PoolWithTagFromNode) != 0LL) )
  {
    *(_QWORD *)(PoolWithTagFromNode + 56) = v3;
    *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
    *(_QWORD *)(PoolWithTagFromNode + 64) = v8;
    *(_QWORD *)(PoolWithTagFromNode + 72) = CurrentNumaNode;
    *((_BYTE *)v11 + 56) = 1;
    v11[6] = v11 + 5;
    v11[5] = v11 + 5;
    *((_WORD *)v11 + 16) = 1;
    *((_BYTE *)v11 + 34) = 6;
    *((_DWORD *)v11 + 9) = 0;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcWriteBehindInternal;
    *(_QWORD *)(PoolWithTagFromNode + 24) = v11;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    ExQueueWorkItemToPartition(PoolWithTagFromNode);
    KeWaitForSingleObject(v11 + 4, Executive, 0, 0, 0LL);
  }
  else
  {
LABEL_5:
    memset(v15, 0, sizeof(v15));
    if ( !v11 )
    {
      v15[17] = v3;
      v11 = v15;
      v15[18] = v8;
      v15[1] = 0LL;
      v15[0] = 0LL;
      LOBYTE(v15[7]) = 0;
      v15[19] = CurrentNumaNode;
      LOBYTE(v15[16]) = 2;
      v15[2] = a1;
      v15[3] = a2;
    }
    *((_BYTE *)v11 + 56) = 0;
    CcWriteBehindInternal(v11);
    if ( v11 == v15 )
      v11 = 0LL;
  }
  if ( v11 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v11);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}

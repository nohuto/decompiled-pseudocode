/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x140533AC8
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x140562F04 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 */

void __fastcall MiReleasePartitionHugeIoSpace(_QWORD *BugCheckParameter2)
{
  __int64 v1; // r8
  _QWORD *v3; // rsi
  unsigned __int64 **v4; // rdi
  unsigned __int64 *v5; // rbp
  _QWORD **v6; // r14
  _QWORD *v7; // rdx
  bool v8; // r8
  _QWORD *v9; // rax
  ULONG_PTR v10; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = BugCheckParameter2[771] << 18;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = **(_QWORD ***)(BugCheckParameter2[22] + 56LL);
  if ( v1 )
    MiAllocatePartitionPhysicalPages((_DWORD)BugCheckParameter2, (_DWORD)v3, v1, 0, 769, 1);
  v4 = (unsigned __int64 **)(BugCheckParameter2 + 612);
  if ( BugCheckParameter2[612] )
  {
    KeAcquireInStackQueuedSpinLock(v3 + 516, &LockHandle);
    v5 = *v4;
    if ( !*v4 )
      goto LABEL_14;
    v6 = (_QWORD **)(v3 + 612);
    while ( 1 )
    {
      RtlAvlRemoveNode(BugCheckParameter2 + 612, v5);
      v7 = *v6;
      v8 = 0;
      if ( !*v6 )
        goto LABEL_13;
      while ( (v5[3] & 0x3FFFF) < (v7[3] & 0x3FFFFuLL) )
      {
        v9 = (_QWORD *)*v7;
        if ( !*v7 )
          goto LABEL_13;
LABEL_11:
        v7 = v9;
      }
      v9 = (_QWORD *)v7[1];
      if ( v9 )
        goto LABEL_11;
      v8 = 1;
LABEL_13:
      RtlAvlInsertNodeEx(v3 + 612, (unsigned __int64)v7, v8, v5);
      --BugCheckParameter2[53];
      ++v3[53];
      v5 = *v4;
      if ( !*v4 )
      {
LABEL_14:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        break;
      }
    }
  }
  v10 = BugCheckParameter2[53];
  if ( v10 )
    KeBugCheckEx(0x1Au, 0x30000003uLL, (ULONG_PTR)BugCheckParameter2, v10, BugCheckParameter2[771]);
}

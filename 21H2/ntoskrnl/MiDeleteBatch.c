/*
 * XREFs of MiDeleteBatch @ 0x1402DCCA0
 * Callers:
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F4934 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // r14
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  char v18; // r9
  char *v19; // rsi
  __int64 v20; // rax
  char v21; // r8
  volatile signed __int64 *v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  unsigned __int8 i; // bl
  unsigned __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v1 )
    return 0LL;
  v4 = 0LL;
  v31 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(qword_140C4E688
                 + 8
                 * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v31) >> 12) & 0xFFFFFFFFFLL)
                               - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 7520);
  KxAcquireQueuedSpinLock(&LockHandle, v5 + 7520, v6, v7);
  v8 = 0;
  v9 = 0x3FFFFFFFFFFFFFFFLL;
  if ( *a1 )
  {
    v10 = 0xFFFFFA8000000000uLL;
    v11 = 0xFFFFFA8000000010uLL;
    do
    {
      v12 = *(_QWORD *)&a1[8 * v8 + 16];
      v31 = v12;
      if ( (unsigned __int64)&v31 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
          v15 = v12 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v12;
          v12 = v15;
          if ( (v14 & 0x42) != 0 )
            v12 = v15;
        }
      }
      v16 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
      v17 = v16 + v10;
      v18 = *(_BYTE *)(v16 - 0x57FFFFFFFDELL);
      v19 = (char *)(v16 - 0x57FFFFFFFDELL);
      if ( (v18 & 7) != 6 )
        MiBadShareCount(v17);
      v20 = 0LL;
      if ( (v31 & 0x42) != 0 && (v18 & 0x10) == 0 )
      {
        v21 = *(_BYTE *)(v16 - 0x57FFFFFFFDELL);
        if ( (*(_DWORD *)(v16 + v11) & 0x400LL) == 0 && (v18 & 8) == 0 )
        {
          v20 = MiCapturePageFileInfoInline((unsigned __int64 *)(v16 + v11), 1, 0);
          v21 = *v19;
          v9 = 0x3FFFFFFFFFFFFFFFLL;
        }
        *v19 = v21 | 0x10;
      }
      *(_QWORD *)&a1[8 * v8 + 16] = v20;
      v22 = (volatile signed __int64 *)(v16 - 0x57FFFFFFFE8LL);
      v23 = *v22 ^ v9 & (*v22 ^ (*v22 - 1));
      *v22 = v23;
      if ( (v23 & v9) == 0 )
      {
        if ( (unsigned int)MiPfnShareCountIsZero(v17, 1LL) == 3 )
        {
          v24 = MI_PFN_IS_PROTO(v17);
          v9 = 0x3FFFFFFFFFFFFFFFLL;
          if ( !v24 )
            ++v4;
        }
        else
        {
          v9 = 0x3FFFFFFFFFFFFFFFLL;
        }
      }
      _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
      ++v8;
      v11 = 0xFFFFFA8000000010uLL;
      v10 = 0xFFFFFA8000000000uLL;
    }
    while ( v8 < *a1 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v25 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v25 + 34) & 7) != 6 || (v26 = *a1, (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v26) )
    MiBadShareCount(v25);
  *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) - v26)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v28 = *(_QWORD *)&a1[8 * i + 16];
    if ( v28 )
      MiReleasePageFileInfo(v5, v28, 1);
  }
  result = v4;
  *a1 = 0;
  return result;
}

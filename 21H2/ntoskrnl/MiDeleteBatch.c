/*
 * XREFs of MiDeleteBatch @ 0x140238450
 * Callers:
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
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
  unsigned __int8 v7; // r14
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  char v17; // r9
  char *v18; // rsi
  __int64 v19; // rax
  char v20; // r8
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  unsigned __int8 i; // bl
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v1 )
    return 0LL;
  v4 = 0LL;
  v30 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(qword_140C4E648
                 + 8
                 * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v30) >> 12) & 0xFFFFFFFFFLL)
                               - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 7520);
  KxAcquireQueuedSpinLock(&LockHandle, v5 + 7520, v6);
  v7 = 0;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( *a1 )
  {
    v9 = 0xFFFFFA8000000000uLL;
    v10 = 0xFFFFFA8000000010uLL;
    do
    {
      v11 = *(_QWORD *)&a1[8 * v7 + 16];
      v30 = v11;
      if ( (unsigned __int64)&v30 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v30 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v30, v11, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFFA8000000000uLL)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v30 >> 3) & 0x1FF));
          v14 = v11 | 0x20;
          if ( (v13 & 0x20) == 0 )
            v14 = v11;
          v11 = v14;
          if ( (v13 & 0x42) != 0 )
            v11 = v14;
        }
      }
      v15 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL);
      v16 = v15 + v9;
      v17 = *(_BYTE *)(v15 - 0x57FFFFFFFDELL);
      v18 = (char *)(v15 - 0x57FFFFFFFDELL);
      if ( (v17 & 7) != 6 )
        MiBadShareCount(v16);
      v19 = 0LL;
      if ( (v30 & 0x42) != 0 && (v17 & 0x10) == 0 )
      {
        v20 = *(_BYTE *)(v15 - 0x57FFFFFFFDELL);
        if ( (*(_DWORD *)(v15 + v10) & 0x400LL) == 0 && (v17 & 8) == 0 )
        {
          v19 = MiCapturePageFileInfoInline(v15 + v10, 1LL, 0LL);
          v20 = *v18;
          v8 = 0x3FFFFFFFFFFFFFFFLL;
        }
        *v18 = v20 | 0x10;
      }
      *(_QWORD *)&a1[8 * v7 + 16] = v19;
      v21 = (volatile signed __int64 *)(v15 - 0x57FFFFFFFE8LL);
      v22 = *v21 ^ v8 & (*v21 ^ (*v21 - 1));
      *v21 = v22;
      if ( (v22 & v8) == 0 )
      {
        if ( (unsigned int)MiPfnShareCountIsZero(v16) == 3 )
        {
          v23 = MI_PFN_IS_PROTO(v16);
          v8 = 0x3FFFFFFFFFFFFFFFLL;
          if ( !v23 )
            ++v4;
        }
        else
        {
          v8 = 0x3FFFFFFFFFFFFFFFLL;
        }
      }
      _InterlockedAnd64(v21, 0x7FFFFFFFFFFFFFFFuLL);
      ++v7;
      v10 = 0xFFFFFA8000000010uLL;
      v9 = 0xFFFFFA8000000000uLL;
    }
    while ( v7 < *a1 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v24 + 34) & 7) != 6 || (v25 = *a1, (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v25) )
    MiBadShareCount(v24);
  *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) - v25)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v27 = *(_QWORD *)&a1[8 * i + 16];
    if ( v27 )
      MiReleasePageFileInfo(v5, v27, 1LL);
  }
  result = v4;
  *a1 = 0;
  return result;
}

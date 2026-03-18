/*
 * XREFs of MiDeleteBatch @ 0x1402C6C70
 * Callers:
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F30EC (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int8 v6; // r14
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbp
  char v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  char v19; // r8
  volatile signed __int64 *v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int8 i; // bl
  __int64 v26; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v1 )
    return 0LL;
  v4 = 0LL;
  v29 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(qword_140C4E4C8
                 + 8
                 * ((*(_QWORD *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL)
                               - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 7520);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 7520));
  v6 = 0;
  v7 = 0x3FFFFFFFFFFFFFFFLL;
  if ( *a1 )
  {
    v8 = 0xFFFFFA8000000000uLL;
    v9 = 0xFFFFFA8000000010uLL;
    do
    {
      v10 = *(_QWORD *)&a1[8 * v6 + 16];
      v29 = v10;
      if ( (unsigned __int64)&v29 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v29, v10, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFFA8000000000uLL)
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF));
          v13 = v10 | 0x20;
          if ( (v12 & 0x20) == 0 )
            v13 = v10;
          v10 = v13;
          if ( (v12 & 0x42) != 0 )
            v10 = v13;
        }
      }
      v14 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL);
      v15 = v14 + v8;
      v16 = *(_BYTE *)(v14 - 0x57FFFFFFFDELL);
      v17 = (char *)(v14 - 0x57FFFFFFFDELL);
      if ( (v16 & 7) != 6 )
        MiBadShareCount(v15);
      v18 = 0LL;
      if ( (v29 & 0x42) != 0 && (v16 & 0x10) == 0 )
      {
        v19 = *(_BYTE *)(v14 - 0x57FFFFFFFDELL);
        if ( (*(_DWORD *)(v14 + v9) & 0x400LL) == 0 && (v16 & 8) == 0 )
        {
          v18 = MiCapturePageFileInfoInline(v14 + v9, 1LL);
          v19 = *v17;
          v7 = 0x3FFFFFFFFFFFFFFFLL;
        }
        *v17 = v19 | 0x10;
      }
      *(_QWORD *)&a1[8 * v6 + 16] = v18;
      v20 = (volatile signed __int64 *)(v14 - 0x57FFFFFFFE8LL);
      v21 = *v20 ^ v7 & (*v20 ^ (*v20 - 1));
      *v20 = v21;
      if ( (v21 & v7) == 0 )
      {
        if ( (unsigned int)MiPfnShareCountIsZero(v15, 1uLL) == 3 )
        {
          v22 = MI_PFN_IS_PROTO(v15);
          v7 = 0x3FFFFFFFFFFFFFFFLL;
          if ( !v22 )
            ++v4;
        }
        else
        {
          v7 = 0x3FFFFFFFFFFFFFFFLL;
        }
      }
      _InterlockedAnd64(v20, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      v9 = 0xFFFFFA8000000010uLL;
      v8 = 0xFFFFFA8000000000uLL;
    }
    while ( v6 < *a1 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v23 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v23 + 34) & 7) != 6 || (v24 = *a1, (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v24) )
    MiBadShareCount(v23);
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) - v24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v26 = *(_QWORD *)&a1[8 * i + 16];
    if ( v26 )
      MiReleasePageFileInfo(v5, v26, 1LL);
  }
  result = v4;
  *a1 = 0;
  return result;
}

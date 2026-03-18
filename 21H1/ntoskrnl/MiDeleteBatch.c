/*
 * XREFs of MiDeleteBatch @ 0x14029A5F0
 * Callers:
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403ED924 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int8 v6; // r14
  __int64 v7; // r10
  unsigned __int64 Flink; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned __int8 v15; // r9
  _BYTE *v16; // rsi
  __int64 v17; // rax
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  unsigned __int8 i; // bl
  __int64 v29; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v1 )
    return 0LL;
  v4 = 0LL;
  v32 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(qword_140C4E588
                 + 8
                 * ((*(_QWORD *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL)
                               - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 7520);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 7520));
  v6 = 0;
  v7 = 0x3FFFFFFFFFFFFFFFLL;
  if ( *a1 )
  {
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    v9 = 0xFFFFFA8000000000uLL;
    v10 = 0xFFFFFA8000000010uLL;
    do
    {
      v11 = *(_QWORD *)&a1[8 * v6 + 16];
      v32 = v11;
      if ( (unsigned __int64)&v32 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v32 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v32, v11)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v32 >> 3) & 0x1FF));
          Flink = v11 | 0x20;
          if ( (v12 & 0x20) == 0 )
            Flink = v11;
          v11 = Flink;
          if ( (v12 & 0x42) != 0 )
            v11 = Flink;
        }
      }
      v13 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL);
      v14 = v13 + v9;
      v15 = *(_BYTE *)(v13 - 0x57FFFFFFFDELL);
      v16 = (_BYTE *)(v13 - 0x57FFFFFFFDELL);
      if ( (v15 & 7) != 6 )
        MiBadShareCount(v14);
      v17 = 0LL;
      if ( (v32 & 0x42) != 0 && (v15 & 0x10) == 0 )
      {
        Flink = v15;
        if ( (*(_DWORD *)(v13 + v10) & 0x400LL) == 0 && (v15 & 8) == 0 )
        {
          v17 = MiCapturePageFileInfoInline(v13 + v10, 1LL);
          Flink = (unsigned __int8)*v16;
          v7 = 0x3FFFFFFFFFFFFFFFLL;
        }
        LOBYTE(Flink) = Flink | 0x10;
        *v16 = Flink;
      }
      *(_QWORD *)&a1[8 * v6 + 16] = v17;
      v18 = (volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL);
      v19 = *v18 ^ v7 & (*v18 ^ (*v18 - 1));
      *v18 = v19;
      if ( (v19 & v7) == 0 )
      {
        if ( (unsigned int)MiPfnShareCountIsZero(v14, 1uLL, Flink) == 3 )
        {
          v22 = MI_PFN_IS_PROTO(v14, v20, v21);
          v7 = 0x3FFFFFFFFFFFFFFFLL;
          if ( !v22 )
            ++v4;
        }
        else
        {
          v7 = 0x3FFFFFFFFFFFFFFFLL;
        }
      }
      _InterlockedAnd64(v18, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      Flink = 0xFFFFF6FB7DBED7F8uLL;
      v10 = 0xFFFFFA8000000010uLL;
      v9 = 0xFFFFFA8000000000uLL;
    }
    while ( v6 < *a1 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v26 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31, v23, v24, v25);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
  }
  if ( (*(_BYTE *)(v26 + 34) & 7) != 6 || (v27 = *a1, (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v27) )
    MiBadShareCount(v26);
  *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) - v27)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( i = 0; i < *a1; ++i )
  {
    v29 = *(_QWORD *)&a1[8 * i + 16];
    if ( v29 )
      MiReleasePageFileInfo(v5, v29, 1LL);
  }
  result = v4;
  *a1 = 0;
  return result;
}

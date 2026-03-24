/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1402F2040
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402F10C4 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038FA84 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbCompareSnappedEntryState @ 0x1402EE894 (KiAbCompareSnappedEntryState.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402F282C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B5F14 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r14
  bool v4; // zf
  __int64 v7; // rsi
  int v8; // r12d
  unsigned __int64 v9; // rcx
  volatile LONG *v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // cl
  __int64 *v33; // rbx
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  char v37; // al
  char v38; // cl
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int32 v43; // eax
  unsigned __int64 v44; // [rsp+20h] [rbp-78h] BYREF
  int v45; // [rsp+28h] [rbp-70h]
  int v46; // [rsp+2Ch] [rbp-6Ch]
  __int128 v47; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v52; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (*(_BYTE *)(a1 + 27) & 1) == 0;
  v46 = 0;
  v7 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 80);
    KxAcquireQueuedSpinLock(a3, a1 + 80, a3);
    if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
      return v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v47 = *(_OWORD *)(v7 + 32);
  if ( (__int64)v47 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v44 = v47 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v47 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v45 = DWORD2(v47);
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (unsigned __int64)&KiAbTreeArray + v9;
  while ( 1 )
  {
    if ( v8 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    v14 = *(_QWORD *)(v11 + 8);
    v15 = *(_QWORD *)v11;
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
        v15 ^= v11;
      else
        v15 = 0LL;
    }
    v16 = v14 & 1;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < v44 )
          goto LABEL_37;
        if ( v17 > v44 )
          goto LABEL_16;
        v18 = *(_DWORD *)(v15 + 40);
        if ( v18 == DWORD2(v47) )
          goto LABEL_19;
        if ( v18 < DWORD2(v47) )
        {
LABEL_37:
          v19 = *(_QWORD *)(v15 + 8);
          if ( v16 && v19 )
          {
LABEL_41:
            v15 ^= v19;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v19 = *(_QWORD *)v15;
          if ( v16 && v19 )
            goto LABEL_41;
        }
        v15 = v19;
LABEL_18:
        if ( !v15 )
        {
LABEL_19:
          v7 = a1;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( v15 )
      {
        v26 = v15;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(v15 + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(a3, v15 + 80, v12);
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v10);
        if ( v7 == v15 )
          return v26;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
        KxAcquireQueuedSpinLock(&LockHandle, v7 + 80, v42);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiAbCompareSnappedEntryState((__m128i *)v7, (__int64)&v44) )
          return v26;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
      }
      else if ( v8 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v10);
      }
      return 0LL;
    }
    if ( v15 )
      break;
    if ( v8 )
      goto LABEL_26;
    v8 = 1;
    v52 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v10, retaddr) )
        goto LABEL_26;
    }
    else if ( !_interlockedbittestandset(v10, 0x1Fu) )
    {
      v20 = *(unsigned int *)v10;
      if ( (*v10 & 0xBFFFFFFF) != 0x80000001 )
      {
        do
        {
          if ( (v20 & 0x40000000) == 0 )
          {
            v43 = _InterlockedCompareExchange(v10, v20 | 0x40000000, v20);
            v4 = (_DWORD)v20 == v43;
            v20 = v43;
            if ( !v4 )
              continue;
          }
          KeYieldProcessorEx(&v52, v20, v12, v13);
          v20 = *(unsigned int *)v10;
        }
        while ( (v20 & 0xBFFFFFFF) != 0x80000001 );
      }
LABEL_26:
      v21 = *(_QWORD *)v11;
      if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
      {
        if ( v21 )
          v21 ^= v11;
        else
          v21 = 0LL;
      }
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v23 < v44 || v23 <= v44 && ((v24 = *(_DWORD *)(v21 + 40), v24 == DWORD2(v47)) || v24 < DWORD2(v47)) )
          {
            v25 = *(_QWORD *)(v21 + 8);
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_46;
              v25 ^= v21;
            }
            if ( !v25 )
            {
LABEL_46:
              v22 = 1;
              break;
            }
          }
          else
          {
            v25 = *(_QWORD *)v21;
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_47;
              v25 ^= v21;
            }
            if ( !v25 )
            {
LABEL_47:
              v22 = 0;
              break;
            }
          }
          v21 = v25;
        }
      }
      RtlRbInsertNodeEx(v11, v21, v22, v7);
      v26 = v7;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(a3, v7 + 80, v27);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      *(_BYTE *)(v7 + 39) |= 0x80u;
      *(_BYTE *)(v7 + 27) |= 1u;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 56) = 0LL;
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_WORD *)(v7 + 90) &= 1u;
LABEL_49:
      v28 = v7 - 16LL * *(unsigned __int8 *)(v7 + 24);
      if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
        ++*(_BYTE *)(v28 + 793);
      else
        _InterlockedExchangeAdd8((volatile signed __int8 *)(v28 + 871), 1u);
      return v26;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  v26 = v15;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(v15 + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock(a3, v15 + 80, v12);
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( *(__int64 *)(v7 + 32) >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
    {
      v32 = *(_BYTE *)(v7 - 16LL * *(unsigned __int8 *)(v7 + 24) + 195);
      if ( v32 > 15 )
        v32 = 15;
      v33 = (__int64 *)(v15 + 64);
      *(_BYTE *)(v7 + 48) = v32;
      v34 = v33[1];
      if ( (v34 & 1) != 0 )
      {
        if ( *v33 )
          v3 = *v33 ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = *v33;
      }
      LOBYTE(v31) = 0;
      v35 = v34 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) < v32 )
          {
            v36 = *(_QWORD *)v3;
            if ( v35 )
            {
              if ( !v36 )
                break;
              v36 ^= v3;
            }
            if ( !v36 )
              break;
          }
          else
          {
            v36 = *(_QWORD *)(v3 + 8);
            if ( v35 )
            {
              if ( !v36 )
                goto LABEL_70;
              v36 ^= v3;
            }
            if ( !v36 )
              goto LABEL_70;
          }
          v3 = v36;
        }
      }
    }
    else
    {
      v37 = KiAbOwnerComputeCpuPriorityKey(v7, v30, v31);
      v33 = (__int64 *)(v15 + 48);
      *(_BYTE *)(v7 + 48) = v37;
      v38 = v37;
      v39 = v33[1];
      if ( (v39 & 1) != 0 )
      {
        if ( *v33 )
          v3 = *v33 ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = *v33;
      }
      LOBYTE(v31) = 0;
      v40 = v39 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) > v38 )
          {
            v41 = *(_QWORD *)v3;
            if ( v40 )
            {
              if ( !v41 )
                break;
              v41 ^= v3;
            }
            if ( !v41 )
              break;
          }
          else
          {
            v41 = *(_QWORD *)(v3 + 8);
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_70;
              v41 ^= v3;
            }
            if ( !v41 )
            {
LABEL_70:
              v31 = 1LL;
              break;
            }
          }
          v3 = v41;
        }
      }
    }
    RtlRbInsertNodeEx(v33, v3, v31, v7);
    *(_BYTE *)(v7 + 39) |= 0x80u;
    goto LABEL_49;
  }
  return v26;
}

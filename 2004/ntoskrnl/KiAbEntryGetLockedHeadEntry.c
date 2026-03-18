/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140210820
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbCompareSnappedEntryState @ 0x1402736CC (KiAbCompareSnappedEntryState.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14032A828 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B098C (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
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
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // cl
  __int64 *v31; // rbx
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  char v35; // al
  char v36; // cl
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  unsigned __int32 v40; // eax
  unsigned __int64 v41; // [rsp+20h] [rbp-78h] BYREF
  int v42; // [rsp+28h] [rbp-70h]
  int v43; // [rsp+2Ch] [rbp-6Ch]
  __int128 v44; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v49; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (*(_BYTE *)(a1 + 27) & 1) == 0;
  v43 = 0;
  v7 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 80);
    KxAcquireQueuedSpinLock(a3);
    if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
      return v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v44 = *(_OWORD *)(v7 + 32);
  if ( (__int64)v44 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v41 = v44 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v44 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v42 = DWORD2(v44);
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (unsigned __int64)&KiAbTreeArray + v9;
  while ( 1 )
  {
    if ( v8 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)v11;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        v13 ^= v11;
      else
        v13 = 0LL;
    }
    v14 = v12 & 1;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v15 < v41 )
          goto LABEL_37;
        if ( v15 > v41 )
          goto LABEL_16;
        v16 = *(_DWORD *)(v13 + 40);
        if ( v16 == DWORD2(v44) )
          goto LABEL_19;
        if ( v16 < DWORD2(v44) )
        {
LABEL_37:
          v17 = *(_QWORD *)(v13 + 8);
          if ( v14 && v17 )
          {
LABEL_41:
            v13 ^= v17;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v17 = *(_QWORD *)v13;
          if ( v14 && v17 )
            goto LABEL_41;
        }
        v13 = v17;
LABEL_18:
        if ( !v13 )
        {
LABEL_19:
          v7 = a1;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( v13 )
      {
        v24 = v13;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(a3);
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v10);
        if ( v7 == v13 )
          return v24;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
        KxAcquireQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v7, &v41) )
          return v24;
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
    if ( v13 )
      break;
    if ( v8 )
      goto LABEL_26;
    v8 = 1;
    v49 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v10, retaddr) )
        goto LABEL_26;
    }
    else if ( !_interlockedbittestandset(v10, 0x1Fu) )
    {
      v18 = *(unsigned int *)v10;
      if ( (*v10 & 0xBFFFFFFF) != 0x80000001 )
      {
        do
        {
          if ( (v18 & 0x40000000) == 0 )
          {
            v40 = _InterlockedCompareExchange(v10, v18 | 0x40000000, v18);
            v4 = (_DWORD)v18 == v40;
            v18 = v40;
            if ( !v4 )
              continue;
          }
          KeYieldProcessorEx(&v49, v18);
          v18 = *(unsigned int *)v10;
        }
        while ( (v18 & 0xBFFFFFFF) != 0x80000001 );
      }
LABEL_26:
      v19 = *(_QWORD *)v11;
      if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
      {
        if ( v19 )
          v19 ^= v11;
        else
          v19 = 0LL;
      }
      v20 = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v21 < v41 || v21 <= v41 && ((v22 = *(_DWORD *)(v19 + 40), v22 == DWORD2(v44)) || v22 < DWORD2(v44)) )
          {
            v23 = *(_QWORD *)(v19 + 8);
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_46;
              v23 ^= v19;
            }
            if ( !v23 )
            {
LABEL_46:
              v20 = 1;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)v19;
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_47;
              v23 ^= v19;
            }
            if ( !v23 )
            {
LABEL_47:
              v20 = 0;
              break;
            }
          }
          v19 = v23;
        }
      }
      RtlRbInsertNodeEx(v11, v19, v20, v7);
      v24 = v7;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(a3);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      *(_BYTE *)(v7 + 39) |= 0x80u;
      *(_BYTE *)(v7 + 27) |= 1u;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 56) = 0LL;
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_WORD *)(v7 + 90) &= 1u;
LABEL_49:
      v25 = v7 - 16LL * *(unsigned __int8 *)(v7 + 24);
      if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
        ++*(_BYTE *)(v25 + 793);
      else
        _InterlockedExchangeAdd8((volatile signed __int8 *)(v25 + 871), 1u);
      return v24;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  v24 = v13;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock(a3);
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( *(__int64 *)(v7 + 32) >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
    {
      v30 = *(_BYTE *)(v7 - 16LL * *(unsigned __int8 *)(v7 + 24) + 195);
      if ( v30 > 15 )
        v30 = 15;
      v31 = (__int64 *)(v13 + 64);
      *(_BYTE *)(v7 + 48) = v30;
      v32 = v31[1];
      if ( (v32 & 1) != 0 )
      {
        if ( *v31 )
          v3 = *v31 ^ (unsigned __int64)v31;
      }
      else
      {
        v3 = *v31;
      }
      LOBYTE(v28) = 0;
      v33 = v32 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) < v30 )
          {
            v34 = *(_QWORD *)v3;
            if ( v33 )
            {
              if ( !v34 )
                break;
              v34 ^= v3;
            }
            if ( !v34 )
              break;
          }
          else
          {
            v34 = *(_QWORD *)(v3 + 8);
            if ( v33 )
            {
              if ( !v34 )
                goto LABEL_70;
              v34 ^= v3;
            }
            if ( !v34 )
              goto LABEL_70;
          }
          v3 = v34;
        }
      }
    }
    else
    {
      v35 = KiAbOwnerComputeCpuPriorityKey(v7, v27, v28, v29);
      v31 = (__int64 *)(v13 + 48);
      *(_BYTE *)(v7 + 48) = v35;
      v36 = v35;
      v37 = v31[1];
      if ( (v37 & 1) != 0 )
      {
        if ( *v31 )
          v3 = *v31 ^ (unsigned __int64)v31;
      }
      else
      {
        v3 = *v31;
      }
      LOBYTE(v28) = 0;
      v38 = v37 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) > v36 )
          {
            v39 = *(_QWORD *)v3;
            if ( v38 )
            {
              if ( !v39 )
                break;
              v39 ^= v3;
            }
            if ( !v39 )
              break;
          }
          else
          {
            v39 = *(_QWORD *)(v3 + 8);
            if ( v38 )
            {
              if ( !v39 )
                goto LABEL_70;
              v39 ^= v3;
            }
            if ( !v39 )
            {
LABEL_70:
              v28 = 1LL;
              break;
            }
          }
          v3 = v39;
        }
      }
    }
    RtlRbInsertNodeEx(v31, v3, v28, v7);
    *(_BYTE *)(v7 + 39) |= 0x80u;
    goto LABEL_49;
  }
  return v24;
}

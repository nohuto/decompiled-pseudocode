/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x14034F230
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x14035BAD8 (KiAbCompareSnappedEntryState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140461CD0 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int128 *__fastcall KiAbEntryGetLockedHeadEntry(__int128 *a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // zf
  struct _KLOCK_QUEUE_HANDLE *v5; // r15
  int v9; // ebp
  unsigned __int64 v10; // rcx
  volatile LONG *v11; // rdi
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rcx
  volatile LONG i; // ecx
  unsigned __int64 v21; // rdx
  bool v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int128 *v27; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v30; // eax
  volatile __int64 *v31; // rdx
  char v32; // al
  unsigned __int64 *v33; // r10
  __int64 v34; // rcx
  char v35; // dl
  unsigned __int64 v36; // rax
  bool v37; // r8
  int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char v41; // dl
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int128 *v46; // rax
  volatile __int64 *v47; // rdx
  __int128 v48; // [rsp+20h] [rbp-78h] BYREF
  __int128 v49; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v52; // [rsp+A0h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE *v53; // [rsp+B0h] [rbp+18h]

  v53 = a3;
  v3 = 0LL;
  v4 = (*((_BYTE *)a1 + 19) & 1) == 0;
  v5 = a3;
  v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 5);
    KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)a1 + 10);
    if ( (*((_BYTE *)a1 + 19) & 1) != 0 )
      return a1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
  }
  v49 = *a1;
  if ( (__int64)v49 >= 0 && !a2 )
    return 0LL;
  v9 = 0;
  *(_QWORD *)&v48 = v49 & 0x7FFFFFFFFFFFFFFCLL;
  DWORD2(v48) = DWORD2(v49);
  v10 = ((((unsigned __int64)v49 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v11 = (volatile LONG *)((char *)&KiAbTreeArray + v10 + 16);
  v12 = (unsigned __int64 *)((char *)&KiAbTreeArray + v10);
  while ( 1 )
  {
    if ( v9 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v11);
    v16 = *v12;
    if ( (v12[1] & 1) != 0 )
    {
      if ( !v16 )
      {
        v16 = 0LL;
        goto LABEL_29;
      }
      v16 ^= (unsigned __int64)v12;
    }
    v14 = v12[1] & 1;
    if ( v16 )
    {
      do
      {
        v17 = *(_QWORD *)(v16 - 24) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < (unsigned __int64)v48 )
          goto LABEL_22;
        if ( v17 > (unsigned __int64)v48 )
          goto LABEL_20;
        v18 = *(_DWORD *)(v16 - 16);
        if ( v18 == DWORD2(v49) )
          break;
        if ( v18 < DWORD2(v49) )
LABEL_22:
          v19 = *(_QWORD *)(v16 + 8);
        else
LABEL_20:
          v19 = *(_QWORD *)v16;
        if ( (_DWORD)v14 && v19 )
          v16 ^= v19;
        else
          v16 = v19;
      }
      while ( v16 );
      v5 = v53;
    }
LABEL_29:
    if ( !a2 )
    {
      if ( v16 )
      {
        v27 = (__int128 *)(v16 - 24);
        v5->LockQueue.Next = 0LL;
        v47 = (volatile __int64 *)(v16 - 24 + 80);
        v5->LockQueue.Lock = (unsigned __int64 *volatile)v47;
        KxAcquireQueuedSpinLock((__int64)v5, v47);
        if ( v9 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v11);
        if ( a1 == v27 )
          return v27;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 5);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)a1 + 10);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(a1, &v48) )
          return v27;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
      }
      else if ( v9 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v11);
      }
      return 0LL;
    }
    if ( v16 )
    {
      v27 = (__int128 *)(v16 - 24);
      v5->LockQueue.Next = 0LL;
      v31 = (volatile __int64 *)(v16 - 24 + 80);
      v5->LockQueue.Lock = (unsigned __int64 *volatile)v31;
      KxAcquireQueuedSpinLock((__int64)v5, v31);
      if ( v9 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v11);
      if ( *(__int64 *)a1 < 0 )
        return v27;
      if ( !*((_BYTE *)a1 + 17) )
      {
        v32 = KiAbOwnerComputeCpuPriorityKey(a1);
        v33 = (unsigned __int64 *)(v27 + 3);
        *((_BYTE *)a1 + 48) = v32;
        v34 = *((_QWORD *)v27 + 7);
        v35 = v32;
        v36 = *((_QWORD *)v27 + 6);
        if ( (v34 & 1) == 0 )
          goto LABEL_77;
        if ( v36 )
        {
          v36 ^= (unsigned __int64)v33;
LABEL_77:
          v37 = 0;
          v38 = v34 & 1;
          v3 = v36;
          if ( v36 )
          {
            while ( 1 )
            {
              while ( *(char *)(v3 + 24) > v35 )
              {
                v39 = *(_QWORD *)v3;
                if ( v38 )
                {
                  if ( !v39 )
                    goto LABEL_109;
                  v39 ^= v3;
                }
                if ( !v39 )
                  goto LABEL_109;
                v3 = v39;
              }
              v40 = *(_QWORD *)(v3 + 8);
              if ( v38 )
              {
                if ( !v40 )
                  goto LABEL_108;
                v40 ^= v3;
              }
              if ( !v40 )
                goto LABEL_108;
              v3 = v40;
            }
          }
          goto LABEL_109;
        }
LABEL_94:
        v37 = 0;
        goto LABEL_109;
      }
      v33 = (unsigned __int64 *)(v27 + 4);
      v41 = *((_BYTE *)&a1[-6 * *((unsigned __int8 *)a1 + 16) - 93] - 13);
      if ( v41 > 30 )
        v41 = 30;
      *((_BYTE *)a1 + 48) = v41;
      v42 = *((_QWORD *)v27 + 9);
      if ( (v42 & 1) != 0 )
      {
        if ( !*v33 )
          goto LABEL_94;
        v3 = *v33 ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = *v33;
      }
      v37 = 0;
      v43 = v42 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          while ( *(char *)(v3 + 24) < v41 )
          {
            v44 = *(_QWORD *)v3;
            if ( v43 )
            {
              if ( !v44 )
                goto LABEL_109;
              v44 ^= v3;
            }
            if ( !v44 )
              goto LABEL_109;
            v3 = v44;
          }
          v45 = *(_QWORD *)(v3 + 8);
          if ( v43 )
          {
            if ( !v45 )
              break;
            v45 ^= v3;
          }
          if ( !v45 )
            break;
          v3 = v45;
        }
LABEL_108:
        v37 = 1;
      }
LABEL_109:
      RtlRbInsertNodeEx(v33, v3, v37, (unsigned __int64)a1 + 24);
      *((_BYTE *)a1 + 7) |= 0x80u;
      goto LABEL_110;
    }
    if ( v9 )
      goto LABEL_40;
    v9 = 1;
    v52 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      break;
    if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v11, retaddr) )
      goto LABEL_40;
LABEL_34:
    ExReleaseSpinLockSharedFromDpcLevel(v11);
  }
  if ( _interlockedbittestandset(v11, 0x1Fu) )
    goto LABEL_34;
  for ( i = *v11; (*v11 & 0xBFFFFFFF) != 0x80000001; i = *v11 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(v11, 0x40000000u);
    KeYieldProcessorEx(&v52, v13, v14, v15);
  }
LABEL_40:
  v21 = *v12;
  if ( (v12[1] & 1) != 0 )
  {
    if ( v21 )
    {
      v21 ^= (unsigned __int64)v12;
      goto LABEL_43;
    }
    v21 = 0LL;
LABEL_54:
    v22 = 0;
  }
  else
  {
LABEL_43:
    v22 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v21 - 24) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v23 < (unsigned __int64)v48 )
            break;
          if ( v23 <= (unsigned __int64)v48 )
          {
            v24 = *(_DWORD *)(v21 - 16);
            if ( v24 == DWORD2(v49) || v24 < DWORD2(v49) )
              break;
          }
          v25 = *(_QWORD *)v21;
          if ( (v12[1] & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_54;
            v25 ^= v21;
          }
          if ( !v25 )
            goto LABEL_54;
          v21 = v25;
        }
        v26 = *(_QWORD *)(v21 + 8);
        if ( (v12[1] & 1) != 0 )
        {
          if ( !v26 )
            break;
          v26 ^= v21;
        }
        if ( !v26 )
          break;
        v21 = v26;
      }
      v22 = 1;
    }
  }
  RtlRbInsertNodeEx(v12, v21, v22, (unsigned __int64)a1 + 24);
  v5->LockQueue.Next = 0LL;
  v5->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 5);
  v27 = a1;
  KxAcquireQueuedSpinLock((__int64)v5, (volatile __int64 *)a1 + 10);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  else
    *v11 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v30 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  *((_BYTE *)a1 + 7) |= 0x80u;
  *((_BYTE *)a1 + 19) |= 1u;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_BYTE *)a1 + 92) = 0;
  *((_DWORD *)a1 + 23) &= 0xFFFF80FF;
LABEL_110:
  v46 = &a1[-6 * *((unsigned __int8 *)a1 + 16)];
  if ( *((_BYTE *)a1 + 17) )
    ++*((_BYTE *)v46 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)v46 - 825, 1u);
  return v27;
}

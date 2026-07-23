/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1402FCD90
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402FBE14 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038FBD4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbCompareSnappedEntryState @ 0x1402F95E4 (KiAbCompareSnappedEntryState.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402FD57C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B6144 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

char *__fastcall KiAbEntryGetLockedHeadEntry(char *Node, int a2, struct _KLOCK_QUEUE_HANDLE *a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  bool v5; // zf
  char *v8; // rsi
  int v9; // r12d
  unsigned __int64 v10; // rcx
  volatile LONG *v11; // rbp
  _RTL_RB_TREE *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  _RTL_BALANCED_NODE *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  BOOLEAN v23; // al
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  _RTL_BALANCED_NODE *v26; // rax
  char *v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34; // cl
  $F6ED6B8C35E0C59DCCEDB1F15AA1B54B *v35; // rbx
  _RTL_BALANCED_NODE *ParentValue; // rax
  BOOLEAN v37; // r8
  int v38; // edx
  unsigned __int64 v39; // rax
  char v40; // al
  char v41; // cl
  _RTL_BALANCED_NODE *v42; // rax
  int v43; // edx
  unsigned __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int32 v47; // eax
  unsigned __int64 v48; // [rsp+20h] [rbp-78h] BYREF
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+2Ch] [rbp-6Ch]
  __int128 v51; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v56; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = (Node[27] & 1) == 0;
  v50 = 0;
  v8 = Node;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(Node + 80);
    KxAcquireQueuedSpinLock(a3, Node + 80, a3, a4);
    if ( (v8[27] & 1) != 0 )
      return v8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v51 = *((_OWORD *)v8 + 2);
  if ( (__int64)v51 >= 0 && !a2 )
    return 0LL;
  v9 = 0;
  v48 = v51 & 0x7FFFFFFFFFFFFFFCLL;
  v10 = ((((unsigned __int64)v51 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v49 = DWORD2(v51);
  v11 = (volatile LONG *)((char *)&KiAbTreeArray + v10 + 16);
  v12 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v10);
  while ( 1 )
  {
    if ( v9 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v11);
    Min = v12->Min;
    Root = (unsigned __int64)v12->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v12;
      else
        Root = 0LL;
    }
    v17 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v18 < v48 )
          goto LABEL_37;
        if ( v18 > v48 )
          goto LABEL_16;
        v19 = *(_DWORD *)(Root + 40);
        if ( v19 == DWORD2(v51) )
          goto LABEL_19;
        if ( v19 < DWORD2(v51) )
        {
LABEL_37:
          v20 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v17 && v20 )
          {
LABEL_41:
            Root ^= (unsigned __int64)v20;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v20 = *(_RTL_BALANCED_NODE **)Root;
          if ( v17 && v20 )
            goto LABEL_41;
        }
        Root = (unsigned __int64)v20;
LABEL_18:
        if ( !Root )
        {
LABEL_19:
          v8 = Node;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( Root )
      {
        v27 = (char *)Root;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(a3, Root + 80, v13, v14);
        if ( v9 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v11);
        if ( v8 == (char *)Root )
          return v27;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 80);
        KxAcquireQueuedSpinLock(&LockHandle, v8 + 80, v45, v46);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiAbCompareSnappedEntryState((__m128i *)v8, (__int64)&v48) )
          return v27;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
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
    if ( Root )
      break;
    if ( v9 )
      goto LABEL_26;
    v9 = 1;
    v56 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v11, retaddr) )
        goto LABEL_26;
    }
    else if ( !_interlockedbittestandset(v11, 0x1Fu) )
    {
      v21 = *(unsigned int *)v11;
      if ( (*v11 & 0xBFFFFFFF) != 0x80000001 )
      {
        do
        {
          if ( (v21 & 0x40000000) == 0 )
          {
            v47 = _InterlockedCompareExchange(v11, v21 | 0x40000000, v21);
            v5 = (_DWORD)v21 == v47;
            v21 = v47;
            if ( !v5 )
              continue;
          }
          KeYieldProcessorEx(&v56, v21, v13, v14);
          v21 = *(unsigned int *)v11;
        }
        while ( (v21 & 0xBFFFFFFF) != 0x80000001 );
      }
LABEL_26:
      v22 = (unsigned __int64)v12->Root;
      if ( ((__int64)v12->Min & 1) != 0 )
      {
        if ( v22 )
          v22 ^= (unsigned __int64)v12;
        else
          v22 = 0LL;
      }
      v23 = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          v24 = *(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v24 < v48 || v24 <= v48 && ((v25 = *(_DWORD *)(v22 + 40), v25 == DWORD2(v51)) || v25 < DWORD2(v51)) )
          {
            v26 = *(_RTL_BALANCED_NODE **)(v22 + 8);
            if ( ((__int64)v12->Min & 1) != 0 )
            {
              if ( !v26 )
                goto LABEL_46;
              v26 = (_RTL_BALANCED_NODE *)(v22 ^ (unsigned __int64)v26);
            }
            if ( !v26 )
            {
LABEL_46:
              v23 = 1;
              break;
            }
          }
          else
          {
            v26 = *(_RTL_BALANCED_NODE **)v22;
            if ( ((__int64)v12->Min & 1) != 0 )
            {
              if ( !v26 )
                goto LABEL_47;
              v26 = (_RTL_BALANCED_NODE *)(v22 ^ (unsigned __int64)v26);
            }
            if ( !v26 )
            {
LABEL_47:
              v23 = 0;
              break;
            }
          }
          v22 = (unsigned __int64)v26;
        }
      }
      RtlRbInsertNodeEx(v12, (PRTL_BALANCED_NODE)v22, v23, (PRTL_BALANCED_NODE)v8);
      v27 = v8;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(a3, v8 + 80, v28, v29);
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      v8[39] |= 0x80u;
      v8[27] |= 1u;
      *((_QWORD *)v8 + 6) = 0LL;
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
      *((_WORD *)v8 + 45) &= 1u;
LABEL_49:
      v30 = &v8[-16 * (unsigned __int8)v8[24]];
      if ( (v8[25] & 1) != 0 )
        ++v30[793];
      else
        _InterlockedExchangeAdd8(v30 + 871, 1u);
      return v27;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v11);
  }
  v27 = (char *)Root;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock(a3, Root + 80, v13, v14);
  if ( v9 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v11);
  if ( *((__int64 *)v8 + 4) >= 0 )
  {
    if ( (v8[25] & 1) != 0 )
    {
      v34 = v8[-16 * (unsigned __int8)v8[24] + 195];
      if ( v34 > 15 )
        v34 = 15;
      v35 = ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)(Root + 64);
      v8[48] = v34;
      ParentValue = (_RTL_BALANCED_NODE *)v35[1].ParentValue;
      if ( ((unsigned __int8)ParentValue & 1) != 0 )
      {
        if ( v35->ParentValue )
          v4 = v35->ParentValue ^ (unsigned __int64)v35;
      }
      else
      {
        v4 = v35->ParentValue;
      }
      v37 = 0;
      v38 = (unsigned __int8)ParentValue & 1;
      if ( v4 )
      {
        while ( 1 )
        {
          if ( *(char *)(v4 + 48) < v34 )
          {
            v39 = *(_QWORD *)v4;
            if ( v38 )
            {
              if ( !v39 )
                break;
              v39 ^= v4;
            }
            if ( !v39 )
              break;
          }
          else
          {
            v39 = *(_QWORD *)(v4 + 8);
            if ( v38 )
            {
              if ( !v39 )
                goto LABEL_70;
              v39 ^= v4;
            }
            if ( !v39 )
              goto LABEL_70;
          }
          v4 = v39;
        }
      }
    }
    else
    {
      v40 = KiAbOwnerComputeCpuPriorityKey(v8, v32, v33);
      v35 = ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)(Root + 48);
      v8[48] = v40;
      v41 = v40;
      v42 = (_RTL_BALANCED_NODE *)v35[1].ParentValue;
      if ( ((unsigned __int8)v42 & 1) != 0 )
      {
        if ( v35->ParentValue )
          v4 = v35->ParentValue ^ (unsigned __int64)v35;
      }
      else
      {
        v4 = v35->ParentValue;
      }
      v37 = 0;
      v43 = (unsigned __int8)v42 & 1;
      if ( v4 )
      {
        while ( 1 )
        {
          if ( *(char *)(v4 + 48) > v41 )
          {
            v44 = *(_QWORD *)v4;
            if ( v43 )
            {
              if ( !v44 )
                break;
              v44 ^= v4;
            }
            if ( !v44 )
              break;
          }
          else
          {
            v44 = *(_QWORD *)(v4 + 8);
            if ( v43 )
            {
              if ( !v44 )
                goto LABEL_70;
              v44 ^= v4;
            }
            if ( !v44 )
            {
LABEL_70:
              v37 = 1;
              break;
            }
          }
          v4 = v44;
        }
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)v35, (PRTL_BALANCED_NODE)v4, v37, (PRTL_BALANCED_NODE)v8);
    v8[39] |= 0x80u;
    goto LABEL_49;
  }
  return v27;
}

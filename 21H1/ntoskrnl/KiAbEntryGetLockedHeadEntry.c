/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140269870
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402DDA58 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x14035B2B8 (KiAbCompareSnappedEntryState.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B026C (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

char *__fastcall KiAbEntryGetLockedHeadEntry(char *Node, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int64 v3; // r14
  bool v4; // zf
  char *v7; // rsi
  int v8; // r12d
  unsigned __int64 v9; // rcx
  volatile LONG *v10; // rbp
  _RTL_RB_TREE *v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // al
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  _RTL_BALANCED_NODE *v25; // rax
  char *v26; // rdi
  char *v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // cl
  $F6ED6B8C35E0C59DCCEDB1F15AA1B54B *v33; // rbx
  _RTL_BALANCED_NODE *ParentValue; // rax
  BOOLEAN v35; // r8
  int v36; // edx
  unsigned __int64 v37; // rax
  char v38; // al
  char v39; // cl
  _RTL_BALANCED_NODE *v40; // rax
  int v41; // edx
  unsigned __int64 v42; // rax
  unsigned __int32 v43; // eax
  unsigned __int64 v44; // [rsp+20h] [rbp-78h] BYREF
  int v45; // [rsp+28h] [rbp-70h]
  int v46; // [rsp+2Ch] [rbp-6Ch]
  __int128 v47; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v52; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (Node[27] & 1) == 0;
  v46 = 0;
  v7 = Node;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(Node + 80);
    KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)Node + 10);
    if ( (v7[27] & 1) != 0 )
      return v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v47 = *((_OWORD *)v7 + 2);
  if ( (__int64)v47 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v44 = v47 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v47 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v45 = DWORD2(v47);
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v9);
  while ( 1 )
  {
    if ( v8 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    Min = v11->Min;
    Root = (unsigned __int64)v11->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v11;
      else
        Root = 0LL;
    }
    v16 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < v44 )
          goto LABEL_37;
        if ( v17 > v44 )
          goto LABEL_16;
        v18 = *(_DWORD *)(Root + 40);
        if ( v18 == DWORD2(v47) )
          goto LABEL_19;
        if ( v18 < DWORD2(v47) )
        {
LABEL_37:
          v19 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v16 && v19 )
          {
LABEL_41:
            Root ^= (unsigned __int64)v19;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v19 = *(_RTL_BALANCED_NODE **)Root;
          if ( v16 && v19 )
            goto LABEL_41;
        }
        Root = (unsigned __int64)v19;
LABEL_18:
        if ( !Root )
        {
LABEL_19:
          v7 = Node;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( Root )
      {
        v26 = (char *)Root;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(Root + 80));
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v10);
        if ( v7 == (char *)Root )
          return v26;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v7 + 10);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v7, &v44) )
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
    if ( Root )
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
      v21 = (unsigned __int64)v11->Root;
      if ( ((__int64)v11->Min & 1) != 0 )
      {
        if ( v21 )
          v21 ^= (unsigned __int64)v11;
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
            v25 = *(_RTL_BALANCED_NODE **)(v21 + 8);
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_46;
              v25 = (_RTL_BALANCED_NODE *)(v21 ^ (unsigned __int64)v25);
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
            v25 = *(_RTL_BALANCED_NODE **)v21;
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_47;
              v25 = (_RTL_BALANCED_NODE *)(v21 ^ (unsigned __int64)v25);
            }
            if ( !v25 )
            {
LABEL_47:
              v22 = 0;
              break;
            }
          }
          v21 = (unsigned __int64)v25;
        }
      }
      RtlRbInsertNodeEx(v11, (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v7);
      v26 = v7;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)v7 + 10);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      v7[39] |= 0x80u;
      v7[27] |= 1u;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_WORD *)v7 + 45) &= 1u;
LABEL_49:
      v27 = &v7[-16 * (unsigned __int8)v7[24]];
      if ( (v7[25] & 1) != 0 )
        ++v27[793];
      else
        _InterlockedExchangeAdd8(v27 + 871, 1u);
      return v26;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  v26 = (char *)Root;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(Root + 80));
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( *((__int64 *)v7 + 4) >= 0 )
  {
    if ( (v7[25] & 1) != 0 )
    {
      v32 = v7[-16 * (unsigned __int8)v7[24] + 195];
      if ( v32 > 15 )
        v32 = 15;
      v33 = ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)(Root + 64);
      v7[48] = v32;
      ParentValue = (_RTL_BALANCED_NODE *)v33[1].ParentValue;
      if ( ((unsigned __int8)ParentValue & 1) != 0 )
      {
        if ( v33->ParentValue )
          v3 = v33->ParentValue ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = v33->ParentValue;
      }
      v35 = 0;
      v36 = (unsigned __int8)ParentValue & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) < v32 )
          {
            v37 = *(_QWORD *)v3;
            if ( v36 )
            {
              if ( !v37 )
                break;
              v37 ^= v3;
            }
            if ( !v37 )
              break;
          }
          else
          {
            v37 = *(_QWORD *)(v3 + 8);
            if ( v36 )
            {
              if ( !v37 )
                goto LABEL_70;
              v37 ^= v3;
            }
            if ( !v37 )
              goto LABEL_70;
          }
          v3 = v37;
        }
      }
    }
    else
    {
      v38 = KiAbOwnerComputeCpuPriorityKey(v7, v29, v30, v31);
      v33 = ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)(Root + 48);
      v7[48] = v38;
      v39 = v38;
      v40 = (_RTL_BALANCED_NODE *)v33[1].ParentValue;
      if ( ((unsigned __int8)v40 & 1) != 0 )
      {
        if ( v33->ParentValue )
          v3 = v33->ParentValue ^ (unsigned __int64)v33;
      }
      else
      {
        v3 = v33->ParentValue;
      }
      v35 = 0;
      v41 = (unsigned __int8)v40 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) > v39 )
          {
            v42 = *(_QWORD *)v3;
            if ( v41 )
            {
              if ( !v42 )
                break;
              v42 ^= v3;
            }
            if ( !v42 )
              break;
          }
          else
          {
            v42 = *(_QWORD *)(v3 + 8);
            if ( v41 )
            {
              if ( !v42 )
                goto LABEL_70;
              v42 ^= v3;
            }
            if ( !v42 )
            {
LABEL_70:
              v35 = 1;
              break;
            }
          }
          v3 = v42;
        }
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)v33, (PRTL_BALANCED_NODE)v3, v35, (PRTL_BALANCED_NODE)v7);
    v7[39] |= 0x80u;
    goto LABEL_49;
  }
  return v26;
}

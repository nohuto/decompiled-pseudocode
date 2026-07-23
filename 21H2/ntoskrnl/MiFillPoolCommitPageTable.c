/*
 * XREFs of MiFillPoolCommitPageTable @ 0x140316730
 * Callers:
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E0240 (MiAssignNonPagedPoolPte.c)
 *     MiLockPoolCommitPageTable @ 0x140316120 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x140316558 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1403165A8 (MiLockPoolCommitWs.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR i; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  int v7; // r8d
  __int16 v8; // cx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( (*(_BYTE *)(a1 + 78) & 4) == 0 )
  {
    v3 = 0;
    for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(a1 + 32) )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        if ( ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == v5 )
          goto LABEL_5;
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48), v5);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      if ( !(unsigned int)MiLockPoolCommitPageTable(a1, i) )
        KeBugCheckEx(0x1Au, 0x5310uLL, i, 0LL, 0LL);
LABEL_5:
      v6 = *(_QWORD *)i;
      v7 = MiPteInShadowRange(i);
      if ( v7
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v15 = *((_QWORD *)&Flink->Flink + ((i >> 3) & 0x1FF));
          v16 = v6 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v6;
          v6 = v16;
          if ( (v15 & 0x42) != 0 )
            v6 = v16 | 0x42;
        }
      }
      if ( !v6 )
        goto LABEL_11;
      if ( qword_140C4DF80 && (v6 & 0x10) == 0 )
        v6 &= ~qword_140C4DF80;
      v6 >>= 28;
      if ( v6 == 0xFFFFFFFFFLL )
        CurrentThread = 0LL;
      else
LABEL_11:
        CurrentThread = (struct _KTHREAD *)(8 * v6 - 0x94000000000LL);
      *(_QWORD *)(a1 + 32) = CurrentThread;
      v8 = *(_WORD *)(a1 + 78);
      if ( (v8 & 1) != 0 )
      {
        v17 = ZeroPte;
        if ( v7 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v17 & 1) != 0 )
              v17 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v17;
            LOBYTE(CurrentThread) = MiWritePteShadow(i, v17);
            goto LABEL_17;
          }
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
          {
            LOBYTE(CurrentThread) = 0;
            v17 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)i = v17;
      }
      else
      {
        if ( (v8 & 2) != 0 )
        {
          CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(4LL * ((unsigned __int8)v8 & 0xF8));
          v9 = (__int64)CurrentThread;
          if ( !v10 )
            goto LABEL_15;
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v9 & 1) != 0 )
              v9 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v9;
            LOBYTE(CurrentThread) = MiWritePteShadow(i, v9);
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v9 & 1) != 0 )
            {
              LOBYTE(CurrentThread) = 0;
              v9 |= 0x8000000000000000uLL;
            }
LABEL_15:
            *(_QWORD *)i = v9;
          }
LABEL_16:
          ++*(_QWORD *)(a1 + 24);
          goto LABEL_17;
        }
        LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(a1, (__int64)(i << 25) >> 16);
        if ( (_DWORD)CurrentThread )
          goto LABEL_16;
      }
LABEL_17:
      ++v3;
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v3 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
        {
          if ( MiWorkingSetIsContended(*(_QWORD *)(a1 + 48))
            || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
          {
            MiUnlockPoolCommitWs(a1);
            LOBYTE(CurrentThread) = MiLockPoolCommitWs(a1, v11, v12, v13);
          }
        }
      }
    }
  }
  return (char)CurrentThread;
}

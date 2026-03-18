/*
 * XREFs of MiFillPoolCommitPageTable @ 0x140223CC0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLockPoolCommitPageTable @ 0x1402B1880 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x1402B1A28 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1402B1A78 (MiLockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x1402B83B0 (MiAssignNonPagedPoolPte.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

int __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR i; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
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
      v7 = MiPteInShadowRange(i, v5);
      v8 = v7;
      if ( v7
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + ((i >> 3) & 0x1FF));
          v15 = v6 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v6;
          v6 = v15;
          if ( (v14 & 0x42) != 0 )
            v6 = v15 | 0x42;
        }
      }
      if ( !v6 )
        goto LABEL_11;
      if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
        v6 &= ~qword_140C4DE80;
      v6 >>= 28;
      if ( v6 == 0xFFFFFFFFFLL )
        CurrentThread = 0LL;
      else
LABEL_11:
        CurrentThread = (struct _KTHREAD *)(8 * v6 - 0x94000000000LL);
      *(_QWORD *)(a1 + 32) = CurrentThread;
      v9 = *(unsigned __int16 *)(a1 + 78);
      if ( (v9 & 1) != 0 )
      {
        v16 = ZeroPte;
        if ( (_DWORD)v8 )
        {
          if ( (unsigned int)MiPteHasShadow(v9, ZeroPte) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v16 & 1) != 0 )
              v16 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v16;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v16);
            goto LABEL_17;
          }
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v16 & 1) != 0 )
          {
            LODWORD(CurrentThread) = 0;
            v16 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)i = v16;
      }
      else
      {
        if ( (v9 & 2) != 0 )
        {
          CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(4LL * ((unsigned __int8)v9 & 0xF8));
          v11 = (unsigned __int64)CurrentThread;
          if ( !v12 )
            goto LABEL_15;
          if ( (unsigned int)MiPteHasShadow(v10, CurrentThread) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v11 & 1) != 0 )
              v11 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v11;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v11);
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v11 & 1) != 0 )
            {
              LODWORD(CurrentThread) = 0;
              v11 |= 0x8000000000000000uLL;
            }
LABEL_15:
            *(_QWORD *)i = v11;
          }
LABEL_16:
          ++*(_QWORD *)(a1 + 24);
          goto LABEL_17;
        }
        LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(a1, (__int64)(i << 25) >> 16, v8);
        if ( (_DWORD)CurrentThread )
          goto LABEL_16;
      }
LABEL_17:
      ++v3;
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v3 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
        {
          if ( (unsigned int)MiWorkingSetIsContended(*(_QWORD *)(a1 + 48))
            || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
          {
            MiUnlockPoolCommitWs(a1);
            LODWORD(CurrentThread) = MiLockPoolCommitWs(a1);
          }
        }
      }
    }
  }
  return (int)CurrentThread;
}

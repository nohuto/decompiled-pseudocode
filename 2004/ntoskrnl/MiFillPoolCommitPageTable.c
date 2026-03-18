/*
 * XREFs of MiFillPoolCommitPageTable @ 0x1402B6940
 * Callers:
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockPoolCommitPageTable @ 0x140258850 (MiLockPoolCommitPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x1402589F8 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x140258A48 (MiLockPoolCommitWs.c)
 *     MiAssignNonPagedPoolPte @ 0x14025F380 (MiAssignNonPagedPoolPte.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

int __fastcall MiFillPoolCommitPageTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR i; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  BOOL v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
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
      v9 = v7;
      if ( v7
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v16 = *((_QWORD *)&Flink->Flink + ((i >> 3) & 0x1FF));
          v17 = v6 | 0x20;
          if ( (v16 & 0x20) == 0 )
            v17 = v6;
          v6 = v17;
          if ( (v16 & 0x42) != 0 )
            v6 = v17 | 0x42;
        }
      }
      if ( !v6 )
        goto LABEL_11;
      if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
        v6 &= ~qword_140C4DD40;
      v6 >>= 28;
      if ( v6 == 0xFFFFFFFFFLL )
        CurrentThread = 0LL;
      else
LABEL_11:
        CurrentThread = (struct _KTHREAD *)(8 * v6 - 0x94000000000LL);
      *(_QWORD *)(a1 + 32) = CurrentThread;
      v10 = *(unsigned __int16 *)(a1 + 78);
      if ( (v10 & 1) != 0 )
      {
        v18 = ZeroPte;
        if ( (_DWORD)v9 )
        {
          if ( (unsigned int)MiPteHasShadow(v10, ZeroPte, v9, v8) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v18 & 1) != 0 )
              v18 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v18;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v18);
            goto LABEL_17;
          }
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v18 & 1) != 0 )
          {
            LODWORD(CurrentThread) = 0;
            v18 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)i = v18;
      }
      else
      {
        if ( (v10 & 2) != 0 )
        {
          CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(4LL * ((unsigned __int8)v10 & 0xF8));
          v14 = (unsigned __int64)CurrentThread;
          if ( !(_DWORD)v12 )
            goto LABEL_15;
          if ( (unsigned int)MiPteHasShadow(v11, CurrentThread, v12, v13) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v14 & 1) != 0 )
              v14 |= 0x8000000000000000uLL;
            *(_QWORD *)i = v14;
            LODWORD(CurrentThread) = MiWritePteShadow(i, v14);
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
            {
              LODWORD(CurrentThread) = 0;
              v14 |= 0x8000000000000000uLL;
            }
LABEL_15:
            *(_QWORD *)i = v14;
          }
LABEL_16:
          ++*(_QWORD *)(a1 + 24);
          goto LABEL_17;
        }
        LODWORD(CurrentThread) = MiAssignNonPagedPoolPte(a1, (__int64)(i << 25) >> 16, v9, v8);
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
            LODWORD(CurrentThread) = MiLockPoolCommitWs(a1);
          }
        }
      }
    }
  }
  return (int)CurrentThread;
}

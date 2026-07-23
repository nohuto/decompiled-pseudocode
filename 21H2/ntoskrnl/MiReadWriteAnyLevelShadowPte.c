/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x140226A60
 * Callers:
 *     MiCheckKernelShadow @ 0x140226740 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0474 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x1407A0568 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  _KPROCESS *Process; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 *Flink; // r13
  char v9; // r14
  unsigned __int64 *v10; // rsi
  __int64 v11; // r15
  ULONG_PTR v12; // r12
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rsi
  __int64 v15; // rax
  ULONG_PTR v16; // rax
  unsigned __int64 v18; // rbx
  int v19; // r12d
  __int64 v20; // rcx
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  BOOL v23; // ebx
  __int64 v24; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v28; // [rsp+50h] [rbp-10h]
  char v29; // [rsp+A8h] [rbp+48h] BYREF
  int v30; // [rsp+B0h] [rbp+50h]

  v30 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (int)a2;
  v26 = (int)a2;
  v7 = (int)a2;
  v28 = 0LL;
  Flink = (unsigned __int64 *)Process[1].ProcessListEntry.Flink;
  if ( (int)a2 < 4LL )
  {
    a2 = 4LL;
    do
    {
      BugCheckParameter2[v6] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  BugCheckParameter4 = 0LL;
  v9 = 17;
  v29 = 17;
  v10 = Flink;
  v11 = (int)a2;
  do
  {
    v12 = BugCheckParameter2[--v11];
    if ( v11 == 3 )
    {
      v10 += (v12 >> 3) & 0x1FF;
    }
    else
    {
      if ( v9 != 17 )
      {
        LOBYTE(a2) = v9;
        MiUnmapPageInHyperSpaceWorker(Flink, a2, 0x80000000LL);
      }
      v13 = BugCheckParameter4;
      v14 = BugCheckParameter4;
      if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter4)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v21 )
        {
          v13 |= 0x20uLL;
          v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v22 & 0x20) == 0 )
            v13 = v14;
          if ( (v22 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        else
        {
          v13 = BugCheckParameter4;
        }
      }
      v15 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, &v29, 0x80000000LL);
      v9 = v29;
      Flink = (unsigned __int64 *)v15;
      v7 = v26;
      v10 = (unsigned __int64 *)(v15 + 8 * ((v12 >> 3) & 0x1FF));
    }
    if ( v30 && v11 == v7 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v11 )
          a4 |= 0x100uLL;
        v18 = a4;
        v19 = 0;
        if ( (unsigned int)MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v20, a2) )
          {
            v19 = 1;
            if ( !HIBYTE(word_140C4E048) && (a4 & 1) != 0 )
              v18 = a4 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (a4 & 1) != 0 )
            {
              v18 = a4 | 0x8000000000000000uLL;
            }
            v9 = v29;
          }
        }
        *v10 = v18;
        if ( v19 )
          goto LABEL_49;
      }
      else
      {
        v23 = 0;
        if ( (unsigned int)MiPteInShadowRange(v10) )
          v23 = MiPteHasShadow(v24, a2) != 0;
        *v10 = a4;
        if ( v23 )
LABEL_49:
          MiWritePteShadow(v10);
      }
    }
    else
    {
      v16 = MI_READ_PTE_LOCK_FREE(v10);
      BugCheckParameter4 = v16;
      if ( v11 && (v16 & 1) != 0 && (v16 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v12, 0LL, BugCheckParameter4);
    }
    v7 = v26;
  }
  while ( v11 != v26 );
  if ( v9 != 17 )
  {
    LOBYTE(a2) = v9;
    MiUnmapPageInHyperSpaceWorker(Flink, a2, 0x80000000LL);
  }
  return BugCheckParameter4;
}

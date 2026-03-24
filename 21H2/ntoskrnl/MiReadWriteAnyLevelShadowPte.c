/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1402A8920
 * Callers:
 *     MiCheckKernelShadow @ 0x1402A8600 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x1407A0274 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x1407A0368 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x1408D1964 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  __int64 v15; // r9
  __int64 v16; // rax
  ULONG_PTR v17; // rax
  unsigned __int64 v19; // rbx
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // rax
  BOOL v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v34; // [rsp+50h] [rbp-10h]
  char v35; // [rsp+A8h] [rbp+48h] BYREF
  int v36; // [rsp+B0h] [rbp+50h]

  v36 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (int)a2;
  v32 = (int)a2;
  v7 = (int)a2;
  v34 = 0LL;
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
  v35 = 17;
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
      if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter4, a2)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v13 |= 0x20uLL;
          v26 = *((_QWORD *)&v25->Flink + (((unsigned __int64)&BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v26 & 0x20) == 0 )
            v13 = v14;
          if ( (v26 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        else
        {
          v13 = BugCheckParameter4;
        }
      }
      v16 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, &v35, 0x80000000LL, v15);
      v9 = v35;
      Flink = (unsigned __int64 *)v16;
      v7 = v32;
      v10 = (unsigned __int64 *)(v16 + 8 * ((v12 >> 3) & 0x1FF));
    }
    if ( v36 && v11 == v7 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v11 )
          a4 |= 0x100uLL;
        v19 = a4;
        v20 = 0;
        if ( (unsigned int)MiPteInShadowRange(v10, a2) )
        {
          if ( (unsigned int)MiPteHasShadow(v21, a2, v22, v23) )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C4E008) && (a4 & 1) != 0 )
              v19 = a4 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (a4 & 1) != 0 )
            {
              v19 = a4 | 0x8000000000000000uLL;
            }
            v9 = v35;
          }
        }
        *v10 = v19;
        if ( v20 )
        {
          v24 = v19;
LABEL_50:
          MiWritePteShadow(v10, v24);
        }
      }
      else
      {
        v27 = 0;
        if ( (unsigned int)MiPteInShadowRange(v10, a2) )
          v27 = MiPteHasShadow(v28, a2, v29, v30) != 0;
        *v10 = a4;
        if ( v27 )
        {
          v24 = a4;
          goto LABEL_50;
        }
      }
    }
    else
    {
      v17 = MI_READ_PTE_LOCK_FREE(v10);
      BugCheckParameter4 = v17;
      if ( v11 && (v17 & 1) != 0 && (v17 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v12, 0LL, BugCheckParameter4);
    }
    v7 = v32;
  }
  while ( v11 != v32 );
  if ( v9 != 17 )
  {
    LOBYTE(a2) = v9;
    MiUnmapPageInHyperSpaceWorker(Flink, a2, 0x80000000LL);
  }
  return BugCheckParameter4;
}

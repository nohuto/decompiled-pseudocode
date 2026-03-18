/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1402FE740
 * Callers:
 *     MiCheckKernelShadow @ 0x1402FE420 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x140795D54 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x140795E48 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x1408D41A4 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, unsigned __int64 a4)
{
  _KPROCESS *Process; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 Flink; // r13
  unsigned __int8 v9; // r14
  _QWORD *v10; // rsi
  __int64 v11; // r15
  ULONG_PTR v12; // r12
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rsi
  __int64 v15; // rax
  ULONG_PTR v16; // rax
  unsigned __int64 v18; // rbx
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // rax
  BOOL v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v35; // [rsp+50h] [rbp-10h]
  char v36; // [rsp+A8h] [rbp+48h] BYREF
  int v37; // [rsp+B0h] [rbp+50h]

  v37 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a2;
  v33 = a2;
  v7 = a2;
  v35 = 0LL;
  Flink = (unsigned __int64)Process[1].ProcessListEntry.Flink;
  if ( a2 < 4LL )
  {
    a2 = 4;
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
  v36 = 17;
  v10 = (_QWORD *)Flink;
  v11 = a2;
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
        MiUnmapPageInHyperSpaceWorker(Flink, v9, 0x80000000);
      v13 = BugCheckParameter4;
      v14 = BugCheckParameter4;
      if ( MiPteInShadowRange((unsigned __int64)&BugCheckParameter4)
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
      v15 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, &v36, 0x80000000LL);
      v9 = v36;
      Flink = v15;
      v7 = v33;
      v10 = (_QWORD *)(v15 + 8 * ((v12 >> 3) & 0x1FF));
    }
    if ( v37 && v11 == v7 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v11 )
          a4 |= 0x100uLL;
        v18 = a4;
        v19 = 0;
        if ( MiPteInShadowRange((unsigned __int64)v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
          {
            v19 = 1;
            if ( !HIBYTE(word_140C4DE88) && (a4 & 1) != 0 )
              v18 = a4 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (a4 & 1) != 0 )
            {
              v18 = a4 | 0x8000000000000000uLL;
            }
            v9 = v36;
          }
        }
        *v10 = v18;
        if ( v19 )
        {
          v24 = v18;
LABEL_50:
          MiWritePteShadow(v10, v24);
        }
      }
      else
      {
        v27 = 0;
        if ( MiPteInShadowRange((unsigned __int64)v10) )
          v27 = MiPteHasShadow(v29, v28, v30, v31) != 0;
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
      v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
      BugCheckParameter4 = v16;
      if ( v11 && (v16 & 1) != 0 && (v16 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v12, 0LL, BugCheckParameter4);
    }
    v7 = v33;
  }
  while ( v11 != v33 );
  if ( v9 != 17 )
    MiUnmapPageInHyperSpaceWorker(Flink, v9, 0x80000000);
  return BugCheckParameter4;
}

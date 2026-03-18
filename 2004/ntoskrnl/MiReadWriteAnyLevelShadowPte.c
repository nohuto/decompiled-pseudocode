/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1403619F0
 * Callers:
 *     MiCheckKernelShadow @ 0x1403616D8 (MiCheckKernelShadow.c)
 *     MiMakeShadowPageTableRange @ 0x140788044 (MiMakeShadowPageTableRange.c)
 *     MiInitializeShadowPageTable @ 0x140788138 (MiInitializeShadowPageTable.c)
 *     MmDeleteShadowMapping @ 0x1408CE364 (MmDeleteShadowMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  ULONG_PTR v17; // rax
  unsigned __int64 v19; // rbx
  int v20; // r12d
  __int64 v21; // r8
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  BOOL v25; // ebx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v29; // [rsp+50h] [rbp-10h]
  unsigned __int8 v30; // [rsp+A8h] [rbp+48h] BYREF
  int v31; // [rsp+B0h] [rbp+50h]

  v31 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a2;
  v27 = a2;
  v7 = a2;
  v29 = 0LL;
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
  v30 = 17;
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
        v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v23 )
        {
          v13 |= 0x20uLL;
          v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v24 & 0x20) == 0 )
            v13 = v14;
          if ( (v24 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        else
        {
          v13 = BugCheckParameter4;
        }
      }
      v16 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, &v30, 0x80000000, v15);
      v9 = v30;
      Flink = v16;
      v7 = v27;
      v10 = (_QWORD *)(v16 + 8 * ((v12 >> 3) & 0x1FF));
    }
    if ( v31 && v11 == v7 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( !v11 )
          a4 |= 0x100uLL;
        v19 = a4;
        v20 = 0;
        if ( MiPteInShadowRange((unsigned __int64)v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C4DE08) && (a4 & 1) != 0 )
              v19 = a4 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (a4 & 1) != 0 )
            {
              v19 = a4 | 0x8000000000000000uLL;
            }
            v9 = v30;
          }
        }
        *v10 = v19;
        if ( v20 )
        {
          v22 = v19;
LABEL_50:
          MiWritePteShadow((__int64)v10, v22, v21);
        }
      }
      else
      {
        v25 = 0;
        if ( MiPteInShadowRange((unsigned __int64)v10) )
          v25 = MiPteHasShadow() != 0;
        *v10 = a4;
        if ( v25 )
        {
          v22 = a4;
          goto LABEL_50;
        }
      }
    }
    else
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
      BugCheckParameter4 = v17;
      if ( v11 && (v17 & 1) != 0 && (v17 & 0x80u) != 0LL )
        KeBugCheckEx(0x1Au, 0x3606uLL, v12, 0LL, BugCheckParameter4);
    }
    v7 = v27;
  }
  while ( v11 != v27 );
  if ( v9 != 17 )
    MiUnmapPageInHyperSpaceWorker(Flink, v9, 0x80000000);
  return BugCheckParameter4;
}

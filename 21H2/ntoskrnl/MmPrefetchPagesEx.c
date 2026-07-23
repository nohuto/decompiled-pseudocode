/*
 * XREFs of MmPrefetchPagesEx @ 0x140685FC4
 * Callers:
 *     PfSnPrefetchSections @ 0x140675014 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x140678220 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1406847C0 (MmPrefetchPages.c)
 *     PfpPrefetchFiles @ 0x1408DF9C0 (PfpPrefetchFiles.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiPfCompletePrefetchIos @ 0x140307850 (MiPfCompletePrefetchIos.c)
 *     MiReleaseReadListResources @ 0x1406FFEF4 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1407004E4 (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  char *Pool; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int v11; // ebx
  unsigned int v12; // r13d
  _QWORD *v13; // r14
  char *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r15
  int List; // eax
  int v18; // ecx
  char v20; // bl
  unsigned int v21; // r12d
  unsigned int v22; // ebp
  __int64 *v23; // r14
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // rbp
  PVOID *v29; // rbx
  _SLIST_ENTRY **v30; // rax
  _SLIST_ENTRY *v31; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _KTHREAD *v33; // [rsp+20h] [rbp-48h]
  PVOID v35; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  Pool = (char *)MiAllocatePool(64, 8LL * a1, 0x6C526D4Du);
  v35 = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v12 = 0;
  v33 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v13 = Pool;
    v14 = Pool;
    v15 = a2 - (_QWORD)Pool;
    v16 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(_QWORD *)((char *)v13 + v15), v14, a3);
      if ( List < 0 )
      {
        v12 = List;
      }
      else
      {
        v18 = v11 | 1;
        if ( !*v13 )
          v18 = v11;
        v11 = v18;
      }
      v14 += 8;
      ++v13;
      --v16;
    }
    while ( v16 );
    v9 = v35;
    CurrentThread = v33;
  }
  if ( (v11 & 1) == 0 )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
    ExFreePoolWithTag(v9, 0);
    return v12;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v20 = v11 & 0xFE;
  v21 = 0;
  v22 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v23 = (__int64 *)v9;
  while ( !*v23 )
  {
LABEL_19:
    ++v22;
    ++v23;
    if ( v22 >= (unsigned int)v3 )
      goto LABEL_20;
  }
  *(_DWORD *)(*v23 + 104) = 0;
  v24 = MiPfPutPagesInTransition(*v23, a3, 0);
  if ( v24 >= 0 )
  {
    v25 = *v23;
    if ( *(_QWORD *)(*v23 + 120) == *v23 + 120 )
    {
      MiReleaseReadListResources(v25);
      ExFreePoolWithTag((PVOID)*v23, 0);
      *v23 = 0LL;
    }
    else
    {
      v20 |= 1u;
      MiPfExecuteReadList(v25, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_19;
  }
  v21 = v24;
  while ( v22 < (unsigned int)v3 )
  {
    if ( *((_QWORD *)v9 + v22) )
    {
      while ( 1 )
      {
        v30 = (_SLIST_ENTRY **)(*((_QWORD *)v9 + v22) + 120LL);
        v31 = *v30;
        if ( *v30 == (_SLIST_ENTRY *)v30 )
          break;
        if ( *((_SLIST_ENTRY ***)&v31->Next + 1) != v30 || (Next = v31->Next, *(&v31->Next->Next + 1) != v31) )
          __fastfail(3u);
        *v30 = Next;
        *((_QWORD *)&Next->Next + 1) = v30;
        MiFreeInPageSupportBlock(v31);
      }
      MiReleaseReadListResources(*((_QWORD *)v9 + v22));
      ExFreePoolWithTag(*((PVOID *)v9 + v22), 0);
      *((_QWORD *)v9 + v22) = 0LL;
    }
    ++v22;
  }
LABEL_20:
  v26 = v3;
  if ( (v20 & 1) != 0 )
  {
    v21 = 0;
    if ( (_DWORD)v3 )
    {
      v27 = v9;
      v28 = v3;
      do
      {
        if ( *v27 )
        {
          MiPfCompletePrefetchIos((_QWORD *)(*v27 + 120LL), 0LL, 0LL);
          MiReleaseReadListResources(*v27);
        }
        ++v27;
        --v28;
      }
      while ( v28 );
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  --BYTE6(CurrentThread[1].Queue);
  if ( (_DWORD)v3 )
  {
    v29 = (PVOID *)v9;
    do
    {
      if ( *v29 )
        ExFreePoolWithTag(*v29, 0);
      ++v29;
      --v26;
    }
    while ( v26 );
  }
  ExFreePoolWithTag(v9, 0);
  return v21;
}

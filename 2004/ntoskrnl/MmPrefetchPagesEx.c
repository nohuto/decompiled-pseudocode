/*
 * XREFs of MmPrefetchPagesEx @ 0x140609B58
 * Callers:
 *     MmPrefetchPages @ 0x140609B40 (MmPrefetchPages.c)
 *     PfpPrefetchFilesTrickle @ 0x14060AC10 (PfpPrefetchFilesTrickle.c)
 *     PfSnPrefetchSections @ 0x1406BC9E4 (PfSnPrefetchSections.c)
 *     PfpPrefetchFiles @ 0x1408DC260 (PfpPrefetchFiles.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x1402634D4 (MiPfCompletePrefetchIos.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x14060931C (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140609ED4 (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  PVOID Pool; // rax
  void *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int v8; // ebx
  unsigned int v9; // r13d
  _QWORD *v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r15
  int List; // eax
  int v15; // ecx
  char v17; // bl
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int64 *v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 *v24; // rbx
  __int64 v25; // rbp
  PVOID *v26; // rbx
  _SLIST_ENTRY **v27; // rax
  _SLIST_ENTRY *v28; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _KTHREAD *v30; // [rsp+20h] [rbp-48h]
  PVOID v32; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  Pool = MiAllocatePool(64, 8LL * a1, 0x6C526D4Du);
  v32 = Pool;
  v6 = Pool;
  if ( !Pool )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  v30 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v10 = Pool;
    v11 = Pool;
    v12 = a2 - (_QWORD)Pool;
    v13 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(unsigned __int64 **)((char *)v10 + v12), v11, a3);
      if ( List < 0 )
      {
        v9 = List;
      }
      else
      {
        v15 = v8 | 1;
        if ( !*v10 )
          v15 = v8;
        v8 = v15;
      }
      ++v11;
      ++v10;
      --v13;
    }
    while ( v13 );
    v6 = v32;
    CurrentThread = v30;
  }
  if ( (v8 & 1) == 0 )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v6, 0);
    return v9;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v17 = v8 & 0xFE;
  v18 = 0;
  v19 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v20 = (__int64 *)v6;
  while ( !*v20 )
  {
LABEL_19:
    ++v19;
    ++v20;
    if ( v19 >= (unsigned int)v3 )
      goto LABEL_20;
  }
  *(_DWORD *)(*v20 + 104) = 0;
  v21 = MiPfPutPagesInTransition(*v20, a3, 0);
  if ( v21 >= 0 )
  {
    v22 = *v20;
    if ( *(_QWORD *)(*v20 + 120) == *v20 + 120 )
    {
      MiReleaseReadListResources(v22);
      ExFreePoolWithTag((PVOID)*v20, 0);
      *v20 = 0LL;
    }
    else
    {
      v17 |= 1u;
      MiPfExecuteReadList(v22, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_19;
  }
  v18 = v21;
  while ( v19 < (unsigned int)v3 )
  {
    if ( *((_QWORD *)v6 + v19) )
    {
      while ( 1 )
      {
        v27 = (_SLIST_ENTRY **)(*((_QWORD *)v6 + v19) + 120LL);
        v28 = *v27;
        if ( *v27 == (_SLIST_ENTRY *)v27 )
          break;
        if ( *((_SLIST_ENTRY ***)&v28->Next + 1) != v27 || (Next = v28->Next, *(&v28->Next->Next + 1) != v28) )
          __fastfail(3u);
        *v27 = Next;
        *((_QWORD *)&Next->Next + 1) = v27;
        MiFreeInPageSupportBlock(v28);
      }
      MiReleaseReadListResources(*((_QWORD *)v6 + v19));
      ExFreePoolWithTag(*((PVOID *)v6 + v19), 0);
      *((_QWORD *)v6 + v19) = 0LL;
    }
    ++v19;
  }
LABEL_20:
  v23 = v3;
  if ( (v17 & 1) != 0 )
  {
    v18 = 0;
    if ( (_DWORD)v3 )
    {
      v24 = (__int64 *)v6;
      v25 = v3;
      do
      {
        if ( *v24 )
        {
          MiPfCompletePrefetchIos((_QWORD **)(*v24 + 120), 0LL, 0LL);
          MiReleaseReadListResources(*v24);
        }
        ++v24;
        --v25;
      }
      while ( v25 );
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  if ( (_DWORD)v3 )
  {
    v26 = (PVOID *)v6;
    do
    {
      if ( *v26 )
        ExFreePoolWithTag(*v26, 0);
      ++v26;
      --v23;
    }
    while ( v23 );
  }
  ExFreePoolWithTag(v6, 0);
  return v18;
}

/*
 * XREFs of TpAllocPoolInternal @ 0x180061844
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180061628 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180061800 (TpAllocPool.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     TppInitializeTimerQueue @ 0x180061D30 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x180061EAC (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtCreateIoCompletion @ 0x18009E620 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x18009EA20 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 *     TpSetPoolThreadCpuSets @ 0x180112060 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x180112A88 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int i; // r8d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  int updated; // ebx
  __int64 v18; // r9
  HANDLE *v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  HANDLE *v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  int v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  __int64 v37; // [rsp+68h] [rbp-60h]
  int v38[16]; // [rsp+88h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  int v41; // [rsp+D8h] [rbp+10h] BYREF
  int v42; // [rsp+E0h] [rbp+18h]

  v2 = a1;
  v37 = 0LL;
  *a1 = 0LL;
  v41 = a2 & 1;
  v3 = RtlImageNtHeader((unsigned __int64)NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v3 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 96);
    v5 = *(unsigned int *)(v3 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 472LL);
  v36 = Heap;
  if ( !Heap )
    goto LABEL_37;
  v42 = TppHeapTag + 786432;
  v37 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
  if ( !v37 )
  {
    updated = -1073741801;
    v35 = -1073741801;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = (unsigned int)TppNumberNodes;
  while ( v9 < 3 )
  {
    *(_QWORD *)(Heap + 8LL * v9 + 16) = v37 + 24LL * v9 * (unsigned int)v10;
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = (_QWORD *)(v37 + 24LL * i);
    v12[2] = 0LL;
    v12[1] = v12;
    *v12 = v12;
  }
  v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v10);
  *(_QWORD *)(Heap + 40) = v13;
  if ( !v13
    || (v14 = RtlAllocateHeap(
                (__int64)NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8u,
                16LL * (unsigned int)TppNumberNodes),
        (*(_QWORD *)(Heap + 48) = v14) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v35 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(Heap + 440);
  v16 = *(_DWORD *)(Heap + 440);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  *(_DWORD *)(Heap + 424) = v16;
  updated = TppPoolUpdateNodeRelation(Heap);
  v35 = updated;
  if ( updated >= 0 )
  {
    *(_DWORD *)(Heap + 428) = -2;
    *(_QWORD *)(Heap + 8) = (unsigned __int16)v16;
    *(_DWORD *)Heap = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4LL;
    v19 = (HANDLE *)(Heap + 64);
    updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v18);
    v35 = updated;
    if ( updated >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      v21 = 4 * v20;
      if ( v21 < 0x200 )
        v21 = 512;
      v22 = (HANDLE *)(Heap + 56);
      updated = NtCreateWorkerFactory(Heap + 56, 983295LL, 0LL, *v19, -1LL, TppWorkerThread, Heap, v21, v4, v5);
      v35 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( v41 )
      {
        updated = NtSetInformationWorkerFactory(*v22, 13LL, &v41);
        v35 = updated;
        if ( updated < 0 )
        {
LABEL_35:
          if ( updated < 0 )
          {
            NtClose(*v19);
            if ( *v22 )
            {
              NtClose(*v22);
              *v22 = 0LL;
            }
          }
          goto LABEL_36;
        }
        *(_WORD *)(Heap + 378) = v41;
      }
      *(_QWORD *)(Heap + 72) = 0LL;
      *(_QWORD *)(Heap + 368) = 0LL;
      *(_QWORD *)(Heap + 448) = 0LL;
      *(_WORD *)(Heap + 376) = 0;
      *(_QWORD *)(Heap + 88) = Heap + 80;
      *(_QWORD *)(Heap + 80) = Heap + 80;
      *(_QWORD *)(Heap + 104) = Heap + 96;
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 464) = Heap + 456;
      *(_QWORD *)(Heap + 456) = Heap + 456;
      TppGetCurrentThreadNumaNode(Heap, v38, 0LL);
      *(_QWORD *)(Heap + 400) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 112, Heap);
      v35 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v35 = 0;
        RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v23, v24, v25);
        v26 = (_QWORD *)(Heap + 384);
        v27 = off_1801666E8;
        if ( *off_1801666E8 != (_UNKNOWN *)&TppPoolpList )
          __fastfail(3u);
        *v26 = &TppPoolpList;
        *(_QWORD *)(Heap + 392) = v27;
        *v27 = v26;
        off_1801666E8 = (_UNKNOWN **)(Heap + 384);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock, v28, v29, v30);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets);
          v35 = updated;
        }
        RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
      }
      goto LABEL_35;
    }
  }
LABEL_36:
  v2 = a1;
LABEL_42:
  if ( updated >= 0 )
    goto LABEL_43;
  if ( Heap )
  {
    if ( v37 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v37);
    v33 = *(_QWORD *)(Heap + 40);
    if ( v33 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v33);
    v34 = *(_QWORD *)(Heap + 48);
    if ( v34 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v34);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = 0LL;
    v36 = 0LL;
    updated = v35;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v31 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v35;
      Heap = v36;
    }
    else
    {
      v31 = 2147353478LL;
    }
    if ( *(_BYTE *)v31 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}

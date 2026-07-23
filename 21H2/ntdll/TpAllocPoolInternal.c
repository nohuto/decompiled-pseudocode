/*
 * XREFs of TpAllocPoolInternal @ 0x180062D34
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180062B18 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180062CF0 (TpAllocPool.c)
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
 *     TppInitializeTimerQueue @ 0x180063220 (TppInitializeTimerQueue.c)
 *     TppPoolUpdateNodeRelation @ 0x18006339C (TppPoolUpdateNodeRelation.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtCreateIoCompletion @ 0x18009EB90 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x18009EF90 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0A10 (NtSetInformationWorkerFactory.c)
 *     TpSetPoolThreadCpuSets @ 0x180111EC0 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x1801128E8 (TppETWPoolCreate.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  PIMAGE_NT_HEADERS v3; // rax
  SIZE_T StackReserve; // r13
  SIZE_T StackCommit; // r14
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  char *StartParameter; // rdi
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int i; // r8d
  char *v12; // rdx
  PVOID Heap; // rax
  PVOID v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  NTSTATUS updated; // ebx
  ULONG v18; // r9d
  HANDLE *v19; // r12
  int v20; // eax
  ULONG MaxThreadCount; // eax
  HANDLE *v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  void *v27; // r8
  void *v28; // r8
  int v29; // [rsp+50h] [rbp-78h]
  char *v30; // [rsp+58h] [rbp-70h]
  char *BaseAddress; // [rsp+68h] [rbp-60h]
  int v32[16]; // [rsp+88h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+D8h] [rbp+10h] BYREF
  ULONG Flags; // [rsp+E0h] [rbp+18h]

  v2 = a1;
  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v3 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v3 )
    return (unsigned int)-1073741701;
  if ( v3->OptionalHeader.Magic == 523 )
  {
    StackReserve = v3->OptionalHeader.SizeOfStackReserve;
    StackCommit = v3->OptionalHeader.SizeOfStackCommit;
  }
  else
  {
    StackReserve = LODWORD(v3->OptionalHeader.SizeOfStackReserve);
    StackCommit = HIDWORD(v3->OptionalHeader.SizeOfStackReserve);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  StartParameter = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D8uLL);
  v30 = StartParameter;
  if ( !StartParameter )
    goto LABEL_37;
  Flags = TppHeapTag + 786432;
  BaseAddress = (char *)RtlAllocateHeap(
                          NtCurrentPeb()->ProcessHeap,
                          TppHeapTag + 786432,
                          72LL * (unsigned int)TppNumberNodes);
  if ( !BaseAddress )
  {
    updated = -1073741801;
    v29 = -1073741801;
    goto LABEL_42;
  }
  v9 = 0;
  v10 = (unsigned int)TppNumberNodes;
  while ( v9 < 3 )
  {
    *(_QWORD *)&StartParameter[8 * v9 + 16] = &BaseAddress[24 * v9 * (unsigned int)v10];
    ++v9;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = &BaseAddress[24 * i];
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 1) = v12;
    *(_QWORD *)v12 = v12;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v10);
  *((_QWORD *)StartParameter + 5) = Heap;
  if ( !Heap
    || (v14 = RtlAllocateHeap(
                NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8,
                16LL * (unsigned int)TppNumberNodes),
        (*((_QWORD *)StartParameter + 6) = v14) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v29 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(StartParameter + 440);
  v16 = *((_DWORD *)StartParameter + 110);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  *((_DWORD *)StartParameter + 106) = v16;
  updated = TppPoolUpdateNodeRelation(StartParameter);
  v29 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)StartParameter + 107) = -2;
    *((_QWORD *)StartParameter + 1) = (unsigned __int16)v16;
    *(_DWORD *)StartParameter = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4;
    v19 = (HANDLE *)(StartParameter + 64);
    updated = NtCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v18);
    v29 = updated;
    if ( updated >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      MaxThreadCount = 4 * v20;
      if ( MaxThreadCount < 0x200 )
        MaxThreadCount = 512;
      v22 = (HANDLE *)(StartParameter + 56);
      updated = NtCreateWorkerFactory(
                  (PHANDLE)StartParameter + 7,
                  0xF00FFu,
                  0LL,
                  *v19,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  TppWorkerThread,
                  StartParameter,
                  MaxThreadCount,
                  StackReserve,
                  StackCommit);
      v29 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( WorkerFactoryInformation )
      {
        updated = NtSetInformationWorkerFactory(*v22, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
        v29 = updated;
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
        *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
      }
      *((_QWORD *)StartParameter + 9) = 0LL;
      *((_QWORD *)StartParameter + 46) = 0LL;
      *((_QWORD *)StartParameter + 56) = 0LL;
      *((_WORD *)StartParameter + 188) = 0;
      *((_QWORD *)StartParameter + 11) = StartParameter + 80;
      *((_QWORD *)StartParameter + 10) = StartParameter + 80;
      *((_QWORD *)StartParameter + 13) = StartParameter + 96;
      *((_QWORD *)StartParameter + 12) = StartParameter + 96;
      *((_QWORD *)StartParameter + 58) = StartParameter + 456;
      *((_QWORD *)StartParameter + 57) = StartParameter + 456;
      TppGetCurrentThreadNumaNode((__int64)StartParameter, v32, 0LL);
      *((_QWORD *)StartParameter + 50) = retaddr;
      updated = TppInitializeTimerQueue(StartParameter + 112, StartParameter);
      v29 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v29 = 0;
        RtlAcquireSRWLockExclusive(&TppPoolpListLock);
        v23 = StartParameter + 384;
        v24 = off_1801666E8;
        if ( *off_1801666E8 != (_UNKNOWN *)&TppPoolpList )
          __fastfail(3u);
        *v23 = &TppPoolpList;
        *((_QWORD *)StartParameter + 49) = v24;
        *v24 = v23;
        off_1801666E8 = (_UNKNOWN **)(StartParameter + 384);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(StartParameter, &TppPoolpDefaultPoolCpuSets);
          v29 = updated;
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
  if ( StartParameter )
  {
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
    v27 = (void *)*((_QWORD *)StartParameter + 5);
    if ( v27 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v27);
    v28 = (void *)*((_QWORD *)StartParameter + 6);
    if ( v28 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, StartParameter);
    StartParameter = 0LL;
    v30 = 0LL;
    updated = v29;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
      updated = v29;
      StartParameter = v30;
    }
    else
    {
      v25 = 2147353478LL;
    }
    if ( *(_BYTE *)v25 )
      TppETWPoolCreate(StartParameter);
  }
  return (unsigned int)updated;
}

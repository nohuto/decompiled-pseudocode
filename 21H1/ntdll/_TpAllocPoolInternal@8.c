/*
 * XREFs of _TpAllocPoolInternal@8 @ 0x4B2B37A4
 * Callers:
 *     _LdrpEnableParallelLoading@4 @ 0x4B2AEBCB (_LdrpEnableParallelLoading@4.c)
 *     _TpAllocPool@8 @ 0x4B2B1E30 (_TpAllocPool@8.c)
 * Callees:
 *     _TppPoolUpdateNodeRelation@4 @ 0x4B2B36E2 (_TppPoolUpdateNodeRelation@4.c)
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _TppInitializeTimerQueue@8 @ 0x4B2B4037 (_TppInitializeTimerQueue@8.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateIoCompletion@16 @ 0x4B2F3440 (_NtCreateIoCompletion@16.c)
 *     _NtCreateWorkerFactory@40 @ 0x4B2F3640 (_NtCreateWorkerFactory@40.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TpSetPoolThreadCpuSets@12 @ 0x4B383E50 (_TpSetPoolThreadCpuSets@12.c)
 *     _TppETWPoolCreate@4 @ 0x4B384BF7 (_TppETWPoolCreate@4.c)
 */

int __fastcall TpAllocPoolInternal(_DWORD *a1, char a2)
{
  PIMAGE_NT_HEADERS v2; // eax
  unsigned int SizeOfStackReserve_high; // edi
  unsigned int MinimumStackCommit; // eax
  _DWORD *Heap; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edx
  unsigned int i; // ecx
  _DWORD *v10; // eax
  PVOID v11; // eax
  PVOID v12; // eax
  unsigned int v13; // eax
  int updated; // edi
  ULONG v15; // ecx
  int v16; // eax
  ULONG v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // edx
  int v20; // eax
  _BYTE v22[12]; // [esp-4h] [ebp-7Ch]
  HANDLE *v24; // [esp+34h] [ebp-44h]
  unsigned int StackReserve; // [esp+38h] [ebp-40h]
  int *StackReserve_4; // [esp+3Ch] [ebp-3Ch]
  unsigned int v27; // [esp+44h] [ebp-34h]
  unsigned int v28; // [esp+48h] [ebp-30h]
  int WorkerFactoryInformation; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v30; // [esp+50h] [ebp-28h]
  PVOID BaseAddress; // [esp+54h] [ebp-24h]
  PVOID StartParameter; // [esp+58h] [ebp-20h]
  int v33; // [esp+5Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+7Ch] [ebp+4h]

  v33 = -1073741823;
  BaseAddress = 0;
  *a1 = 0;
  WorkerFactoryInformation = a2 & 1;
  v2 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v2 )
    return -1073741701;
  StackReserve = v2->OptionalHeader.SizeOfStackReserve;
  SizeOfStackReserve_high = HIDWORD(v2->OptionalHeader.SizeOfStackReserve);
  v27 = SizeOfStackReserve_high;
  MinimumStackCommit = NtCurrentPeb()->MinimumStackCommit;
  if ( MinimumStackCommit && SizeOfStackReserve_high < MinimumStackCommit )
    v27 = MinimumStackCommit;
  *(_DWORD *)v22 = 288;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, *(SIZE_T *)v22);
  StartParameter = Heap;
  ms_exc.registration.TryLevel = 0;
  if ( !Heap )
  {
LABEL_48:
    updated = -1073741801;
    v33 = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)v22 = 36 * TppNumberNodes;
  BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(SIZE_T *)v22);
  if ( BaseAddress )
  {
    v6 = 0;
    v30 = 0;
    v7 = StartParameter;
    v8 = TppNumberNodes;
    while ( v6 < 3 )
    {
      v7[v6 + 4] = (char *)BaseAddress + 12 * v6 * v8;
      v30 = ++v6;
    }
    for ( i = 0; ; ++i )
    {
      v30 = i;
      if ( i >= 3 * v8 )
        break;
      v10 = (char *)BaseAddress + 12 * i;
      v10[2] = 0;
      v10[1] = v10;
      *v10 = v10;
    }
    *(_DWORD *)v22 = 4 * v8;
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, *(SIZE_T *)v22);
    Heap = StartParameter;
    *((_DWORD *)StartParameter + 7) = v11;
    if ( v11 )
    {
      *(_DWORD *)v22 = 12 * TppNumberNodes;
      v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, *(SIZE_T *)v22);
      Heap = StartParameter;
      *((_DWORD *)StartParameter + 8) = v12;
      if ( v12 )
      {
        StackReserve_4 = Heap + 68;
        v13 = Heap[68];
        v28 = v13;
        if ( !v13 )
        {
          v13 = MEMORY[0x7FFE03C0];
          v28 = MEMORY[0x7FFE03C0];
        }
        Heap = StartParameter;
        *((_DWORD *)StartParameter + 64) = v13;
        updated = TppPoolUpdateNodeRelation((void **)Heap);
        v33 = updated;
        if ( updated < 0 )
          goto LABEL_31;
        Heap[65] = -2;
        Heap[2] = (unsigned __int16)v28;
        Heap[3] = 0;
        *Heap = 1;
        v15 = v28 < 4 ? 4 : v28 + 1;
        v24 = (HANDLE *)(Heap + 10);
        updated = NtCreateIoCompletion((PHANDLE)Heap + 10, 0x1F0003u, 0, v15);
        v33 = updated;
        if ( updated < 0 )
          goto LABEL_31;
        ms_exc.registration.TryLevel = 1;
        v16 = *StackReserve_4;
        if ( !*StackReserve_4 )
          v16 = MEMORY[0x7FFE03C0];
        v17 = 4 * v16;
        if ( v17 < 0x200 )
          v17 = 512;
        Heap = StartParameter;
        updated = NtCreateWorkerFactory(
                    (PHANDLE)StartParameter + 9,
                    0xF00FFu,
                    0,
                    *v24,
                    (HANDLE)0xFFFFFFFF,
                    TppWorkerThread,
                    StartParameter,
                    v17,
                    __PAIR64__(v27, StackReserve),
                    *(SIZE_T *)&v22[4]);
        v33 = updated;
        if ( updated < 0 )
          goto LABEL_30;
        if ( WorkerFactoryInformation )
        {
          updated = ZwSetInformationWorkerFactory(
                      *((HANDLE *)StartParameter + 9),
                      WorkerFactoryFlags,
                      &WorkerFactoryInformation,
                      4u);
          v33 = updated;
          if ( updated < 0 )
          {
LABEL_30:
            ms_exc.registration.TryLevel = 0;
            if ( updated < 0 )
            {
              NtClose((HANDLE)Heap[10]);
              if ( Heap[9] )
              {
                NtClose((HANDLE)Heap[9]);
                Heap[9] = 0;
              }
            }
            goto LABEL_31;
          }
          *((_WORD *)Heap + 115) = WorkerFactoryInformation;
        }
        Heap[11] = 0;
        Heap[56] = 0;
        Heap[69] = 0;
        *((_WORD *)Heap + 114) = 0;
        Heap[13] = Heap + 12;
        Heap[12] = Heap + 12;
        Heap[15] = Heap + 14;
        Heap[14] = Heap + 14;
        Heap[71] = Heap + 70;
        Heap[70] = Heap + 70;
        TppGetCurrentThreadNumaNode(0);
        Heap = StartParameter;
        *((_DWORD *)StartParameter + 60) = retaddr;
        updated = TppInitializeTimerQueue(Heap + 16, Heap);
        v33 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v33 = 0;
          RtlAcquireSRWLockExclusive(&TppPoolpListLock);
          ms_exc.registration.TryLevel = 2;
          v18 = Heap + 58;
          v19 = off_4B3A3424;
          if ( *off_4B3A3424 != (_UNKNOWN *)&TppPoolpList )
            __fastfail(3u);
          *v18 = &TppPoolpList;
          Heap[59] = v19;
          *v19 = v18;
          off_4B3A3424 = (_UNKNOWN **)(Heap + 58);
          ms_exc.registration.TryLevel = 1;
          RtlReleaseSRWLockExclusive(&TppPoolpListLock);
          RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
          if ( TppPoolpDefaultPoolCpuSetCount )
          {
            updated = TpSetPoolThreadCpuSets((int)Heap, &TppPoolpDefaultPoolCpuSets, TppPoolpDefaultPoolCpuSetCount);
            v33 = updated;
          }
          RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        }
        goto LABEL_30;
      }
    }
    goto LABEL_48;
  }
  updated = -1073741801;
  v33 = -1073741801;
  Heap = StartParameter;
LABEL_31:
  ms_exc.registration.TryLevel = -2;
  if ( updated < 0 && Heap )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      Heap = StartParameter;
    }
    if ( Heap[7] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (PVOID)Heap[7]);
      Heap = StartParameter;
    }
    if ( Heap[8] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (PVOID)Heap[8]);
      Heap = StartParameter;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = 0;
    StartParameter = 0;
    updated = v33;
  }
  if ( updated >= 0 )
  {
    *a1 = Heap;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v20 = (int)NtCurrentPeb()->SharedData + 556;
      updated = v33;
      Heap = StartParameter;
    }
    else
    {
      v20 = 2147353478;
    }
    if ( *(_BYTE *)v20 )
      TppETWPoolCreate(Heap);
  }
  return updated;
}

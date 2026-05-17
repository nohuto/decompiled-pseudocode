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
  int v2; // eax
  unsigned int v3; // edi
  unsigned int MinimumStackCommit; // eax
  _DWORD *Heap; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edx
  unsigned int i; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int updated; // edi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // edx
  int v20; // eax
  _DWORD *v23; // [esp+34h] [ebp-44h]
  int v24; // [esp+38h] [ebp-40h]
  int *v25; // [esp+3Ch] [ebp-3Ch]
  unsigned int v26; // [esp+44h] [ebp-34h]
  unsigned int v27; // [esp+48h] [ebp-30h]
  int v28; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v29; // [esp+50h] [ebp-28h]
  int v30; // [esp+54h] [ebp-24h]
  _DWORD *v31; // [esp+58h] [ebp-20h]
  int v32; // [esp+5Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+7Ch] [ebp+4h]

  v32 = -1073741823;
  v30 = 0;
  *a1 = 0;
  v28 = a2 & 1;
  v2 = RtlImageNtHeader(NtCurrentPeb()->ImageBaseAddress);
  if ( !v2 )
    return -1073741701;
  v24 = *(_DWORD *)(v2 + 96);
  v3 = *(_DWORD *)(v2 + 100);
  v26 = v3;
  MinimumStackCommit = NtCurrentPeb()->MinimumStackCommit;
  if ( MinimumStackCommit && v3 < MinimumStackCommit )
    v26 = MinimumStackCommit;
  Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 288);
  v31 = Heap;
  ms_exc.registration.TryLevel = 0;
  if ( !Heap )
  {
LABEL_48:
    updated = -1073741801;
    v32 = -1073741801;
    goto LABEL_31;
  }
  v30 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 36 * TppNumberNodes);
  if ( v30 )
  {
    v6 = 0;
    v29 = 0;
    v7 = v31;
    v8 = TppNumberNodes;
    while ( v6 < 3 )
    {
      v7[v6 + 4] = v30 + 12 * v6 * v8;
      v29 = ++v6;
    }
    for ( i = 0; ; ++i )
    {
      v29 = i;
      if ( i >= 3 * v8 )
        break;
      v10 = (_DWORD *)(v30 + 12 * i);
      v10[2] = 0;
      v10[1] = v10;
      *v10 = v10;
    }
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v8);
    Heap = v31;
    v31[7] = v11;
    if ( v11 )
    {
      v12 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 12 * TppNumberNodes);
      Heap = v31;
      v31[8] = v12;
      if ( v12 )
      {
        v25 = Heap + 68;
        v13 = Heap[68];
        v27 = v13;
        if ( !v13 )
        {
          v13 = MEMORY[0x7FFE03C0];
          v27 = MEMORY[0x7FFE03C0];
        }
        Heap = v31;
        v31[64] = v13;
        updated = TppPoolUpdateNodeRelation((void **)Heap);
        v32 = updated;
        if ( updated < 0 )
          goto LABEL_31;
        Heap[65] = -2;
        Heap[2] = (unsigned __int16)v27;
        Heap[3] = 0;
        *Heap = 1;
        v15 = v27 < 4 ? 4 : v27 + 1;
        v23 = Heap + 10;
        updated = NtCreateIoCompletion(Heap + 10, 2031619, 0, v15);
        v32 = updated;
        if ( updated < 0 )
          goto LABEL_31;
        ms_exc.registration.TryLevel = 1;
        v16 = *v25;
        if ( !*v25 )
          v16 = MEMORY[0x7FFE03C0];
        v17 = 4 * v16;
        if ( v17 < 0x200 )
          v17 = 512;
        Heap = v31;
        updated = NtCreateWorkerFactory(v31 + 9, 983295, 0, *v23, -1, TppWorkerThread, v31, v17, v24, v26);
        v32 = updated;
        if ( updated < 0 )
          goto LABEL_30;
        if ( v28 )
        {
          updated = ZwSetInformationWorkerFactory(v31[9], 13, &v28, 4);
          v32 = updated;
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
          *((_WORD *)Heap + 115) = v28;
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
        Heap = v31;
        v31[60] = retaddr;
        updated = TppInitializeTimerQueue(Heap + 16, Heap);
        v32 = updated;
        if ( updated >= 0 )
        {
          updated = 0;
          v32 = 0;
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
            updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets, TppPoolpDefaultPoolCpuSetCount);
            v32 = updated;
          }
          RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        }
        goto LABEL_30;
      }
    }
    goto LABEL_48;
  }
  updated = -1073741801;
  v32 = -1073741801;
  Heap = v31;
LABEL_31:
  ms_exc.registration.TryLevel = -2;
  if ( updated < 0 && Heap )
  {
    if ( v30 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
      Heap = v31;
    }
    if ( Heap[7] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap[7]);
      Heap = v31;
    }
    if ( Heap[8] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap[8]);
      Heap = v31;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = 0;
    v31 = 0;
    updated = v32;
  }
  if ( updated >= 0 )
  {
    *a1 = Heap;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v20 = (int)NtCurrentPeb()->SharedData + 556;
      updated = v32;
      Heap = v31;
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

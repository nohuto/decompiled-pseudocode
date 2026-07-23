/*
 * XREFs of _TpTrimPools@0 @ 0x4B383ED0
 * Callers:
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

void __stdcall TpTrimPools()
{
  _RTL_CONDITION_VARIABLE *i; // eax
  _RTL_CONDITION_VARIABLE *v1; // edi
  NTSTATUS v2; // ebx
  unsigned int v3; // esi
  NTSTATUS v4; // eax
  void **p_Ptr; // ebx
  void ***v6; // esi
  void **v7; // ecx
  void **v8; // eax
  PVOID *Heap; // eax
  void ***v10; // esi
  void **v11; // ecx
  void **v12; // eax
  unsigned int v13; // esi
  PVOID *v14; // edx
  unsigned int *v15; // ecx
  unsigned int *v16; // eax
  unsigned int v17; // ecx
  HANDLE *v18; // ebx
  unsigned int v19; // edi
  ULONG v20; // eax
  PVOID *v21; // edi
  int v22; // ebx
  SIZE_T v23; // [esp-4h] [ebp-44h]
  char v24; // [esp+13h] [ebp-2Dh]
  PVOID *BaseAddress; // [esp+14h] [ebp-2Ch]
  HANDLE *__attribute__((__org_arrdim(0,0))) Handles; // [esp+18h] [ebp-28h]
  int WorkerFactoryInformation; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v28; // [esp+20h] [ebp-20h]
  int v29; // [esp+24h] [ebp-1Ch]
  PRTL_SRWLOCK v30; // [esp+28h] [ebp-18h]
  unsigned int v31; // [esp+2Ch] [ebp-14h]
  PRTL_SRWLOCK SRWLock; // [esp+30h] [ebp-10h]
  _RTL_CONDITION_VARIABLE *Ptr; // [esp+34h] [ebp-Ch]
  LARGE_INTEGER Timeout; // [esp+38h] [ebp-8h] BYREF

  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  for ( i = (_RTL_CONDITION_VARIABLE *)TppPoolpList; i != (_RTL_CONDITION_VARIABLE *)&TppPoolpList; i = Ptr )
  {
    v1 = i;
    Ptr = (_RTL_CONDITION_VARIABLE *)i->Ptr;
    v30 = (PRTL_SRWLOCK)&i[-2];
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)&i[-2]);
    if ( BYTE1(v1[-1].Ptr) )
    {
      RtlReleaseSRWLockShared(v30);
      continue;
    }
    SRWLock = (PRTL_SRWLOCK)&v1[-47];
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v1[-47]);
    WorkerFactoryInformation = 0;
    v24 = 1;
    if ( ZwSetInformationWorkerFactory(v1[-49].Ptr, WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) < 0
      || !WorkerFactoryInformation )
    {
      goto LABEL_40;
    }
    v2 = 0;
    v3 = (int)v1[9].Ptr ^ ((int)v1[9].Ptr ^ (2 * WorkerFactoryInformation)) & 0xFFE;
    for ( v1[9].Ptr = (PVOID)v3; ((v3 >> 11) & 0xFFE) < (v3 & 0xFFE); v2 = v4 )
    {
      if ( v2 == 258 )
        break;
      v4 = RtlSleepConditionVariableSRW(v1 + 11, (PRTL_SRWLOCK)&v1[-47], &Timeout, 0);
      v3 = (unsigned int)v1[9].Ptr;
    }
    if ( (v3 & 0x7FF000) == 0 )
    {
      v1[9].Ptr = (PVOID)(v3 & 0xFFFFF001);
LABEL_40:
      RtlReleaseSRWLockExclusive(SRWLock);
      RtlReleaseSRWLockShared(v30);
      continue;
    }
    LODWORD(v23) = 4 * ((v3 >> 12) & 0x7FF);
    Handles = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, v23);
    p_Ptr = &v1[12].Ptr;
    if ( !Handles )
    {
      while ( 1 )
      {
        v6 = (void ***)*p_Ptr;
        if ( *p_Ptr == p_Ptr )
          break;
        v7 = *v6;
        if ( (*v6)[1] != v6 )
          goto LABEL_44;
        v8 = v6[1];
        if ( *v8 != v6 )
          goto LABEL_44;
        *v8 = v7;
        v7[1] = v8;
        NtClose(v6[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v6);
      }
      v1[9].Ptr = (PVOID)((int)v1[9].Ptr & 0xFF800001);
      goto LABEL_40;
    }
    LODWORD(v23) = 4 * (((unsigned int)v1[9].Ptr >> 12) & 0x7FF);
    Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, v23);
    BaseAddress = Heap;
    if ( Heap )
    {
      v13 = 0;
      v14 = Heap;
      v29 = (char *)Handles - (char *)Heap;
      while ( 1 )
      {
        v15 = (unsigned int *)*p_Ptr;
        if ( *p_Ptr == p_Ptr )
          break;
        *(PVOID *)((char *)v14 + v29) = (PVOID)v15[2];
        p_Ptr = &v1[12].Ptr;
        *v14 = v15;
        v28 = *v15;
        if ( *(unsigned int **)(v28 + 4) != v15 || (v16 = (unsigned int *)v15[1], (unsigned int *)*v16 != v15) )
LABEL_44:
          __fastfail(3u);
        v17 = v28;
        ++v13;
        *v16 = v28;
        ++v14;
        *(_DWORD *)(v17 + 4) = v16;
      }
      v1[9].Ptr = (PVOID)((int)v1[9].Ptr & 0xFF800001);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&v1[-47]);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)&v1[-2]);
      v28 = 0;
      v18 = Handles;
      v19 = 0;
      v24 = 0;
      v31 = v13 >> 6;
      do
      {
        if ( v19 >= v13 )
          break;
        v20 = v19 + 64 > v13 ? v13 & 0x3F : 64;
        if ( NtWaitForMultipleObjects(v20, v18, WaitAll, 0, &Timeout) == 258 )
          break;
        v19 += 64;
        v18 += 64;
        ++v28;
      }
      while ( v28 <= v31 );
      if ( v13 )
      {
        v21 = BaseAddress;
        v22 = v29;
        do
        {
          NtClose(*(PVOID *)((char *)v21 + v22));
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v21++);
          --v13;
        }
        while ( v13 );
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
    }
    else
    {
      while ( 1 )
      {
        v10 = (void ***)*p_Ptr;
        if ( *p_Ptr == p_Ptr )
          break;
        v11 = *v10;
        if ( (*v10)[1] != v10 )
          goto LABEL_44;
        v12 = v10[1];
        if ( *v12 != v10 )
          goto LABEL_44;
        *v12 = v11;
        v11[1] = v12;
        NtClose(v10[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v10);
      }
      v1[9].Ptr = (PVOID)((int)v1[9].Ptr & 0xFF800001);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Handles);
    if ( v24 )
      goto LABEL_40;
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}

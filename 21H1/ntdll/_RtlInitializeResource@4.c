/*
 * XREFs of _RtlInitializeResource@4 @ 0x4B2DFA70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0 (_RtlpFreeDebugInfo@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _RtlpAllocateDebugInfo@0 @ 0x4B2DFDB0 (_RtlpAllocateDebugInfo@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtCreateSemaphore@20 @ 0x4B2F3570 (_NtCreateSemaphore@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  int v1; // ebx
  int DebugInfo; // eax
  int v3; // esi
  PRTL_SRWLOCK v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi
  HANDLE v8; // eax
  USHORT v9; // ax
  ULONG v10; // edx
  char *v11; // ecx
  _RTL_SRWLOCK *v12; // edx
  char *Value; // edi
  USHORT v14; // ax
  char *v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edi
  _DWORD *v18; // eax
  char *v19; // eax
  unsigned int v20; // eax
  void *Ptr; // edx
  unsigned int v22; // ecx
  bool v23; // zf
  unsigned int v24; // ecx
  ULONG v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  _DWORD *v29; // edx
  _RTL_SRWLOCK *v30; // edx
  _DWORD *v31; // eax
  char *v32; // ecx
  unsigned int v33; // edx
  char *v34; // ecx
  ULONG_PTR v35; // [esp-14h] [ebp-D4h]
  ULONG_PTR v36; // [esp-14h] [ebp-D4h]
  SIZE_T v37; // [esp-8h] [ebp-C8h]
  USHORT v38; // [esp+12h] [ebp-AEh]
  PVOID BackTrace[32]; // [esp+14h] [ebp-ACh] BYREF
  HANDLE v40; // [esp+94h] [ebp-2Ch] BYREF
  HANDLE SemaphoreHandle; // [esp+98h] [ebp-28h] BYREF
  int v42; // [esp+9Ch] [ebp-24h] BYREF
  unsigned int v43; // [esp+A0h] [ebp-20h]
  PRTL_SRWLOCK SRWLock; // [esp+A4h] [ebp-1Ch] BYREF
  PVOID BaseAddress; // [esp+A8h] [ebp-18h] BYREF
  ULONG BackTraceHash; // [esp+ACh] [ebp-14h] BYREF
  char *Size; // [esp+B0h] [ebp-10h] BYREF
  unsigned int Size_4; // [esp+B4h] [ebp-Ch]
  _RTL_SRWLOCK *v49; // [esp+B8h] [ebp-8h]
  char *v50; // [esp+BCh] [ebp-4h]

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(-1073741801);
  HIDWORD(v37) = v1;
  *(_DWORD *)(DebugInfo + 20) = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    goto LABEL_3;
  v9 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v38 = v9;
  if ( !v9 )
    goto LABEL_3;
  v10 = BackTraceHash % v4[94].Value;
  v11 = (char *)(4 * v9);
  Size = v11;
  v12 = &v4[2 * v10 + 95];
  v49 = v12;
  _InterlockedIncrement((volatile signed __int32 *)&v4[23]);
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(v12 + 1);
    v11 = Size;
    v12 = v49;
  }
  Value = (char *)v12->Value;
  v14 = v38;
  v50 = Value;
  if ( Value )
  {
    do
    {
      if ( *((_WORD *)Value + 5) == v14 )
      {
        LODWORD(v37) = v11;
        v15 = (char *)RtlCompareMemory(Value + 12, BackTrace, v37);
        v11 = Size;
        if ( v15 == Size )
          goto LABEL_47;
        v14 = v38;
      }
      Value = *(char **)Value;
      v50 = Value;
    }
    while ( Value );
    v12 = v49;
  }
  if ( !v14 )
  {
    Value = 0;
    v50 = 0;
LABEL_50:
    _InterlockedIncrement((volatile signed __int32 *)&v4[28]);
    goto LABEL_51;
  }
  v50 = (char *)v14;
  v16 = v14 - 1;
  Size_4 = v16;
  if ( v16 < 0x20 )
  {
    v17 = (unsigned int)&v4[2 * v16 + 30];
    while ( 1 )
    {
      SRWLock = &RtlpSlistLockedAltLocks + ((v17 >> 2) & 0x1F);
      RtlAcquireSRWLockExclusive(SRWLock);
      v18 = *(_DWORD **)v17;
      BaseAddress = v18;
      if ( v18 )
      {
        *(_DWORD *)v17 = *v18;
        --*(_WORD *)(v17 + 4);
      }
      RtlReleaseSRWLockExclusive(SRWLock);
      if ( BaseAddress )
        break;
      v17 += 8;
      if ( ++Size_4 >= 0x20 )
        goto LABEL_27;
    }
    Value = (char *)BaseAddress - 12;
    v50 = (char *)BaseAddress - 12;
    _InterlockedDecrement((volatile signed __int32 *)&v4[27]);
    goto LABEL_45;
  }
LABEL_27:
  v19 = v50;
  Value = 0;
  v50 = 0;
  v20 = (4 * (_DWORD)v19 + 19) & 0xFFFFFFF8;
  Size_4 = v20;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(v4);
    v20 = Size_4;
  }
  Ptr = v4[19].Ptr;
  v42 = v4[21].Value;
  v22 = v20 + v42;
  v23 = v4[17].0 == 0;
  BaseAddress = Ptr;
  v43 = v20 + v42;
  if ( v23 )
  {
    if ( v22 > (unsigned int)Ptr )
    {
      SRWLock = (PRTL_SRWLOCK)((v20 + 4095) & 0xFFFFF000);
      if ( (unsigned int)SRWLock + (unsigned int)Ptr >= v4[20].Value
        || (HIDWORD(v35) = &SRWLock,
            LODWORD(v35) = 0,
            NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v35, (PSIZE_T)0x1000, 4u, HIDWORD(v37)) < 0) )
      {
        v20 = Size_4;
        goto LABEL_39;
      }
      v22 = v43;
      v4[19].Value = (unsigned int)SRWLock + (_DWORD)BaseAddress;
      v20 = Size_4;
    }
  }
  else if ( v22 > v4[22].Value )
  {
    goto LABEL_39;
  }
  Value = (char *)v42;
  ++v4[26].Value;
  v4[21].Value = v22;
  v50 = Value;
LABEL_39:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive(v4);
    v20 = Size_4;
  }
  if ( !Value )
    goto LABEL_49;
  v24 = ((v20 - 12) >> 2) - 1;
  if ( v24 > 0x1F )
    LOWORD(v24) = 31;
  *((_WORD *)Value + 2) = ((_WORD)v24 << 11) | *((_WORD *)Value + 2) & 0x7FF;
LABEL_45:
  if ( !Value )
  {
LABEL_49:
    v12 = v49;
    goto LABEL_50;
  }
  LODWORD(v37) = Size;
  memcpy(Value + 12, BackTrace, v37);
  *((_WORD *)Value + 2) &= 0xF800u;
  v25 = BackTraceHash;
  *((_WORD *)Value + 5) = v38;
  v26 = v25 % v4[94].Value;
  *(_RTL_SRWLOCK *)Value = v4[2 * v26 + 95];
  v4[2 * v26 + 95].Value = (unsigned int)Value;
LABEL_47:
  v12 = v49;
  if ( (*((_WORD *)Value + 2) & 0x7FF) != 0x7FF )
    *((_WORD *)Value + 2) ^= (*((_WORD *)Value + 2) ^ (*((_WORD *)Value + 2) + 1)) & 0x7FF;
LABEL_51:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(v12 + 1);
  if ( !Value )
  {
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  v27 = *((unsigned __int16 *)Value + 5);
  v28 = 0;
  if ( *((_WORD *)Value + 5) )
  {
    v29 = Value + 12;
    do
    {
      v28 += *v29++;
      --v27;
    }
    while ( v27 );
  }
  v30 = &v4[2 * (v28 % v4[94].Value)];
  v49 = v30;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(v30 + 96);
    v30 = v49;
  }
  if ( !*(_DWORD *)(Value + 6) )
  {
    v31 = 0;
    BackTraceHash = 0;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive(v4);
      v31 = 0;
    }
    v32 = (char *)v4[20].Value;
    v43 = v4[22].Value;
    v33 = v43 - 4;
    v23 = v4[17].0 == 0;
    Size = v32;
    if ( v23 )
    {
      if ( v33 < (unsigned int)v32 )
      {
        v42 = 4096;
        if ( (unsigned int)(v32 - 4096) <= v4[19].Value
          || (Size = v32 - 4096,
              HIDWORD(v36) = &v42,
              LODWORD(v36) = 0,
              NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&Size, v36, (PSIZE_T)0x1000, 4u, HIDWORD(v37)) < 0) )
        {
          v31 = 0;
          goto LABEL_71;
        }
        v4[20].Value = (unsigned int)Size;
      }
    }
    else if ( v33 < v4[21].Value )
    {
      goto LABEL_71;
    }
    v31 = (_DWORD *)(v43 - 4);
    ++v4[24].Value;
    BackTraceHash = (ULONG)v31;
    v4[22].Value = (unsigned int)v31;
LABEL_71:
    if ( !byte_4B3A5DA8 )
    {
      RtlReleaseSRWLockExclusive(v4);
      v31 = (_DWORD *)BackTraceHash;
    }
    v34 = v50;
    v30 = v49;
    if ( v31 )
    {
      *v31 = Value;
      v5 = (signed int)(v4[25].Value - (int)v31) >> 2;
      *((_WORD *)v34 + 4) = v5;
      *((_WORD *)v34 + 3) = HIWORD(v5);
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_77;
  }
  v34 = v50;
  v5 = *((unsigned __int16 *)Value + 4) + (*((unsigned __int16 *)Value + 3) << 16);
LABEL_77:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive(v30 + 96);
    v34 = v50;
  }
  if ( !v5 )
    RtlStdReleaseStackTrace(v4, v34);
LABEL_4:
  *(_WORD *)(v3 + 2) = v5;
  *(_WORD *)(v3 + 28) = HIWORD(v5);
  v6 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo((char *)v3);
    RtlRaiseStatus(v6);
  }
  v7 = NtCreateSemaphore(&v40, 0x100003u, 0, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo((char *)v3);
    RtlRaiseStatus(v7);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  v8 = v40;
  Resource->NumberOfWaitingShared = 0;
  Resource->ExclusiveSemaphore = v8;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0;
  Resource->Flags = 0;
  Resource->DebugInfo = (PRTL_RESOURCE_DEBUG)v3;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1 )
    Resource->CriticalSection.DebugInfo->Type = 1;
}

/*
 * XREFs of _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0
 * Callers:
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 * Callees:
 *     _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0 (_RtlpFreeDebugInfo@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlpAllocateDebugInfo@0 @ 0x4B2DFDB0 (_RtlpAllocateDebugInfo@0.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 */

void __thiscall RtlpAddDebugInfoToCriticalSection(int this)
{
  signed __int32 DebugInfo; // esi
  PRTL_SRWLOCK v3; // ebx
  int v4; // ebx
  volatile signed __int32 v5; // esi
  signed __int32 *v6; // eax
  signed __int32 v7; // esi
  USHORT v8; // ax
  _RTL_SRWLOCK *v9; // edx
  unsigned int Value; // eax
  USHORT v11; // cx
  char *v12; // eax
  PRTL_SRWLOCK v13; // ecx
  unsigned int v14; // eax
  _RTL_SRWLOCK *v15; // eax
  _RTL_SRWLOCK *v16; // ecx
  $64EDA4DD838E80CF9A7DD220E06F3FD2 *v17; // eax
  unsigned int v18; // eax
  char *v19; // edx
  bool v20; // zf
  unsigned int v21; // edx
  __int16 v22; // ax
  unsigned int v23; // eax
  ULONG v24; // edx
  unsigned int v25; // eax
  _RTL_SRWLOCK *v26; // ecx
  unsigned int v27; // edx
  int Value_high; // edx
  unsigned int v29; // eax
  unsigned int *v30; // eax
  int v31; // ebx
  _RTL_SRWLOCK *v32; // edx
  _DWORD *p_Value; // eax
  _RTL_SRWLOCK *v34; // edx
  NTSTATUS VirtualMemory; // eax
  ULONG_PTR v36; // [esp-10h] [ebp-D8h]
  ULONG_PTR v37; // [esp-10h] [ebp-D8h]
  SIZE_T v38; // [esp-4h] [ebp-CCh]
  USHORT v39; // [esp+1Ah] [ebp-AEh]
  PVOID BackTrace[33]; // [esp+1Ch] [ebp-ACh] BYREF
  PRTL_SRWLOCK v41; // [esp+A0h] [ebp-28h]
  PRTL_SRWLOCK SRWLock; // [esp+A4h] [ebp-24h]
  unsigned int v43; // [esp+A8h] [ebp-20h] BYREF
  PVOID BaseAddress; // [esp+ACh] [ebp-1Ch] BYREF
  ULONG BackTraceHash; // [esp+B0h] [ebp-18h] BYREF
  int v46; // [esp+B4h] [ebp-14h] BYREF
  char *Length; // [esp+B8h] [ebp-10h] BYREF
  _RTL_SRWLOCK *Length_4; // [esp+BCh] [ebp-Ch]
  _RTL_SRWLOCK *v49; // [esp+C0h] [ebp-8h]
  unsigned int v50; // [esp+C4h] [ebp-4h]

  DebugInfo = RtlpAllocateDebugInfo();
  if ( !DebugInfo )
  {
    _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
    return;
  }
  *(_WORD *)DebugInfo = 0;
  if ( (*(_DWORD *)(this + 20) & 0x8000000) != 0 )
    *(_WORD *)DebugInfo = 1;
  *(_DWORD *)(DebugInfo + 20) = 0;
  *(_DWORD *)(DebugInfo + 16) = 0;
  *(_DWORD *)(DebugInfo + 4) = this;
  *(_DWORD *)(DebugInfo + 24) = 0;
  v3 = RtlpStackTraceDatabase;
  v41 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    goto LABEL_5;
  v8 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v39 = v8;
  if ( !v8 )
    goto LABEL_5;
  Length = (char *)(4 * v8);
  v9 = &v3[2 * (BackTraceHash % v3[94].Value) + 95];
  Length_4 = v9;
  _InterlockedIncrement((volatile signed __int32 *)&v3[23]);
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(v9 + 1);
    v9 = Length_4;
  }
  Value = v9->Value;
  v11 = v39;
  v50 = Value;
  if ( Value )
  {
    do
    {
      if ( *(_WORD *)(Value + 10) == v11 )
      {
        LODWORD(v38) = Length;
        v12 = (char *)RtlCompareMemory((const void *)(Value + 12), BackTrace, v38);
        if ( v12 == Length )
          goto LABEL_49;
        v11 = v39;
        Value = v50;
      }
      Value = *(_DWORD *)Value;
      v50 = Value;
    }
    while ( Value );
    v9 = Length_4;
  }
  if ( !v11 )
  {
    v13 = 0;
    v50 = 0;
LABEL_68:
    _InterlockedIncrement((volatile signed __int32 *)&v3[28]);
    goto LABEL_52;
  }
  BaseAddress = (PVOID)v11;
  v14 = v11 - 1;
  v50 = v14;
  if ( v14 < 0x20 )
  {
    v15 = &v3[2 * v14 + 30];
    v49 = v15;
    while ( 1 )
    {
      SRWLock = &RtlpSlistLockedAltLocks + (((unsigned int)v15 >> 2) & 0x1F);
      RtlAcquireSRWLockExclusive(SRWLock);
      v16 = v49;
      v17 = ($64EDA4DD838E80CF9A7DD220E06F3FD2 *)v49->Value;
      v43 = (unsigned int)v17;
      if ( v17 )
      {
        v49->0 = *v17;
        --*(_WORD *)&v16[1].0;
      }
      RtlReleaseSRWLockExclusive(SRWLock);
      if ( v43 )
        break;
      v15 = v49 + 2;
      ++v50;
      v49 += 2;
      if ( v50 >= 0x20 )
        goto LABEL_29;
    }
    v13 = (PRTL_SRWLOCK)(v43 - 12);
    v50 = v43 - 12;
    _InterlockedDecrement((volatile signed __int32 *)&v3[27]);
    goto LABEL_47;
  }
LABEL_29:
  v13 = 0;
  v50 = 0;
  v18 = (4 * (_DWORD)BaseAddress + 19) & 0xFFFFFFF8;
  v49 = (_RTL_SRWLOCK *)v18;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(v3);
    v13 = (PRTL_SRWLOCK)v50;
    v18 = (unsigned int)v49;
  }
  SRWLock = (PRTL_SRWLOCK)v3[21].Value;
  BaseAddress = v3[19].Ptr;
  v19 = (char *)SRWLock + v18;
  v20 = v3[17].0 == 0;
  v46 = (int)SRWLock + v18;
  if ( v20 )
  {
    if ( (unsigned int)v19 > v3[19].Value )
    {
      v43 = (v18 + 4095) & 0xFFFFF000;
      if ( v3[19].Value + v43 < v3[20].Value )
      {
        HIDWORD(v36) = &v43;
        LODWORD(v36) = 0;
        if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v36, (PSIZE_T)0x1000, 4u, HIDWORD(v38)) >= 0 )
        {
          v19 = (char *)v46;
          v3[19].Value = (unsigned int)BaseAddress + v43;
          v18 = (unsigned int)v49;
          goto LABEL_33;
        }
        v13 = (PRTL_SRWLOCK)v50;
      }
      v18 = (unsigned int)v49;
      goto LABEL_41;
    }
LABEL_33:
    v13 = SRWLock;
    ++v3[26].Value;
    v3[21].Value = (unsigned int)v19;
    v50 = (unsigned int)v13;
    goto LABEL_41;
  }
  if ( (unsigned int)v19 <= v3[22].Value )
    goto LABEL_33;
LABEL_41:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive(v3);
    v13 = (PRTL_SRWLOCK)v50;
    v18 = (unsigned int)v49;
  }
  if ( !v13 )
    goto LABEL_67;
  v21 = ((v18 - 12) >> 2) - 1;
  if ( v21 > 0x1F )
    LOWORD(v21) = 31;
  v22 = (__int16)v13[1].0;
  v46 = 2047;
  *(_WORD *)&v13[1].0 = ((_WORD)v21 << 11) | v22 & 0x7FF;
LABEL_47:
  if ( !v13 )
  {
LABEL_67:
    v9 = Length_4;
    goto LABEL_68;
  }
  LODWORD(v38) = Length;
  memcpy(&v13[3], BackTrace, v38);
  v23 = v50;
  *(_WORD *)(v50 + 10) = v39;
  *(_WORD *)(v23 + 4) &= 0xF800u;
  v24 = BackTraceHash % v3[94].Value;
  v25 = v3[2 * v24 + 95].Value;
  v26 = &v3[2 * v24];
  v27 = v50;
  *(_DWORD *)v50 = v25;
  v26[95].Value = v27;
LABEL_49:
  v13 = (PRTL_SRWLOCK)v50;
  if ( (*(_WORD *)(v50 + 4) & 0x7FF) != 0x7FF )
    *(_WORD *)(v50 + 4) ^= (*(_WORD *)(v50 + 4) ^ (*(_WORD *)(v50 + 4) + 1)) & 0x7FF;
  v9 = Length_4;
LABEL_52:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive(v9 + 1);
    v13 = (PRTL_SRWLOCK)v50;
  }
  if ( v13 )
  {
    Value_high = HIWORD(v13[2].Value);
    v29 = 0;
    if ( HIWORD(v13[2].Value) )
    {
      v30 = (unsigned int *)&v13[3];
      v31 = 0;
      do
      {
        v31 += *v30++;
        --Value_high;
      }
      while ( Value_high );
      v46 = v31;
      v3 = v41;
      v29 = v46;
    }
    v32 = &v3[2 * (v29 % v3[94].Value)];
    v49 = v32;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive(v32 + 96);
      v13 = (PRTL_SRWLOCK)v50;
      v32 = v49;
    }
    if ( *(unsigned int *)((char *)&v13[1].Value + 2) )
    {
      v4 = LOWORD(v13[2].Value) + (HIWORD(v13[1].Value) << 16);
LABEL_81:
      if ( !byte_4B3A5DA8 )
      {
        RtlReleaseSRWLockExclusive(v32 + 96);
        v13 = (PRTL_SRWLOCK)v50;
      }
      if ( !v4 )
        RtlStdReleaseStackTrace(v41, v13);
      goto LABEL_6;
    }
    p_Value = 0;
    BackTraceHash = 0;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive(v3);
      p_Value = 0;
    }
    v20 = v3[17].0 == 0;
    v34 = (_RTL_SRWLOCK *)v3[20].Value;
    Length_4 = (_RTL_SRWLOCK *)v3[22].Value;
    v13 = (PRTL_SRWLOCK)v50;
    Length = (char *)v34;
    if ( v20 )
    {
      if ( &Length_4[-1] < v34 )
      {
        v46 = 4096;
        if ( (unsigned int)&v34[-1024] <= v3[19].Value
          || (Length = (char *)&v34[-1024],
              HIDWORD(v37) = &v46,
              LODWORD(v37) = 0,
              VirtualMemory = NtAllocateVirtualMemory(
                                (HANDLE)0xFFFFFFFF,
                                (PVOID *)&Length,
                                v37,
                                (PSIZE_T)0x1000,
                                4u,
                                HIDWORD(v38)),
              v13 = (PRTL_SRWLOCK)v50,
              VirtualMemory < 0) )
        {
          p_Value = 0;
          goto LABEL_75;
        }
        v3[20].Value = (unsigned int)Length;
      }
    }
    else if ( (unsigned int)&Length_4[-1] < v3[21].Value )
    {
      goto LABEL_75;
    }
    p_Value = &Length_4[-1].Value;
    ++v3[24].Value;
    BackTraceHash = (ULONG)p_Value;
    v3[22].Value = (unsigned int)p_Value;
LABEL_75:
    if ( !byte_4B3A5DA8 )
    {
      RtlReleaseSRWLockExclusive(v3);
      v13 = (PRTL_SRWLOCK)v50;
      p_Value = (_DWORD *)BackTraceHash;
    }
    v32 = v49;
    if ( p_Value )
    {
      *p_Value = v13;
      v4 = (signed int)(v3[25].Value - (int)p_Value) >> 2;
      *(_WORD *)&v13[2].0 = v4;
      HIWORD(v13[1].Value) = HIWORD(v4);
    }
    else
    {
      v4 = 0;
    }
    goto LABEL_81;
  }
LABEL_5:
  v4 = 0;
LABEL_6:
  *(_WORD *)(DebugInfo + 2) = v4;
  *(_WORD *)(DebugInfo + 28) = HIWORD(v4);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this, DebugInfo, -1) == -1 )
  {
    v5 = *(_DWORD *)this;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v6 = (signed __int32 *)off_4B3A33D4[0];
    v7 = v5 + 8;
    if ( *(_UNKNOWN ***)off_4B3A33D4[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_DWORD *)v7 = &RtlCriticalSectionList;
    *(_DWORD *)(v7 + 4) = v6;
    *v6 = v7;
    off_4B3A33D4[0] = (_UNKNOWN **)v7;
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  else
  {
    RtlpFreeDebugInfo((char *)DebugInfo);
  }
}

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

signed __int32 __thiscall RtlpAddDebugInfoToCriticalSection(int this)
{
  signed __int32 result; // eax
  signed __int32 v3; // esi
  int v4; // ebx
  int v5; // ebx
  volatile signed __int32 v6; // esi
  signed __int32 *v7; // eax
  signed __int32 v8; // esi
  USHORT v9; // ax
  ULONG v10; // edx
  unsigned int v11; // eax
  USHORT v12; // cx
  SIZE_T v13; // eax
  volatile signed __int32 *v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  _DWORD **v17; // ecx
  _DWORD *v18; // eax
  unsigned int v19; // eax
  char *v20; // edx
  bool v21; // zf
  unsigned int v22; // edx
  __int16 v23; // ax
  unsigned int v24; // eax
  ULONG v25; // edx
  int v26; // eax
  ULONG v27; // ecx
  unsigned int v28; // edx
  int v29; // edx
  unsigned int v30; // eax
  _DWORD *v31; // eax
  int v32; // ebx
  _DWORD **v33; // edx
  _DWORD *v34; // eax
  SIZE_T v35; // edx
  int v36; // eax
  USHORT v37; // [esp+1Ah] [ebp-AEh]
  PVOID BackTrace[33]; // [esp+1Ch] [ebp-ACh] BYREF
  int v39; // [esp+A0h] [ebp-28h]
  volatile signed __int32 *v40; // [esp+A4h] [ebp-24h]
  unsigned int v41; // [esp+A8h] [ebp-20h] BYREF
  int v42; // [esp+ACh] [ebp-1Ch] BYREF
  ULONG BackTraceHash; // [esp+B0h] [ebp-18h] BYREF
  int v44; // [esp+B4h] [ebp-14h] BYREF
  SIZE_T Length; // [esp+B8h] [ebp-10h] BYREF
  ULONG v46; // [esp+BCh] [ebp-Ch]
  _DWORD **v47; // [esp+C0h] [ebp-8h]
  unsigned int v48; // [esp+C4h] [ebp-4h]

  result = RtlpAllocateDebugInfo();
  v3 = result;
  if ( !result )
  {
    _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
    return result;
  }
  *(_WORD *)result = 0;
  if ( (*(_DWORD *)(this + 20) & 0x8000000) != 0 )
    *(_WORD *)result = 1;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = this;
  *(_DWORD *)(result + 24) = 0;
  v4 = RtlpStackTraceDatabase;
  v39 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    goto LABEL_5;
  v9 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v37 = v9;
  if ( !v9 )
    goto LABEL_5;
  Length = 4 * v9;
  v10 = v4 + 8 * (BackTraceHash % *(_DWORD *)(v4 + 376)) + 380;
  v46 = v10;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 92));
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v10 + 4));
    v10 = v46;
  }
  v11 = *(_DWORD *)v10;
  v12 = v37;
  v48 = v11;
  if ( v11 )
  {
    do
    {
      if ( *(_WORD *)(v11 + 10) == v12 )
      {
        v13 = RtlCompareMemory((const void *)(v11 + 12), BackTrace, Length);
        if ( v13 == Length )
          goto LABEL_49;
        v12 = v37;
        v11 = v48;
      }
      v11 = *(_DWORD *)v11;
      v48 = v11;
    }
    while ( v11 );
    v10 = v46;
  }
  if ( !v12 )
  {
    v14 = 0;
    v48 = 0;
LABEL_68:
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 112));
    goto LABEL_52;
  }
  v42 = v12;
  v15 = v12 - 1;
  v48 = v15;
  if ( v15 < 0x20 )
  {
    v16 = v4 + 8 * (v15 + 15);
    v47 = (_DWORD **)v16;
    while ( 1 )
    {
      v40 = &RtlpSlistLockedAltLocks[(v16 >> 2) & 0x1F];
      RtlAcquireSRWLockExclusive(v40);
      v17 = v47;
      v18 = *v47;
      v41 = (unsigned int)v18;
      if ( v18 )
      {
        *v47 = (_DWORD *)*v18;
        --*((_WORD *)v17 + 2);
      }
      RtlReleaseSRWLockExclusive(v40);
      if ( v41 )
        break;
      v16 = (unsigned int)(v47 + 2);
      ++v48;
      v47 += 2;
      if ( v48 >= 0x20 )
        goto LABEL_29;
    }
    v14 = (volatile signed __int32 *)(v41 - 12);
    v48 = v41 - 12;
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 108));
    goto LABEL_47;
  }
LABEL_29:
  v14 = 0;
  v48 = 0;
  v19 = (4 * v42 + 19) & 0xFFFFFFF8;
  v47 = (_DWORD **)v19;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)v4);
    v14 = (volatile signed __int32 *)v48;
    v19 = (unsigned int)v47;
  }
  v40 = *(volatile signed __int32 **)(v4 + 84);
  v42 = *(_DWORD *)(v4 + 76);
  v20 = (char *)v40 + v19;
  v21 = *(_BYTE *)(v4 + 68) == 0;
  v44 = (int)v40 + v19;
  if ( v21 )
  {
    if ( (unsigned int)v20 > *(_DWORD *)(v4 + 76) )
    {
      v41 = (v19 + 4095) & 0xFFFFF000;
      if ( *(_DWORD *)(v4 + 76) + v41 < *(_DWORD *)(v4 + 80) )
      {
        if ( (int)NtAllocateVirtualMemory(-1, &v42, 0, &v41, 4096, 4) >= 0 )
        {
          v20 = (char *)v44;
          *(_DWORD *)(v4 + 76) = v42 + v41;
          v19 = (unsigned int)v47;
          goto LABEL_33;
        }
        v14 = (volatile signed __int32 *)v48;
      }
      v19 = (unsigned int)v47;
      goto LABEL_41;
    }
LABEL_33:
    v14 = v40;
    ++*(_DWORD *)(v4 + 104);
    *(_DWORD *)(v4 + 84) = v20;
    v48 = (unsigned int)v14;
    goto LABEL_41;
  }
  if ( (unsigned int)v20 <= *(_DWORD *)(v4 + 88) )
    goto LABEL_33;
LABEL_41:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)v4);
    v14 = (volatile signed __int32 *)v48;
    v19 = (unsigned int)v47;
  }
  if ( !v14 )
    goto LABEL_67;
  v22 = ((v19 - 12) >> 2) - 1;
  if ( v22 > 0x1F )
    LOWORD(v22) = 31;
  v23 = *((_WORD *)v14 + 2);
  v44 = 2047;
  *((_WORD *)v14 + 2) = ((_WORD)v22 << 11) | v23 & 0x7FF;
LABEL_47:
  if ( !v14 )
  {
LABEL_67:
    v10 = v46;
    goto LABEL_68;
  }
  memcpy((void *)(v14 + 3), BackTrace, Length);
  v24 = v48;
  *(_WORD *)(v48 + 10) = v37;
  *(_WORD *)(v24 + 4) &= 0xF800u;
  v25 = BackTraceHash % *(_DWORD *)(v4 + 376);
  v26 = *(_DWORD *)(v4 + 8 * v25 + 380);
  v27 = v4 + 8 * v25;
  v28 = v48;
  *(_DWORD *)v48 = v26;
  *(_DWORD *)(v27 + 380) = v28;
LABEL_49:
  v14 = (volatile signed __int32 *)v48;
  if ( (*(_WORD *)(v48 + 4) & 0x7FF) != 0x7FF )
    *(_WORD *)(v48 + 4) ^= (*(_WORD *)(v48 + 4) ^ (*(_WORD *)(v48 + 4) + 1)) & 0x7FF;
  v10 = v46;
LABEL_52:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v10 + 4));
    v14 = (volatile signed __int32 *)v48;
  }
  if ( v14 )
  {
    v29 = *((unsigned __int16 *)v14 + 5);
    v30 = 0;
    if ( *((_WORD *)v14 + 5) )
    {
      v31 = v14 + 3;
      v32 = 0;
      do
      {
        v32 += *v31++;
        --v29;
      }
      while ( v29 );
      v44 = v32;
      v4 = v39;
      v30 = v44;
    }
    v33 = (_DWORD **)(v4 + 8 * (v30 % *(_DWORD *)(v4 + 376)));
    v47 = v33;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)v33 + 96);
      v14 = (volatile signed __int32 *)v48;
      v33 = v47;
    }
    if ( *(volatile signed __int32 *)((char *)v14 + 6) )
    {
      v5 = *((unsigned __int16 *)v14 + 4) + (*((unsigned __int16 *)v14 + 3) << 16);
LABEL_81:
      if ( !byte_4B3A5DA8 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int32 *)v33 + 96);
        v14 = (volatile signed __int32 *)v48;
      }
      if ( !v5 )
        RtlStdReleaseStackTrace(v39, v14);
      goto LABEL_6;
    }
    v34 = 0;
    BackTraceHash = 0;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)v4);
      v34 = 0;
    }
    v21 = *(_BYTE *)(v4 + 68) == 0;
    v35 = *(_DWORD *)(v4 + 80);
    v46 = *(_DWORD *)(v4 + 88);
    v14 = (volatile signed __int32 *)v48;
    Length = v35;
    if ( v21 )
    {
      if ( v46 - 4 < v35 )
      {
        v44 = 4096;
        if ( v35 - 4096 <= *(_DWORD *)(v4 + 76)
          || (Length = v35 - 4096,
              v36 = NtAllocateVirtualMemory(-1, &Length, 0, &v44, 4096, 4),
              v14 = (volatile signed __int32 *)v48,
              v36 < 0) )
        {
          v34 = 0;
          goto LABEL_75;
        }
        *(_DWORD *)(v4 + 80) = Length;
      }
    }
    else if ( v46 - 4 < *(_DWORD *)(v4 + 84) )
    {
      goto LABEL_75;
    }
    v34 = (_DWORD *)(v46 - 4);
    ++*(_DWORD *)(v4 + 96);
    BackTraceHash = (ULONG)v34;
    *(_DWORD *)(v4 + 88) = v34;
LABEL_75:
    if ( !byte_4B3A5DA8 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)v4);
      v14 = (volatile signed __int32 *)v48;
      v34 = (_DWORD *)BackTraceHash;
    }
    v33 = v47;
    if ( v34 )
    {
      *v34 = v14;
      v5 = (*(_DWORD *)(v4 + 100) - (int)v34) >> 2;
      *((_WORD *)v14 + 4) = v5;
      *((_WORD *)v14 + 3) = HIWORD(v5);
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_81;
  }
LABEL_5:
  v5 = 0;
LABEL_6:
  *(_WORD *)(v3 + 2) = v5;
  *(_WORD *)(v3 + 28) = HIWORD(v5);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this, v3, -1) != -1 )
    return RtlpFreeDebugInfo((char *)v3);
  v6 = *(_DWORD *)this;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v7 = (signed __int32 *)off_4B3A33D4[0];
  v8 = v6 + 8;
  if ( *(_UNKNOWN ***)off_4B3A33D4[0] != &RtlCriticalSectionList )
    __fastfail(3u);
  *(_DWORD *)v8 = &RtlCriticalSectionList;
  *(_DWORD *)(v8 + 4) = v7;
  *v7 = v8;
  off_4B3A33D4[0] = (_UNKNOWN **)v8;
  return RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}

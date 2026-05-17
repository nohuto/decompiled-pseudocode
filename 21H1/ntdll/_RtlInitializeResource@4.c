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

_WORD *__stdcall RtlInitializeResource(int a1)
{
  int DebugInfo; // eax
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  _WORD *result; // eax
  USHORT v9; // ax
  ULONG v10; // edx
  int v11; // ecx
  ULONG v12; // edx
  int v13; // edi
  USHORT v14; // ax
  SIZE_T v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edi
  _DWORD *v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // edx
  unsigned int v22; // ecx
  bool v23; // zf
  unsigned int v24; // ecx
  ULONG v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  _DWORD *v29; // edx
  int v30; // edx
  _DWORD *v31; // eax
  size_t v32; // ecx
  size_t v33; // edx
  int v34; // ecx
  USHORT v35; // [esp+12h] [ebp-AEh]
  PVOID BackTrace[32]; // [esp+14h] [ebp-ACh] BYREF
  int v37; // [esp+94h] [ebp-2Ch] BYREF
  HANDLE Handle; // [esp+98h] [ebp-28h] BYREF
  int v39; // [esp+9Ch] [ebp-24h] BYREF
  unsigned int v40; // [esp+A0h] [ebp-20h]
  volatile signed __int32 *v41; // [esp+A4h] [ebp-1Ch] BYREF
  _DWORD *v42; // [esp+A8h] [ebp-18h] BYREF
  ULONG BackTraceHash; // [esp+ACh] [ebp-14h] BYREF
  size_t Size; // [esp+B0h] [ebp-10h] BYREF
  unsigned int v45; // [esp+B4h] [ebp-Ch]
  ULONG v46; // [esp+B8h] [ebp-8h]
  int v47; // [esp+BCh] [ebp-4h]

  DebugInfo = RtlpAllocateDebugInfo();
  v2 = DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(DebugInfo + 20) = 0;
  v3 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    goto LABEL_3;
  v9 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v35 = v9;
  if ( !v9 )
    goto LABEL_3;
  v10 = BackTraceHash % *(_DWORD *)(v3 + 376);
  v11 = 4 * v9;
  Size = v11;
  v12 = v3 + 8 * v10 + 380;
  v46 = v12;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 92));
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v12 + 4));
    v11 = Size;
    v12 = v46;
  }
  v13 = *(_DWORD *)v12;
  v14 = v35;
  v47 = v13;
  if ( v13 )
  {
    do
    {
      if ( *(_WORD *)(v13 + 10) == v14 )
      {
        v15 = RtlCompareMemory((const void *)(v13 + 12), BackTrace, v11);
        v11 = Size;
        if ( v15 == Size )
          goto LABEL_47;
        v14 = v35;
      }
      v13 = *(_DWORD *)v13;
      v47 = v13;
    }
    while ( v13 );
    v12 = v46;
  }
  if ( !v14 )
  {
    v13 = 0;
    v47 = 0;
LABEL_50:
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 112));
    goto LABEL_51;
  }
  v47 = v14;
  v16 = v14 - 1;
  v45 = v16;
  if ( v16 < 0x20 )
  {
    v17 = v3 + 120 + 8 * v16;
    while ( 1 )
    {
      v41 = &RtlpSlistLockedAltLocks[(v17 >> 2) & 0x1F];
      RtlAcquireSRWLockExclusive(v41);
      v18 = *(_DWORD **)v17;
      v42 = v18;
      if ( v18 )
      {
        *(_DWORD *)v17 = *v18;
        --*(_WORD *)(v17 + 4);
      }
      RtlReleaseSRWLockExclusive(v41);
      if ( v42 )
        break;
      v17 += 8;
      if ( ++v45 >= 0x20 )
        goto LABEL_27;
    }
    v13 = (int)(v42 - 3);
    v47 = (int)(v42 - 3);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 108));
    goto LABEL_45;
  }
LABEL_27:
  v19 = v47;
  v13 = 0;
  v47 = 0;
  v20 = (4 * v19 + 19) & 0xFFFFFFF8;
  v45 = v20;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)v3);
    v20 = v45;
  }
  v21 = *(_DWORD **)(v3 + 76);
  v39 = *(_DWORD *)(v3 + 84);
  v22 = v20 + v39;
  v23 = *(_BYTE *)(v3 + 68) == 0;
  v42 = v21;
  v40 = v20 + v39;
  if ( v23 )
  {
    if ( v22 > (unsigned int)v21 )
    {
      v41 = (volatile signed __int32 *)((v20 + 4095) & 0xFFFFF000);
      if ( (unsigned int)v41 + (unsigned int)v21 >= *(_DWORD *)(v3 + 80)
        || (int)NtAllocateVirtualMemory(-1, &v42, 0, &v41, 4096, 4) < 0 )
      {
        v20 = v45;
        goto LABEL_39;
      }
      v22 = v40;
      *(_DWORD *)(v3 + 76) = (char *)v41 + (_DWORD)v42;
      v20 = v45;
    }
  }
  else if ( v22 > *(_DWORD *)(v3 + 88) )
  {
    goto LABEL_39;
  }
  v13 = v39;
  ++*(_DWORD *)(v3 + 104);
  *(_DWORD *)(v3 + 84) = v22;
  v47 = v13;
LABEL_39:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)v3);
    v20 = v45;
  }
  if ( !v13 )
    goto LABEL_49;
  v24 = ((v20 - 12) >> 2) - 1;
  if ( v24 > 0x1F )
    LOWORD(v24) = 31;
  *(_WORD *)(v13 + 4) = ((_WORD)v24 << 11) | *(_WORD *)(v13 + 4) & 0x7FF;
LABEL_45:
  if ( !v13 )
  {
LABEL_49:
    v12 = v46;
    goto LABEL_50;
  }
  memcpy((void *)(v13 + 12), BackTrace, Size);
  *(_WORD *)(v13 + 4) &= 0xF800u;
  v25 = BackTraceHash;
  *(_WORD *)(v13 + 10) = v35;
  v26 = v25 % *(_DWORD *)(v3 + 376);
  *(_DWORD *)v13 = *(_DWORD *)(v3 + 8 * v26 + 380);
  *(_DWORD *)(v3 + 8 * v26 + 380) = v13;
LABEL_47:
  v12 = v46;
  if ( (*(_WORD *)(v13 + 4) & 0x7FF) != 0x7FF )
    *(_WORD *)(v13 + 4) ^= (*(_WORD *)(v13 + 4) ^ (*(_WORD *)(v13 + 4) + 1)) & 0x7FF;
LABEL_51:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v12 + 4));
  if ( !v13 )
  {
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  v27 = *(unsigned __int16 *)(v13 + 10);
  v28 = 0;
  if ( *(_WORD *)(v13 + 10) )
  {
    v29 = (_DWORD *)(v13 + 12);
    do
    {
      v28 += *v29++;
      --v27;
    }
    while ( v27 );
  }
  v30 = v3 + 8 * (v28 % *(_DWORD *)(v3 + 376));
  v46 = v30;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v30 + 384));
    v30 = v46;
  }
  if ( !*(_DWORD *)(v13 + 6) )
  {
    v31 = 0;
    BackTraceHash = 0;
    if ( !byte_4B3A5DA8 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)v3);
      v31 = 0;
    }
    v32 = *(_DWORD *)(v3 + 80);
    v40 = *(_DWORD *)(v3 + 88);
    v33 = v40 - 4;
    v23 = *(_BYTE *)(v3 + 68) == 0;
    Size = v32;
    if ( v23 )
    {
      if ( v33 < v32 )
      {
        v39 = 4096;
        if ( v32 - 4096 <= *(_DWORD *)(v3 + 76)
          || (Size = v32 - 4096, (int)NtAllocateVirtualMemory(-1, &Size, 0, &v39, 4096, 4) < 0) )
        {
          v31 = 0;
          goto LABEL_71;
        }
        *(_DWORD *)(v3 + 80) = Size;
      }
    }
    else if ( v33 < *(_DWORD *)(v3 + 84) )
    {
      goto LABEL_71;
    }
    v31 = (_DWORD *)(v40 - 4);
    ++*(_DWORD *)(v3 + 96);
    BackTraceHash = (ULONG)v31;
    *(_DWORD *)(v3 + 88) = v31;
LABEL_71:
    if ( !byte_4B3A5DA8 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)v3);
      v31 = (_DWORD *)BackTraceHash;
    }
    v34 = v47;
    v30 = v46;
    if ( v31 )
    {
      *v31 = v13;
      v4 = (*(_DWORD *)(v3 + 100) - (int)v31) >> 2;
      *(_WORD *)(v34 + 8) = v4;
      *(_WORD *)(v34 + 6) = HIWORD(v4);
    }
    else
    {
      v4 = 0;
    }
    goto LABEL_77;
  }
  v34 = v47;
  v4 = *(unsigned __int16 *)(v13 + 8) + (*(unsigned __int16 *)(v13 + 6) << 16);
LABEL_77:
  if ( !byte_4B3A5DA8 )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v30 + 384));
    v34 = v47;
  }
  if ( !v4 )
    RtlStdReleaseStackTrace(v3, v34);
LABEL_4:
  *(_WORD *)(v2 + 2) = v4;
  *(_WORD *)(v2 + 28) = HIWORD(v4);
  v5 = NtCreateSemaphore(&Handle, 1048579, 0, 0, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    RtlpFreeDebugInfo((char *)v2);
    RtlRaiseStatus(v5);
  }
  v6 = NtCreateSemaphore(&v37, 1048579, 0, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo((char *)v2);
    RtlRaiseStatus(v6);
  }
  *(_DWORD *)(a1 + 24) = Handle;
  v7 = v37;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = v2;
  RtlInitializeCriticalSectionEx(a1, 0, 0x8000000);
  RtlpAddDebugInfoToCriticalSection(a1);
  result = *(_WORD **)a1;
  if ( *(_DWORD *)a1 != -1 )
    *result = 1;
  return result;
}

/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C00CD300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rbx
  void *v15; // r12
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rax
  ULONG_PTR v21; // rax
  __int64 v22; // rbx
  __int64 CurrentProcess; // rax
  char *v24; // rdi
  __int64 v25; // rbx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  char *v29; // rdi
  __int64 v30; // rax
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v35 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this, a2, a3) != v9 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v13[3] = 270LL;
    v13[4] = 30LL;
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = a3;
    v15 = (void *)a2[4];
    v16 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v11 = a2[1];
    v16 = 4;
    v14 = a3 + a2[2];
    v15 = *(void **)(v11 + 88);
    if ( ((*(_DWORD *)(v11 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v16 = 1028;
  }
  v34 = v14;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0050784);
    v17 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v17 + 24) = 2369LL;
    WdLogEvent5_WdLowResource(v17);
    v19 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
    v19 = MmMapViewOfSection(v15, CurrentProcess, &MappedBase, 0LL, v35, &v34, &v35, 2, 0, v16);
    if ( v19 >= 0 )
    {
      v24 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v25 = v14 - v34;
      a2[11] = v24;
      return &v24[v25];
    }
  }
  _InterlockedIncrement(&dword_1C0050784);
  v20 = WdLogNewEntry5_WdLowResource(v18);
  *(_QWORD *)(v20 + 24) = a5;
  *(_QWORD *)(v20 + 32) = v19;
  WdLogEvent5_WdLowResource(v20);
  if ( a5 )
    return (char *)MappedBase;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v21 = a2[7];
    v22 = 0LL;
  }
  else
  {
    v22 = a2[2];
    v21 = *(_QWORD *)(a2[1] + 40LL);
  }
  ViewSize[0] = v21;
  v26 = MmMapViewInSystemSpace(v15, &MappedBase, ViewSize);
  v28 = v26;
  if ( v26 < 0 )
  {
    _InterlockedIncrement(&dword_1C0050784);
    v30 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v30 + 24) = v28;
    WdLogEvent5_WdLowResource(v30);
  }
  else
  {
    v29 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v29;
    return &v29[v22 + a3];
  }
  return (char *)v6;
}

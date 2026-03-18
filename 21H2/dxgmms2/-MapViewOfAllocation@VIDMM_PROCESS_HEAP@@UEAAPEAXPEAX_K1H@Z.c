/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C00F1D30
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rsi
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  ULONG_PTR v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v25; // rdx
  char *v26; // r14
  __int64 v27; // rbx
  NTSTATUS v28; // eax
  char *v29; // r14
  __int64 v30; // rcx
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v35 = a4;
  v5 = 0LL;
  MappedBase = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v13 = *((_QWORD *)this + 1);
  if ( CurrentProcess != *(_QWORD *)v13 )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = a3;
    v15 = (void *)a2[4];
    v16 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v13 = a2[1];
    v16 = 4;
    v14 = a3 + a2[2];
    v15 = *(void **)(v13 + 88);
    if ( ((*(_DWORD *)(v13 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v16 = 1028;
  }
  ViewSize = (ULONG_PTR)v15;
  v32 = v14;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C006E834);
    WdLogSingleEntry1(6LL, 2344LL);
    DxgkLogInternalTriageEvent(v17, 262145LL);
    v18 = -1073741823;
  }
  else
  {
    v22 = v35;
    v23 = PsGetCurrentProcess(v13, v10, v11, v12);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v25 = v23;
    v15 = (void *)ViewSize;
    v18 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            ViewSize,
            v25,
            &MappedBase,
            0LL,
            v22,
            &v32,
            &v35,
            2,
            0,
            v16);
    if ( v18 >= 0 )
    {
      v26 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v27 = v14 - v32;
      a2[11] = v26;
      return &v26[v27];
    }
  }
  _InterlockedIncrement(&dword_1C006E834);
  WdLogSingleEntry2(6LL, a5, v18);
  DxgkLogInternalTriageEvent(v19, 262145LL);
  if ( a5 )
    return (char *)MappedBase;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v20 = a2[7];
    v21 = 0LL;
  }
  else
  {
    v21 = a2[2];
    v20 = *(_QWORD *)(a2[1] + 40LL);
  }
  ViewSize = v20;
  v28 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
  if ( v28 < 0 )
  {
    _InterlockedIncrement(&dword_1C006E834);
    WdLogSingleEntry1(6LL, v28);
    DxgkLogInternalTriageEvent(v30, 262145LL);
  }
  else
  {
    v29 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v29;
    return &v29[v21 + a3];
  }
  return (char *)v5;
}

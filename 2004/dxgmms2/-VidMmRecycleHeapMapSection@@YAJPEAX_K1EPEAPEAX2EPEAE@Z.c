/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C3C94
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00782EC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0078944 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007B0E0 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00C2578 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00C2680 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00C2AE0 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        char a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // rsi
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 CurrentProcess; // rax
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a3;
  v8 = ViewSize;
  v22 = a2;
  MappedBase = 0LL;
  v11 = a4 != 0 ? 4 : 1028;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    LODWORD(v12) = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section);
    LODWORD(v12) = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v24, &v22, &v24, 2, 0, v11);
    if ( (int)v12 >= 0 )
    {
      v19 = (char *)MappedBase;
      *a6 = MappedBase;
      *a5 = &v19[a2 - v22];
      return (unsigned int)v12;
    }
  }
  _InterlockedIncrement(&dword_1C0051774);
  v13 = WdLogNewEntry5_WdLowResource(Section);
  v14 = a7;
  *(_QWORD *)(v13 + 32) = (int)v12;
  *(_QWORD *)(v13 + 24) = v14;
  WdLogEvent5_WdLowResource(v13);
  if ( !(_BYTE)v14 )
  {
    ViewSize = 0LL;
    v15 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    v12 = v15;
    if ( v15 < 0 )
    {
      _InterlockedIncrement(&dword_1C0051774);
      v20 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v20 + 24) = v12;
      WdLogEvent5_WdLowResource(v20);
    }
    else
    {
      if ( v8 )
        *v8 = 1;
      v17 = (char *)MappedBase;
      *a6 = MappedBase;
      *a5 = &v17[a2];
    }
  }
  return (unsigned int)v12;
}

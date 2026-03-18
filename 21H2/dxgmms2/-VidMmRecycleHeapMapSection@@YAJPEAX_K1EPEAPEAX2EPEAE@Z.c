/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00E772C
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C007D8AC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0081498 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00A32BC (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00E6938 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00E6A40 (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00E6EC0 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // r15
  int v11; // edi
  int v13; // r14d
  unsigned __int8 v14; // si
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  char *v17; // rcx
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  char *v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF

  v25 = a3;
  v8 = ViewSize;
  LOBYTE(a4) = -(char)a4;
  v23 = a2;
  v11 = (_BYTE)a4 != 0 ? 4 : 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v13 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section, a2, a3, a4);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v13 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            Section,
            CurrentProcess,
            &MappedBase,
            0LL,
            a3,
            &v23,
            &v25,
            2,
            0,
            v11);
    if ( v13 >= 0 )
    {
      v20 = (char *)MappedBase;
      *a6 = MappedBase;
      *a5 = &v20[a2 - v23];
      return (unsigned int)v13;
    }
  }
  _InterlockedIncrement(&dword_1C006E834);
  v14 = a7;
  WdLogSingleEntry2(6LL, a7, v13);
  DxgkLogInternalTriageEvent(v15, 262145LL);
  if ( !v14 )
  {
    ViewSize = 0LL;
    v16 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    v13 = v16;
    if ( v16 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E834);
      WdLogSingleEntry1(6LL, v16);
      DxgkLogInternalTriageEvent(v21, 262145LL);
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
  return (unsigned int)v13;
}

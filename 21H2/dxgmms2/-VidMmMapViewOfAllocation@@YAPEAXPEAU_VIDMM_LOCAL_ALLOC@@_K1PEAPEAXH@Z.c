/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007BE50 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A8840 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A89E0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00E7BD0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E8520 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

char *__fastcall VidMmMapViewOfAllocation(
        struct _VIDMM_LOCAL_ALLOC *a1,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        void **a4,
        int a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  struct _VIDMM_LOCAL_ALLOC *v8; // rsi
  int v9; // r13d
  int v10; // r13d
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // eax
  char *v17; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  PVOID MappedBase; // [rsp+68h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-9h] BYREF
  int v29; // [rsp+78h] [rbp-1h] BYREF
  __int64 v30; // [rsp+80h] [rbp+7h]
  char v31; // [rsp+88h] [rbp+Fh]
  struct _VIDMM_LOCAL_ALLOC *v32; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v33; // [rsp+E8h] [rbp+6Fh] BYREF
  void **v34; // [rsp+F0h] [rbp+77h]

  v34 = a4;
  v33 = a3;
  v32 = a1;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v8 = a1;
  if ( (*(_DWORD *)(v5 + 68) & 0x100) != 0 && (*(_DWORD *)(v5 + 72) & 0x80) != 0 )
  {
    v17 = (char *)*((_QWORD *)a1 + 2);
    return &v17[(_QWORD)a2];
  }
  v9 = **(_DWORD **)(v5 + 528);
  if ( (v9 & 0x20008) != 0 )
  {
    if ( !a5 )
    {
      v17 = *(char **)(v5 + 384);
      return &v17[(_QWORD)a2];
    }
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 76) & 4) != 0 || (*(_DWORD *)(v5 + 68) & 0x100) != 0 )
    {
      v25 = *(_QWORD *)(v5 + 376);
      v32 = a2;
      v26 = MmMapViewInSystemSpaceEx(v25, v5 + 384, &v33, &v32, 0LL);
      if ( v26 < 0 )
      {
        _InterlockedIncrement(&dword_1C006E834);
        WdLogSingleEntry2(6LL, v5, v26);
LABEL_36:
        DxgkLogInternalTriageEvent(v22, 262145LL);
        return (char *)MappedBase;
      }
      MappedBase = (char *)a2 + *(_QWORD *)(v5 + 384) - (_QWORD)v32;
      *(_DWORD *)(v5 + 72) |= 0x1000000u;
      return (char *)MappedBase;
    }
    LOBYTE(a1) = (v9 & 0x30) == 0;
    if ( ((unsigned __int8)a1 & (*(_BYTE *)(v5 + 72) >= 0)) != 0 )
    {
      if ( (v9 & 0x20000000) == 0 )
      {
        v29 = -1;
        v30 = 0LL;
        if ( (qword_1C006E010 & 2) != 0 )
        {
          v31 = 1;
          v29 = 8002;
          if ( byte_1C006E941 < 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 8002);
        }
        else
        {
          v31 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry();
        MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _VIDMM_LOCAL_ALLOC *, __int64, int))(**(_QWORD **)(*((_QWORD *)v8 + 1) + 24LL) + 56LL))(
                              *(_QWORD *)(*((_QWORD *)v8 + 1) + 24LL),
                              *((_QWORD *)v8 + 3),
                              a2,
                              v33,
                              a5);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
        if ( v31 && byte_1C006E941 < 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v29);
        return (char *)MappedBase;
      }
      v10 = **(_DWORD **)(v5 + 528) & 4;
      if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
      {
        _InterlockedIncrement(&dword_1C006E834);
        WdLogSingleEntry1(6LL, 649LL);
        DxgkLogInternalTriageEvent(v19, 262145LL);
        v16 = -1073741823;
      }
      else
      {
        v11 = *(_QWORD *)(v5 + 8);
        v28 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v13 = *(_QWORD *)(v5 + 376);
        v14 = CurrentProcess;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v16 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64, int, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v13,
                v14,
                &MappedBase,
                0LL,
                v11,
                &v28,
                v5 + 8,
                2,
                0,
                v10 != 0 ? 4 : 1028);
        if ( v16 >= 0 )
        {
LABEL_8:
          v17 = (char *)MappedBase;
          *v34 = MappedBase;
          return &v17[(_QWORD)a2];
        }
        v8 = v32;
      }
      _InterlockedIncrement(&dword_1C006E834);
      WdLogSingleEntry2(6LL, a5, v16);
      DxgkLogInternalTriageEvent(v20, 262145LL);
      if ( !a5 )
      {
        v21 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 376), &MappedBase, (PSIZE_T)(v5 + 8));
        if ( v21 >= 0 )
        {
          *((_BYTE *)v8 + 32) |= 8u;
          goto LABEL_8;
        }
        _InterlockedIncrement(&dword_1C006E834);
        WdLogSingleEntry1(6LL, v21);
        goto LABEL_36;
      }
      return (char *)MappedBase;
    }
    if ( !a5 || (v9 & 0x20) == 0 )
    {
      v17 = (char *)*((_QWORD *)v8 + 2);
      return &v17[(_QWORD)a2];
    }
  }
  return (char *)v6;
}

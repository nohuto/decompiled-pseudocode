/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00633B0
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063904 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0064208 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0074E80 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C008D270 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008D740 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00C31E0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C3D50 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00056B0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00178A8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v10; // rdx
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 CurrentProcess; // rax
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v32; // [rsp+50h] [rbp-20h] BYREF
  int v33; // [rsp+58h] [rbp-18h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]
  char v35; // [rsp+68h] [rbp-8h]
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+58h] BYREF

  v37 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v10 = *(_DWORD *)(v5 + 76) & 0x100;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v11 = (char *)*((_QWORD *)a1 + 2);
    return &v11[a2];
  }
  v12 = **(unsigned int **)(v5 + 512);
  if ( (v12 & 0x20008) != 0 )
  {
    if ( !a5 )
    {
      v11 = *(char **)(v5 + 376);
      return &v11[a2];
    }
  }
  else
  {
    if ( (*(_DWORD *)(v5 + 84) & 4) != 0 || (_DWORD)v10 )
    {
      v26 = *(_QWORD *)(v5 + 368);
      v38 = a2;
      v27 = MmMapViewInSystemSpaceEx(v26, v5 + 376, &v37, &v38, 0LL);
      v29 = v27;
      if ( v27 < 0 )
      {
        _InterlockedIncrement(&dword_1C0050784);
        v30 = WdLogNewEntry5_WdLowResource(v28);
        *(_QWORD *)(v30 + 24) = v5;
        *(_QWORD *)(v30 + 32) = v29;
        WdLogEvent5_WdLowResource(v30);
      }
      else
      {
        MappedBase = (PVOID)(a2 + *(_QWORD *)(v5 + 376) - v38);
        *(_DWORD *)(v5 + 80) |= 0x800000u;
      }
      return (char *)MappedBase;
    }
    if ( (*(_DWORD *)(v5 + 80) & 0x80u) == 0 && (v12 & 0x30) == 0 )
    {
      if ( (v12 & 0x20000000) != 0 )
      {
        v13 = v12 & 4;
        if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
        {
          _InterlockedIncrement(&dword_1C0050784);
          v14 = WdLogNewEntry5_WdLowResource(v13);
          *(_QWORD *)(v14 + 24) = 647LL;
          WdLogEvent5_WdLowResource(v14);
          LODWORD(v16) = -1073741823;
        }
        else
        {
          v17 = (unsigned int)-(int)v13;
          v32 = 0LL;
          v18 = (_DWORD)v17 != 0 ? 4 : 1028;
          CurrentProcess = PsGetCurrentProcess(v17, v10, a3);
          LODWORD(v16) = ((__int64 (__fastcall *)(_QWORD, __int64, PVOID *, _QWORD, _QWORD, __int64 *, __int64, int, _DWORD, int))MmMapViewOfSection)(
                           *(_QWORD *)(v5 + 368),
                           CurrentProcess,
                           &MappedBase,
                           0LL,
                           *(_QWORD *)(v5 + 8),
                           &v32,
                           v5 + 8,
                           2,
                           0,
                           v18);
          if ( (int)v16 >= 0 )
          {
LABEL_18:
            v11 = (char *)MappedBase;
            *a4 = MappedBase;
            return &v11[a2];
          }
        }
        _InterlockedIncrement(&dword_1C0050784);
        v20 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v20 + 24) = a5;
        *(_QWORD *)(v20 + 32) = (int)v16;
        WdLogEvent5_WdLowResource(v20);
        if ( !a5 )
        {
          v21 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 368), &MappedBase, (PSIZE_T)(v5 + 8));
          v16 = v21;
          if ( v21 < 0 )
          {
            _InterlockedIncrement(&dword_1C0050784);
            v23 = WdLogNewEntry5_WdLowResource(v22);
            *(_QWORD *)(v23 + 24) = v16;
            WdLogEvent5_WdLowResource(v23);
          }
          else
          {
            *((_BYTE *)a1 + 32) |= 8u;
          }
        }
        if ( (int)v16 >= 0 )
          goto LABEL_18;
      }
      else
      {
        v33 = -1;
        v34 = 0LL;
        if ( (qword_1C0050010 & 2) != 0 )
        {
          v35 = 1;
          v33 = 8002;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerEnter, a3, 8002);
        }
        else
        {
          v35 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry();
        MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL)
                                                                                             + 56LL))(
                              *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
                              *((_QWORD *)a1 + 3),
                              a2,
                              v37,
                              a5);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v33);
      }
      return (char *)MappedBase;
    }
    if ( !a5 || (v12 & 0x20) == 0 )
    {
      v11 = (char *)*((_QWORD *)a1 + 2);
      return &v11[a2];
    }
  }
  return (char *)v6;
}

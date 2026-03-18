/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0061058
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0061598 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0061C1C (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C008A120 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A5F0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00C45B0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C5120 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v31; // [rsp+50h] [rbp-20h] BYREF
  int v32; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]
  char v34; // [rsp+68h] [rbp-8h]
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+58h] BYREF

  v36 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v10 = (char *)*((_QWORD *)a1 + 2);
    return &v10[a2];
  }
  v11 = **(unsigned int **)(v5 + 496);
  if ( (v11 & 0x20008) != 0 )
  {
    if ( !a5 )
    {
      v10 = *(char **)(v5 + 360);
      return &v10[a2];
    }
  }
  else
  {
    if ( (*(_DWORD *)(v5 + 84) & 4) != 0 || (*(_DWORD *)(v5 + 76) & 0x100) != 0 )
    {
      v25 = *(_QWORD *)(v5 + 352);
      v37 = a2;
      v26 = MmMapViewInSystemSpaceEx(v25, v5 + 360, &v36, &v37, 0LL);
      v28 = v26;
      if ( v26 >= 0 )
      {
        v10 = (char *)(*(_QWORD *)(v5 + 360) - v37);
        return &v10[a2];
      }
      _InterlockedIncrement(&dword_1C0051784);
      v29 = WdLogNewEntry5_WdLowResource(v27);
      *(_QWORD *)(v29 + 24) = v5;
      *(_QWORD *)(v29 + 32) = v28;
      WdLogEvent5_WdLowResource(v29);
      return (char *)MappedBase;
    }
    if ( (*(_DWORD *)(v5 + 80) & 0x80u) == 0 && (v11 & 0x30) == 0 )
    {
      if ( (v11 & 0x20000000) != 0 )
      {
        v12 = v11 & 4;
        if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
        {
          _InterlockedIncrement(&dword_1C0051784);
          v13 = WdLogNewEntry5_WdLowResource(v12);
          *(_QWORD *)(v13 + 24) = 644LL;
          WdLogEvent5_WdLowResource(v13);
          LODWORD(v15) = -1073741823;
        }
        else
        {
          v16 = (unsigned int)-(int)v12;
          v31 = 0LL;
          v17 = (_DWORD)v16 != 0 ? 4 : 1028;
          CurrentProcess = PsGetCurrentProcess(v16);
          LODWORD(v15) = MmMapViewOfSection(
                           *(_QWORD *)(v5 + 352),
                           CurrentProcess,
                           &MappedBase,
                           0LL,
                           *(_QWORD *)(v5 + 8),
                           &v31,
                           v5 + 8,
                           2,
                           0,
                           v17);
          if ( (int)v15 >= 0 )
          {
LABEL_18:
            v10 = (char *)MappedBase;
            *a4 = MappedBase;
            return &v10[a2];
          }
        }
        _InterlockedIncrement(&dword_1C0051784);
        v19 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v19 + 24) = a5;
        *(_QWORD *)(v19 + 32) = (int)v15;
        WdLogEvent5_WdLowResource(v19);
        if ( !a5 )
        {
          v20 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 352), &MappedBase, (PSIZE_T)(v5 + 8));
          v15 = v20;
          if ( v20 < 0 )
          {
            _InterlockedIncrement(&dword_1C0051784);
            v22 = WdLogNewEntry5_WdLowResource(v21);
            *(_QWORD *)(v22 + 24) = v15;
            WdLogEvent5_WdLowResource(v22);
          }
          else
          {
            *((_BYTE *)a1 + 32) |= 8u;
          }
        }
        if ( (int)v15 >= 0 )
          goto LABEL_18;
      }
      else
      {
        v32 = -1;
        v33 = 0LL;
        if ( (qword_1C0051010 & 2) != 0 )
        {
          v34 = 1;
          v32 = 8002;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerEnter, a3, 8002);
        }
        else
        {
          v34 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry();
        MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL)
                                                                                             + 56LL))(
                              *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
                              *((_QWORD *)a1 + 3),
                              a2,
                              v36,
                              a5);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v32);
      }
      return (char *)MappedBase;
    }
    if ( !a5 || (v11 & 0x20) == 0 )
    {
      v10 = (char *)*((_QWORD *)a1 + 2);
      return &v10[a2];
    }
  }
  return (char *)v6;
}

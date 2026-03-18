/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00CE910
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00177C8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00177EC (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00C16E4 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  ULONG_PTR v9; // rdi
  __int64 v12; // r15
  char v13; // si
  NTSTATUS v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  char *v26; // r12
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  SIZE_T v32; // r14
  HANDLE v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  char v36; // bl
  struct _MDL *v37; // rbx
  ULONG_PTR v38; // rdi
  PVOID Context; // rsi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  int i; // r15d
  NTSTATUS v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  PVOID v54; // rbx
  NTSTATUS (__stdcall *v55)(PMDL, PMDL, PVOID); // r15
  __int64 v56; // rbx
  struct _MDL *v57; // r13
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  SIZE_T v62; // [rsp+30h] [rbp-40h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v64; // [rsp+40h] [rbp-30h] BYREF
  union _LARGE_INTEGER v65; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-20h] BYREF
  int v67; // [rsp+58h] [rbp-18h] BYREF
  __int64 v68; // [rsp+60h] [rbp-10h]
  char v69; // [rsp+68h] [rbp-8h]
  int v70; // [rsp+B0h] [rbp+40h]
  ULONG_PTR v71; // [rsp+C0h] [rbp+50h] BYREF
  enum _MM_ROTATE_DIRECTION v72; // [rsp+C8h] [rbp+58h]

  v72 = a4;
  v71 = a3;
  v67 = -1;
  v9 = a3;
  v68 = 0LL;
  v12 = a4;
  v13 = 1;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v69 = 1;
    v67 = 8005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8005);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  v15 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v17, v16, v18) != v15 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v22[5] = 0LL;
    v22[6] = 0LL;
    v22[7] = 0LL;
    v22[3] = 270LL;
    v22[4] = 30LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v23 = WdLogNewEntry5_WdTrace(v20);
    *(_QWORD *)(v23 + 24) = v9;
    *(_QWORD *)(v23 + 32) = v12;
  }
  v24 = *(_QWORD *)(v9 + 8);
  v25 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v26 = *(char **)(v9 + 8);
    v27 = (*(_DWORD *)(v9 + 20) >> 23) & 1;
  }
  else
  {
    v26 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v24 + 32));
    if ( (*(_DWORD *)(v24 + 64) & 1) != 0 )
      goto LABEL_19;
    v27 = 0;
  }
  if ( v27 )
  {
LABEL_19:
    v70 = 0;
    if ( (unsigned int)v12 <= 1 )
    {
      v32 = Size;
      v62 = Size;
      if ( !(_DWORD)v25 && !*(_QWORD *)(v24 + 56) && !*(_QWORD *)(v9 + 32) )
      {
        v33 = MmSecureVirtualMemory(v26, Size, 4u);
        *(_QWORD *)(v9 + 32) = v33;
        if ( !v33 )
        {
          _InterlockedAdd(&dword_1C0051730, 1u);
          v35 = WdLogNewEntry5_WdLowResource(v34);
          *(_QWORD *)(v35 + 24) = 1553LL;
          WdLogEvent5_WdLowResource(v35);
          v14 = -1073741801;
          goto LABEL_59;
        }
      }
      if ( *(_DWORD *)(a2 + 40176) != -1 )
        (*(void (__fastcall **)(_QWORD))(a2 + 40080))(*(_QWORD *)(a2 + 40144));
      v70 = 1;
    }
    else
    {
      v32 = *(_QWORD *)(v9 + 64);
      v62 = v32;
    }
    v36 = a9;
    if ( (_DWORD)v12 == 2 )
    {
      v37 = NewMdl;
      v38 = v32;
      Context = a8;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v38;
        v14 = MmRotatePhysicalView(v26, &NumberOfBytes, v37, MmToRegularMemory, CopyFunction, Context);
        if ( v14 != 1073741849 )
          break;
        v44 = WdLogNewEntry5_WdWarning(v42, v41);
        WdLogEvent5_WdWarning(v44);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v45, &EventPerformanceWarning, v46, 12);
        v26 += NumberOfBytes;
        v38 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v9 = v71;
      v13 = 1;
    }
    else
    {
      if ( (_DWORD)v12 != 3 )
      {
        v71 = v32;
        v14 = MmRotatePhysicalView(v26, &v71, NewMdl, (MM_ROTATE_DIRECTION)v12, a7, a8);
        if ( v14 >= 0 )
          goto LABEL_63;
        if ( (v36 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
LABEL_53:
        if ( v14 < 0 )
        {
          if ( v70 )
          {
            v47 = *(unsigned int *)(a2 + 40176);
            if ( (_DWORD)v47 != -1 )
              (*(void (__fastcall **)(_QWORD))(a2 + 40096))(*(_QWORD *)(a2 + 40144));
          }
          v56 = v62;
          v57 = NewMdl;
LABEL_58:
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v42, v47, v43);
          VIDMM_GLOBAL::RecordRotation(CurrentProcess, v26, v56, v57, (enum _MM_ROTATE_DIRECTION)v12, v14);
          goto LABEL_59;
        }
LABEL_63:
        if ( (unsigned int)v12 <= 1 )
        {
          v56 = v62;
          v57 = NewMdl;
          *(_QWORD *)(v9 + 64) = v62;
          *(_QWORD *)(v9 + 80) = v57;
        }
        else
        {
          if ( (v36 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
            *(_QWORD *)(v9 + 80) = 0LL;
          }
          v56 = v62;
          v13 = 0;
          v57 = NewMdl;
        }
        *(_BYTE *)(v9 + 72) = v13;
        goto LABEL_58;
      }
      v65.QuadPart = -10000LL;
      v64 = v32;
      LODWORD(v71) = a9 & 1;
      for ( i = v71; ; i = v71 )
      {
        v49 = MmRotatePhysicalView(v26, &v64, NewMdl, MmToRegularMemoryNoCopy, a7, a8);
        v14 = v49;
        if ( !i || v49 != 1073741849 )
          break;
        v51 = WdLogNewEntry5_WdWarning(v42, v50);
        WdLogEvent5_WdWarning(v51);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v52, &EventPerformanceWarning, v53, 12);
        v54 = a8;
        v55 = a7;
        while ( MmRotatePhysicalView(v26, &v64, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v55, v54) < 0 )
          KeDelayExecutionThread(0, 0, &v65);
        KeDelayExecutionThread(0, 0, &v65);
      }
    }
    v47 = *(unsigned int *)(a2 + 40176);
    v36 = a9;
    LODWORD(v12) = v72;
    if ( (_DWORD)v47 != -1 )
      (*(void (__fastcall **)(_QWORD))(a2 + 40096))(*(_QWORD *)(a2 + 40144));
    goto LABEL_53;
  }
  if ( (int)v12 >= 0 )
  {
    if ( (int)v12 <= 1 )
    {
      v14 = -1073741823;
    }
    else if ( (int)v12 <= 3 )
    {
      v28 = PsGetCurrentProcess(v24, v25, v21);
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
      v31[3] = 270LL;
      v31[4] = 1LL;
      v31[5] = v28;
      v31[6] = v9;
      v31[7] = v12;
      WdLogEvent5_WdCriticalError(v31);
    }
  }
LABEL_59:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v67);
  return (unsigned int)v14;
}

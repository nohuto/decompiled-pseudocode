/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00CEF10
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015C74 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0015C98 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00C1C94 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
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
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // r12
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  SIZE_T v28; // r14
  HANDLE v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // bl
  struct _MDL *v33; // rbx
  ULONG_PTR v34; // rdi
  PVOID Context; // rsi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int i; // r15d
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  PVOID v48; // rbx
  NTSTATUS (__stdcall *v49)(PMDL, PMDL, PVOID); // r15
  __int64 v50; // rbx
  struct _MDL *v51; // r13
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  SIZE_T v56; // [rsp+30h] [rbp-40h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v58; // [rsp+40h] [rbp-30h] BYREF
  union _LARGE_INTEGER v59; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-20h] BYREF
  int v61; // [rsp+58h] [rbp-18h] BYREF
  __int64 v62; // [rsp+60h] [rbp-10h]
  char v63; // [rsp+68h] [rbp-8h]
  int v64; // [rsp+B0h] [rbp+40h]
  ULONG_PTR v65; // [rsp+C0h] [rbp+50h] BYREF
  enum _MM_ROTATE_DIRECTION v66; // [rsp+C8h] [rbp+58h]

  v66 = a4;
  v65 = a3;
  v61 = -1;
  v9 = a3;
  v62 = 0LL;
  v12 = a4;
  v13 = 1;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v63 = 1;
    v61 = 8005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 8005);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  v15 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v16) != v15 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    v19[3] = 270LL;
    v19[4] = 30LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = WdLogNewEntry5_WdTrace(v18);
    *(_QWORD *)(v20 + 24) = v9;
    *(_QWORD *)(v20 + 32) = v12;
  }
  v21 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v22 = *(char **)(v9 + 8);
    v23 = (*(_DWORD *)(v9 + 20) >> 23) & 1;
  }
  else
  {
    v22 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v21 + 32));
    if ( (*(_DWORD *)(v21 + 64) & 1) != 0 )
      goto LABEL_19;
    v23 = 0;
  }
  if ( v23 )
  {
LABEL_19:
    v64 = 0;
    if ( (unsigned int)v12 <= 1 )
    {
      v28 = Size;
      v56 = Size;
      if ( (*(_DWORD *)v9 & 1) == 0 && !*(_QWORD *)(v21 + 56) && !*(_QWORD *)(v9 + 32) )
      {
        v29 = MmSecureVirtualMemory(v22, Size, 4u);
        *(_QWORD *)(v9 + 32) = v29;
        if ( !v29 )
        {
          _InterlockedAdd(&dword_1C0051750, 1u);
          v31 = WdLogNewEntry5_WdLowResource(v30);
          *(_QWORD *)(v31 + 24) = 1553LL;
          WdLogEvent5_WdLowResource(v31);
          v14 = -1073741801;
          goto LABEL_59;
        }
      }
      if ( *(_DWORD *)(a2 + 40176) != -1 )
        (*(void (__fastcall **)(_QWORD))(a2 + 40080))(*(_QWORD *)(a2 + 40144));
      v64 = 1;
    }
    else
    {
      v28 = *(_QWORD *)(v9 + 64);
      v56 = v28;
    }
    v32 = a9;
    if ( (_DWORD)v12 == 2 )
    {
      v33 = NewMdl;
      v34 = v28;
      Context = a8;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v34;
        v14 = MmRotatePhysicalView(v22, &NumberOfBytes, v33, MmToRegularMemory, CopyFunction, Context);
        if ( v14 != 1073741849 )
          break;
        v39 = WdLogNewEntry5_WdWarning(v38, v37);
        WdLogEvent5_WdWarning(v39);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, &EventPerformanceWarning, v41, 12);
        v22 += NumberOfBytes;
        v34 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v9 = v65;
      v13 = 1;
    }
    else
    {
      if ( (_DWORD)v12 != 3 )
      {
        v65 = v28;
        v14 = MmRotatePhysicalView(v22, &v65, NewMdl, (MM_ROTATE_DIRECTION)v12, a7, a8);
        if ( v14 >= 0 )
          goto LABEL_63;
        if ( (v32 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
LABEL_53:
        if ( v14 < 0 )
        {
          if ( v64 && *(_DWORD *)(a2 + 40176) != -1 )
            (*(void (__fastcall **)(_QWORD))(a2 + 40096))(*(_QWORD *)(a2 + 40144));
          v50 = v56;
          v51 = NewMdl;
LABEL_58:
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v38);
          VIDMM_GLOBAL::RecordRotation(CurrentProcess, v22, v50, v51, (enum _MM_ROTATE_DIRECTION)v12, v14);
          goto LABEL_59;
        }
LABEL_63:
        if ( (unsigned int)v12 <= 1 )
        {
          v50 = v56;
          v51 = NewMdl;
          *(_QWORD *)(v9 + 64) = v56;
          *(_QWORD *)(v9 + 80) = v51;
        }
        else
        {
          if ( (v32 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
            *(_QWORD *)(v9 + 80) = 0LL;
          }
          v50 = v56;
          v13 = 0;
          v51 = NewMdl;
        }
        *(_BYTE *)(v9 + 72) = v13;
        goto LABEL_58;
      }
      v59.QuadPart = -10000LL;
      v58 = v28;
      LODWORD(v65) = a9 & 1;
      for ( i = v65; ; i = v65 )
      {
        v43 = MmRotatePhysicalView(v22, &v58, NewMdl, MmToRegularMemoryNoCopy, a7, a8);
        v14 = v43;
        if ( !i || v43 != 1073741849 )
          break;
        v45 = WdLogNewEntry5_WdWarning(v38, v44);
        WdLogEvent5_WdWarning(v45);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, &EventPerformanceWarning, v47, 12);
        v48 = a8;
        v49 = a7;
        while ( MmRotatePhysicalView(v22, &v58, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v49, v48) < 0 )
          KeDelayExecutionThread(0, 0, &v59);
        KeDelayExecutionThread(0, 0, &v59);
      }
    }
    v32 = a9;
    LODWORD(v12) = v66;
    if ( *(_DWORD *)(a2 + 40176) != -1 )
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
      v24 = PsGetCurrentProcess(v21);
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25);
      v27[3] = 270LL;
      v27[4] = 1LL;
      v27[5] = v24;
      v27[6] = v9;
      v27[7] = v12;
      WdLogEvent5_WdCriticalError(v27);
    }
  }
LABEL_59:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v61);
  return (unsigned int)v14;
}

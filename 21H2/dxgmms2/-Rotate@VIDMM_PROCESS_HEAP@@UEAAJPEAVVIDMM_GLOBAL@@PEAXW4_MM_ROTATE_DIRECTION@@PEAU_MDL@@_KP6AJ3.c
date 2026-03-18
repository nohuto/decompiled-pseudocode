/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F2570
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00A900C (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
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
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  char v13; // di
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  bool v27; // zf
  char *v28; // r12
  SIZE_T v29; // r13
  HANDLE v30; // rax
  __int64 v31; // rcx
  struct _MDL *v32; // r14
  ULONG_PTR v33; // rbx
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r13
  PVOID Context; // r15
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  struct _MDL *v42; // r15
  PVOID v43; // r13
  int v44; // r15d
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  NTSTATUS (__stdcall *v48)(PMDL, PMDL, PVOID); // r14
  struct _EPROCESS *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-29h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  int v57; // [rsp+70h] [rbp-19h] BYREF
  __int64 v58; // [rsp+78h] [rbp-11h]
  char v59; // [rsp+80h] [rbp-9h]
  int v60; // [rsp+D8h] [rbp+4Fh]
  ULONG_PTR v62; // [rsp+E8h] [rbp+5Fh] BYREF
  enum _MM_ROTATE_DIRECTION v63; // [rsp+F0h] [rbp+67h]

  v63 = a4;
  v62 = a3;
  v57 = -1;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  v58 = 0LL;
  v13 = 1;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v59 = 1;
    v57 = 8005;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 8005);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  CurrentProcess = PsGetCurrentProcess(v16, v15, v17, v18);
  v23 = *(_QWORD **)(a1 + 8);
  if ( CurrentProcess != *v23 )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v24 = WdLogNewEntry5_WdTrace(v23, v20, v21, v22);
    *(_QWORD *)(v24 + 24) = v9;
    *(_QWORD *)(v24 + 32) = v10;
  }
  v25 = *(_QWORD *)(v9 + 8);
  v26 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v27 = (*(_DWORD *)(v9 + 20) & 0x800000) == 0;
    v28 = *(char **)(v9 + 8);
  }
  else
  {
    v28 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v25 + 32));
    v27 = (*(_DWORD *)(v25 + 64) & 1) == 0;
  }
  if ( v27 )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        v14 = -1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        v50 = PsGetCurrentProcess(v25, v26, v21, v22);
        WdLogSingleEntry5(0LL, 270LL, 1LL, v50, v9, v10);
      }
    }
  }
  else
  {
    v60 = 0;
    if ( (unsigned int)v10 > 1 )
    {
      v29 = *(_QWORD *)(v9 + 64);
      v55 = v29;
      goto LABEL_23;
    }
    v29 = Size;
    v55 = Size;
    if ( (_DWORD)v26
      || *(_QWORD *)(v25 + 56)
      || *(_QWORD *)(v9 + 32)
      || (v30 = MmSecureVirtualMemory(v28, Size, 4u), (*(_QWORD *)(v9 + 32) = v30) != 0LL) )
    {
      if ( *(_DWORD *)(v11 + 40184) != -1 )
        (*(void (__fastcall **)(_QWORD))(v11 + 40088))(*(_QWORD *)(v11 + 40152));
      v60 = 1;
LABEL_23:
      if ( (_DWORD)v10 == 2 )
      {
        v32 = NewMdl;
        v33 = v29;
        CopyFunction = a7;
        Context = a8;
        Interval.QuadPart = -10000LL;
        while ( 1 )
        {
          NumberOfBytes = v33;
          v14 = MmRotatePhysicalView(v28, &NumberOfBytes, v32, MmToRegularMemory, CopyFunction, Context);
          if ( v14 != 1073741849 )
            break;
          WdLogSingleEntry0(3LL);
          if ( bTracingEnabled )
          {
            if ( (byte_1C006E941 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventPerformanceWarning, v40, 12);
          }
          v28 += NumberOfBytes;
          v33 -= NumberOfBytes;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v9 = v62;
      }
      else
      {
        if ( (_DWORD)v10 != 3 )
        {
          v62 = v29;
          v14 = MmRotatePhysicalView(v28, &v62, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
          if ( v14 >= 0 )
          {
LABEL_34:
            if ( (unsigned int)v10 <= 1 )
            {
              v42 = NewMdl;
              *(_QWORD *)(v9 + 80) = NewMdl;
              *(_QWORD *)(v9 + 64) = v29;
            }
            else
            {
              if ( (a9 & 2) == 0 )
              {
                ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
                *(_QWORD *)(v9 + 80) = 0LL;
              }
              v42 = NewMdl;
              v13 = 0;
            }
            *(_BYTE *)(v9 + 72) = v13;
LABEL_56:
            v49 = (struct _EPROCESS *)PsGetCurrentProcess(v36, v41, v37, v38);
            VIDMM_GLOBAL::RecordRotation(v49, v28, v29, v42, (enum _MM_ROTATE_DIRECTION)v10, v14);
            goto LABEL_64;
          }
          if ( (a9 & 2) != 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
            *(_QWORD *)(v9 + 80) = 0LL;
          }
LABEL_52:
          if ( v60 )
          {
            v41 = *(unsigned int *)(v11 + 40184);
            if ( (_DWORD)v41 != -1 )
              (*(void (__fastcall **)(_QWORD))(v11 + 40104))(*(_QWORD *)(v11 + 40152));
          }
          v42 = NewMdl;
          goto LABEL_56;
        }
        NumberOfBytes = v29;
        v43 = a8;
        v44 = a9 & 1;
        Interval.QuadPart = -10000LL;
        while ( 1 )
        {
          v45 = MmRotatePhysicalView(v28, &NumberOfBytes, NewMdl, MmToRegularMemoryNoCopy, a7, v43);
          v14 = v45;
          if ( !v44 || v45 != 1073741849 )
            break;
          WdLogSingleEntry0(3LL);
          if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventPerformanceWarning, v47, 12);
          v48 = a7;
          while ( MmRotatePhysicalView(v28, &NumberOfBytes, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v48, v43) < 0 )
            KeDelayExecutionThread(0, 0, &Interval);
          KeDelayExecutionThread(0, 0, &Interval);
        }
      }
      v11 = a2;
      v29 = v55;
      LODWORD(v10) = v63;
      v41 = *(unsigned int *)(a2 + 40184);
      if ( (_DWORD)v41 != -1 )
        (*(void (__fastcall **)(_QWORD))(a2 + 40104))(*(_QWORD *)(a2 + 40152));
      if ( v14 >= 0 )
        goto LABEL_34;
      goto LABEL_52;
    }
    _InterlockedAdd(&dword_1C006E810, 1u);
    WdLogSingleEntry1(6LL, 1530LL);
    DxgkLogInternalTriageEvent(v31, 262145LL);
    v14 = -1073741801;
  }
LABEL_64:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 )
  {
    LOBYTE(v51) = byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v57);
  }
  return (unsigned int)v14;
}

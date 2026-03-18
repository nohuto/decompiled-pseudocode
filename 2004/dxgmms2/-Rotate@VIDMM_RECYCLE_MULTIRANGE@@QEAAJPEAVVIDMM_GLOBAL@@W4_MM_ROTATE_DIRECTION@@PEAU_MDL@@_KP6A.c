/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C3388
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C3280 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0078150 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A758 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A860 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A96C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00C1C94 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00C253C (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        _QWORD *a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8,
        PVOID VirtualAddress)
{
  char v9; // r15
  __int64 v10; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v11; // r14
  int v12; // r12d
  _QWORD *v13; // rax
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // r10
  SIZE_T v22; // r12
  HANDLE v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v27; // si
  ULONG_PTR v28; // rbx
  struct _MDL *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ebx
  NTSTATUS v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID v38; // rdi
  NTSTATUS (__stdcall *v39)(PMDL, PMDL, PVOID); // rsi
  PVOID v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned int v44; // edx
  __int64 v45; // r9
  _QWORD *v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rdx
  PHYSICAL_ADDRESS v49; // rdi
  union _LARGE_INTEGER v50; // r14
  PHYSICAL_ADDRESS v51; // rbx
  SIZE_T v52; // r13
  _QWORD *v53; // rax
  __int64 v54; // rbx
  struct _EPROCESS *v55; // rax
  PMDL v56; // rax
  __int64 CurrentProcess; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  SIZE_T v61; // [rsp+30h] [rbp-48h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v63; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v64; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v66; // [rsp+58h] [rbp-20h] BYREF
  union _LARGE_INTEGER v67; // [rsp+60h] [rbp-18h] BYREF
  union _LARGE_INTEGER v68; // [rsp+68h] [rbp-10h] BYREF
  _QWORD *v70; // [rsp+C8h] [rbp+50h] BYREF
  int v71; // [rsp+D0h] [rbp+58h]
  PMDL NewMdl; // [rsp+D8h] [rbp+60h]

  NewMdl = a4;
  v71 = a3;
  v70 = a2;
  v9 = 0;
  v10 = a3;
  v11 = a1;
  v12 = 0;
  if ( *((_DWORD *)a1 + 54) == 4 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v13[3] = 270LL;
    v13[4] = 52LL;
    v13[5] = 11LL;
    v13[6] = v10;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v11 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(a1, i);
      LOBYTE(v70) = 0;
      v12 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, (bool *)&v70, v15);
      if ( v12 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16);
        v18[3] = i;
        v18[4] = v11;
        v18[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v18);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v11 + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v12;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v11 + 9) )
      break;
  }
  VirtualAddress = (PVOID)*((_QWORD *)v11 + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)v11) )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v20);
        v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58);
        v60[3] = 270LL;
        v60[4] = 1LL;
        v60[5] = CurrentProcess;
        v60[6] = v11;
        v60[7] = v10;
        WdLogEvent5_WdCriticalError(v60);
      }
    }
    return (unsigned int)v12;
  }
  if ( (unsigned int)v10 <= 1 )
  {
    v22 = Size;
    v61 = Size;
    if ( !*((_QWORD *)v11 + 24) )
    {
      v23 = MmSecureVirtualMemory(v21, Size, 4u);
      *((_QWORD *)v11 + 24) = v23;
      if ( !v23 )
      {
        _InterlockedAdd(&dword_1C0051750, 1u);
        v25 = WdLogNewEntry5_WdLowResource(v24);
        *(_QWORD *)(v25 + 24) = 3450LL;
        WdLogEvent5_WdLowResource(v25);
        return 3221225495LL;
      }
      v21 = VirtualAddress;
    }
  }
  else
  {
    v22 = *((_QWORD *)v11 + 17);
    v61 = v22;
  }
  v27 = a8;
  if ( (_DWORD)v10 == 2 )
  {
    Interval.QuadPart = -10000LL;
    v28 = v22;
    while ( 1 )
    {
      NumberOfBytes = v28;
      v12 = MmRotatePhysicalView(v21, &NumberOfBytes, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( v12 != 1073741849 )
        break;
      v30 = WdLogNewEntry5_WdWarning(v29, v19);
      WdLogEvent5_WdWarning(v30);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, &EventPerformanceWarning, v32, 12);
      }
      v28 -= NumberOfBytes;
      VirtualAddress = (char *)VirtualAddress + NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
      v21 = VirtualAddress;
    }
  }
  else if ( (_DWORD)v10 == 3 )
  {
    v64.QuadPart = -10000LL;
    v33 = a8 & 1;
    v63 = v22;
    while ( 1 )
    {
      v34 = MmRotatePhysicalView(v21, &v63, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
      v12 = v34;
      if ( !v33 || v34 != 1073741849 )
        break;
      v35 = WdLogNewEntry5_WdWarning(v29, v19);
      WdLogEvent5_WdWarning(v35);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, &EventPerformanceWarning, v37, 12);
      v38 = Context;
      v39 = CopyFunction;
      v40 = VirtualAddress;
      while ( MmRotatePhysicalView(v40, &v63, *((PMDL *)v11 + 18), MmToFrameBufferNoCopy, v39, v38) < 0 )
        KeDelayExecutionThread(0, 0, &v64);
      KeDelayExecutionThread(0, 0, &v64);
      v27 = a8;
      v21 = v40;
      LODWORD(v10) = v71;
    }
  }
  else
  {
    if ( (a8 & 2) != 0 )
    {
      v29 = (struct _MDL *)*((_QWORD *)v11 + 18);
      NewMdl = v29;
    }
    else
    {
      v29 = NewMdl;
    }
    v66 = v22;
    if ( g_bInjectRotateFailure )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = MmRotatePhysicalView(v21, &v66, v29, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
      if ( v12 >= 0 )
      {
LABEL_67:
        if ( (unsigned int)v10 <= 1 )
        {
          v54 = v61;
          v9 = 1;
          v56 = NewMdl;
          *((_QWORD *)v11 + 17) = v61;
          *((_QWORD *)v11 + 18) = v56;
        }
        else
        {
          if ( (v27 & 2) == 0 )
          {
            ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
            v29 = (struct _MDL *)*((_QWORD *)v11 + 24);
            *((_QWORD *)v11 + 18) = 0LL;
            if ( v29 )
            {
              MmUnsecureVirtualMemory(v29);
              *((_QWORD *)v11 + 24) = 0LL;
            }
          }
          v54 = v61;
        }
        *((_BYTE *)v11 + 130) = v9;
        goto LABEL_66;
      }
    }
    if ( (v27 & 2) != 0 )
    {
      ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
      *((_QWORD *)v11 + 18) = 0LL;
    }
  }
  if ( v12 >= 0 )
    goto LABEL_67;
  if ( v12 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
  {
    v41 = *((_QWORD *)v11 + 18);
    if ( v41 )
    {
      v42 = 1LL;
      v43 = *(_QWORD *)(v41 + 48);
      v44 = *(_DWORD *)(v41 + 40) >> 12;
      v45 = v43;
      if ( v44 > 1 )
      {
        v46 = (_QWORD *)(v41 + 56);
        v70 = (_QWORD *)(v41 + 56);
        v47 = v44 - 1;
        do
        {
          v48 = *v46;
          if ( *v46 == v45 + 1 )
          {
            ++v42;
          }
          else
          {
            v49.QuadPart = v43 << 12;
            v67.QuadPart = v42 << 12;
            v43 = v48;
            if ( MmIsIoSpaceActive(v49, v42 << 12) )
            {
              v50 = v67;
              do
              {
                v67.QuadPart = -10000LL;
                KeDelayExecutionThread(0, 0, &v67);
              }
              while ( MmIsIoSpaceActive(v49, v50.QuadPart) );
            }
            v46 = v70;
            v48 = v43;
            v42 = 1LL;
          }
          ++v46;
          v45 = v48;
          v70 = v46;
          --v47;
        }
        while ( v47 );
        v27 = a8;
        v11 = a1;
        LODWORD(v10) = v71;
      }
      v63 = v42 << 12;
      v51.QuadPart = v43 << 12;
      if ( MmIsIoSpaceActive(v51, v42 << 12) )
      {
        v52 = v63;
        do
        {
          v68.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &v68);
        }
        while ( MmIsIoSpaceActive(v51, v52) );
      }
      if ( (v27 & 2) == 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
        *((_QWORD *)v11 + 18) = 0LL;
      }
      *((_BYTE *)v11 + 130) = 0;
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v19);
      v53[3] = 270LL;
      v53[4] = 4LL;
      v53[5] = v11;
      v53[6] = -1073741558LL;
      v53[7] = 0LL;
      WdLogEvent5_WdCriticalError(v53);
    }
  }
  v29 = (struct _MDL *)*((_QWORD *)v11 + 24);
  if ( v29 )
  {
    MmUnsecureVirtualMemory(v29);
    *((_QWORD *)v11 + 24) = 0LL;
  }
  v54 = v61;
LABEL_66:
  v55 = (struct _EPROCESS *)PsGetCurrentProcess(v29);
  VIDMM_GLOBAL::RecordRotation(v55, VirtualAddress, v54, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v12);
  return (unsigned int)v12;
}

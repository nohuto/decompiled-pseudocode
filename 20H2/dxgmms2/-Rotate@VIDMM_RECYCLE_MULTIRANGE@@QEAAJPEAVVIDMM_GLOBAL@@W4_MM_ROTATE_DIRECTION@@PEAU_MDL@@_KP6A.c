/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C2DD8
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C2CD0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C00612EC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0063698 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006381C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00C16E4 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00C1F8C (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
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
  __int64 v21; // r8
  PVOID v22; // r10
  SIZE_T v23; // r12
  HANDLE v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  char v28; // si
  ULONG_PTR v29; // rbx
  struct _MDL *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // ebx
  NTSTATUS v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  PVOID v39; // rdi
  NTSTATUS (__stdcall *v40)(PMDL, PMDL, PVOID); // rsi
  PVOID v41; // r12
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned int v45; // edx
  __int64 v46; // r9
  _QWORD *v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rdx
  PHYSICAL_ADDRESS v50; // rdi
  union _LARGE_INTEGER v51; // r14
  PHYSICAL_ADDRESS v52; // rbx
  SIZE_T v53; // r13
  _QWORD *v54; // rax
  __int64 v55; // rbx
  struct _EPROCESS *v56; // rax
  PMDL v57; // rax
  __int64 CurrentProcess; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  SIZE_T v62; // [rsp+30h] [rbp-48h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v64; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v65; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v67; // [rsp+58h] [rbp-20h] BYREF
  union _LARGE_INTEGER v68; // [rsp+60h] [rbp-18h] BYREF
  union _LARGE_INTEGER v69; // [rsp+68h] [rbp-10h] BYREF
  _QWORD *v71; // [rsp+C8h] [rbp+50h] BYREF
  int v72; // [rsp+D0h] [rbp+58h]
  PMDL NewMdl; // [rsp+D8h] [rbp+60h]

  NewMdl = a4;
  v72 = a3;
  v71 = a2;
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
      LOBYTE(v71) = 0;
      v12 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, (bool *)&v71, v15);
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
        CurrentProcess = PsGetCurrentProcess(v20, v19, v21);
        v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
        v61[3] = 270LL;
        v61[4] = 1LL;
        v61[5] = CurrentProcess;
        v61[6] = v11;
        v61[7] = v10;
        WdLogEvent5_WdCriticalError(v61);
      }
    }
    return (unsigned int)v12;
  }
  if ( (unsigned int)v10 <= 1 )
  {
    v23 = Size;
    v62 = Size;
    if ( !*((_QWORD *)v11 + 24) )
    {
      v24 = MmSecureVirtualMemory(v22, Size, 4u);
      *((_QWORD *)v11 + 24) = v24;
      if ( !v24 )
      {
        _InterlockedAdd(&dword_1C0051730, 1u);
        v26 = WdLogNewEntry5_WdLowResource(v25);
        *(_QWORD *)(v26 + 24) = 3450LL;
        WdLogEvent5_WdLowResource(v26);
        return 3221225495LL;
      }
      v22 = VirtualAddress;
    }
  }
  else
  {
    v23 = *((_QWORD *)v11 + 17);
    v62 = v23;
  }
  v28 = a8;
  if ( (_DWORD)v10 == 2 )
  {
    Interval.QuadPart = -10000LL;
    v29 = v23;
    while ( 1 )
    {
      NumberOfBytes = v29;
      v12 = MmRotatePhysicalView(v22, &NumberOfBytes, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( v12 != 1073741849 )
        break;
      v31 = WdLogNewEntry5_WdWarning(v30, v19);
      WdLogEvent5_WdWarning(v31);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventPerformanceWarning, v33, 12);
      }
      v29 -= NumberOfBytes;
      VirtualAddress = (char *)VirtualAddress + NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
      v22 = VirtualAddress;
    }
  }
  else if ( (_DWORD)v10 == 3 )
  {
    v65.QuadPart = -10000LL;
    v34 = a8 & 1;
    v64 = v23;
    while ( 1 )
    {
      v35 = MmRotatePhysicalView(v22, &v64, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
      v12 = v35;
      if ( !v34 || v35 != 1073741849 )
        break;
      v36 = WdLogNewEntry5_WdWarning(v30, v19);
      WdLogEvent5_WdWarning(v36);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, &EventPerformanceWarning, v38, 12);
      v39 = Context;
      v40 = CopyFunction;
      v41 = VirtualAddress;
      while ( MmRotatePhysicalView(v41, &v64, *((PMDL *)v11 + 18), MmToFrameBufferNoCopy, v40, v39) < 0 )
        KeDelayExecutionThread(0, 0, &v65);
      KeDelayExecutionThread(0, 0, &v65);
      v28 = a8;
      v22 = v41;
      LODWORD(v10) = v72;
    }
  }
  else
  {
    if ( (a8 & 2) != 0 )
    {
      v30 = (struct _MDL *)*((_QWORD *)v11 + 18);
      NewMdl = v30;
    }
    else
    {
      v30 = NewMdl;
    }
    v67 = v23;
    if ( g_bInjectRotateFailure )
    {
      v12 = -1073741823;
    }
    else
    {
      v12 = MmRotatePhysicalView(v22, &v67, v30, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
      if ( v12 >= 0 )
      {
LABEL_67:
        if ( (unsigned int)v10 <= 1 )
        {
          v55 = v62;
          v9 = 1;
          v57 = NewMdl;
          *((_QWORD *)v11 + 17) = v62;
          *((_QWORD *)v11 + 18) = v57;
        }
        else
        {
          if ( (v28 & 2) == 0 )
          {
            ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
            v30 = (struct _MDL *)*((_QWORD *)v11 + 24);
            *((_QWORD *)v11 + 18) = 0LL;
            if ( v30 )
            {
              MmUnsecureVirtualMemory(v30);
              *((_QWORD *)v11 + 24) = 0LL;
            }
          }
          v55 = v62;
        }
        *((_BYTE *)v11 + 130) = v9;
        goto LABEL_66;
      }
    }
    if ( (v28 & 2) != 0 )
    {
      ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
      *((_QWORD *)v11 + 18) = 0LL;
    }
  }
  if ( v12 >= 0 )
    goto LABEL_67;
  if ( v12 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
  {
    v42 = *((_QWORD *)v11 + 18);
    if ( v42 )
    {
      v43 = 1LL;
      v44 = *(_QWORD *)(v42 + 48);
      v45 = *(_DWORD *)(v42 + 40) >> 12;
      v46 = v44;
      if ( v45 > 1 )
      {
        v47 = (_QWORD *)(v42 + 56);
        v71 = (_QWORD *)(v42 + 56);
        v48 = v45 - 1;
        do
        {
          v49 = *v47;
          if ( *v47 == v46 + 1 )
          {
            ++v43;
          }
          else
          {
            v50.QuadPart = v44 << 12;
            v68.QuadPart = v43 << 12;
            v44 = v49;
            if ( MmIsIoSpaceActive(v50, v43 << 12) )
            {
              v51 = v68;
              do
              {
                v68.QuadPart = -10000LL;
                KeDelayExecutionThread(0, 0, &v68);
              }
              while ( MmIsIoSpaceActive(v50, v51.QuadPart) );
            }
            v47 = v71;
            v49 = v44;
            v43 = 1LL;
          }
          ++v47;
          v46 = v49;
          v71 = v47;
          --v48;
        }
        while ( v48 );
        v28 = a8;
        v11 = a1;
        LODWORD(v10) = v72;
      }
      v64 = v43 << 12;
      v52.QuadPart = v44 << 12;
      if ( MmIsIoSpaceActive(v52, v43 << 12) )
      {
        v53 = v64;
        do
        {
          v69.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &v69);
        }
        while ( MmIsIoSpaceActive(v52, v53) );
      }
      if ( (v28 & 2) == 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
        *((_QWORD *)v11 + 18) = 0LL;
      }
      *((_BYTE *)v11 + 130) = 0;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v19);
      v54[3] = 270LL;
      v54[4] = 4LL;
      v54[5] = v11;
      v54[6] = -1073741558LL;
      v54[7] = 0LL;
      WdLogEvent5_WdCriticalError(v54);
    }
  }
  v30 = (struct _MDL *)*((_QWORD *)v11 + 24);
  if ( v30 )
  {
    MmUnsecureVirtualMemory(v30);
    *((_QWORD *)v11 + 24) = 0LL;
  }
  v55 = v62;
LABEL_66:
  v56 = (struct _EPROCESS *)PsGetCurrentProcess(v30, v19, v21);
  VIDMM_GLOBAL::RecordRotation(v56, VirtualAddress, v55, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v12);
  return (unsigned int)v12;
}

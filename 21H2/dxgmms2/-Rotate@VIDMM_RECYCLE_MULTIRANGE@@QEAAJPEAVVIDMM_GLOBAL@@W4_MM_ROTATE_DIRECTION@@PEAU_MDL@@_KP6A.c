/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8DA0
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8CD0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008108C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008110C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00A435C (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00A900C (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        ULONG_PTR a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8,
        PVOID VirtualAddress)
{
  char v9; // r14
  __int64 v10; // rdi
  union _LARGE_INTEGER v11; // r15
  NTSTATUS v12; // r12d
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // r10
  SIZE_T v19; // r12
  char v20; // si
  struct _MDL *v21; // rcx
  void *v22; // rcx
  unsigned __int64 v23; // rbx
  struct _EPROCESS *v24; // rax
  HANDLE v26; // rax
  int v27; // ebx
  NTSTATUS v28; // eax
  PMDL v29; // rax
  __int64 v30; // rcx
  ULONG_PTR v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  PVOID v36; // rdi
  NTSTATUS (__stdcall *v37)(PMDL, PMDL, PVOID); // rsi
  PVOID v38; // r12
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // edx
  __int64 v43; // r9
  _QWORD *v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rdx
  PHYSICAL_ADDRESS v47; // rdi
  union _LARGE_INTEGER v48; // r15
  PHYSICAL_ADDRESS v49; // rbx
  union _LARGE_INTEGER v50; // r13
  __int64 CurrentProcess; // rax
  SIZE_T v52; // [rsp+58h] [rbp-41h]
  _QWORD *v53; // [rsp+60h] [rbp-39h]
  union _LARGE_INTEGER v54; // [rsp+68h] [rbp-31h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+80h] [rbp-19h] BYREF
  union _LARGE_INTEGER v57; // [rsp+88h] [rbp-11h] BYREF
  union _LARGE_INTEGER v58; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR v59; // [rsp+F0h] [rbp+57h] BYREF
  int v60; // [rsp+F8h] [rbp+5Fh]
  PMDL NewMdl; // [rsp+100h] [rbp+67h]

  NewMdl = a4;
  v60 = a3;
  v59 = a2;
  v58.QuadPart = (LONGLONG)a1;
  v9 = 0;
  v10 = a3;
  v11.QuadPart = (LONGLONG)a1;
  v12 = 0;
  if ( *((_DWORD *)a1 + 54) == 4 )
    WdLogSingleEntry5(0LL, 270LL, 52LL, 11LL, a3, 0LL);
  for ( i = *(struct VIDMM_RECYCLE_RANGE **)(v11.QuadPart + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(a1, i);
      LOBYTE(v59) = 0;
      v12 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, (bool *)&v59);
      if ( v12 < 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          3LL,
          i,
          (union _LARGE_INTEGER)v11.QuadPart,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11.QuadPart + 80) + 32LL) + 8LL) + 8LL));
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*(_QWORD *)(v11.QuadPart + 80) + 32LL) + 8LL),
          i);
        return (unsigned int)v12;
      }
    }
    if ( i == *(struct VIDMM_RECYCLE_RANGE **)(v11.QuadPart + 72) )
      break;
  }
  VirtualAddress = *(PVOID *)(v11.QuadPart + 48);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)v11.QuadPart) )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
          0LL,
          270LL,
          1LL,
          CurrentProcess,
          (union _LARGE_INTEGER)v11.QuadPart,
          v10);
      }
    }
    return (unsigned int)v12;
  }
  if ( (unsigned int)v10 > 1 )
  {
    v19 = *(_QWORD *)(v11.QuadPart + 136);
    v52 = v19;
    goto LABEL_9;
  }
  v19 = Size;
  v52 = Size;
  if ( *(_QWORD *)(v11.QuadPart + 192) )
  {
LABEL_9:
    v20 = a8;
    if ( (_DWORD)v10 == 2 )
    {
      Interval.QuadPart = -10000LL;
      v31 = v19;
      while ( 1 )
      {
        v59 = v31;
        v12 = MmRotatePhysicalView(v18, &v59, NewMdl, MmToRegularMemory, CopyFunction, Context);
        if ( v12 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventPerformanceWarning, v33, 12);
        v31 -= v59;
        VirtualAddress = (char *)VirtualAddress + v59;
        KeDelayExecutionThread(0, 0, &Interval);
        v18 = VirtualAddress;
      }
    }
    else if ( (_DWORD)v10 == 3 )
    {
      v54.QuadPart = -10000LL;
      v27 = a8 & 1;
      v59 = v19;
      while ( 1 )
      {
        v28 = MmRotatePhysicalView(v18, &v59, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v12 = v28;
        if ( !v27 || v28 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventPerformanceWarning, v35, 12);
        v36 = Context;
        v37 = CopyFunction;
        v38 = VirtualAddress;
        while ( MmRotatePhysicalView(v38, &v59, *(PMDL *)(v11.QuadPart + 144), MmToFrameBufferNoCopy, v37, v36) < 0 )
          KeDelayExecutionThread(0, 0, &v54);
        KeDelayExecutionThread(0, 0, &v54);
        v20 = a8;
        v18 = v38;
        LODWORD(v10) = v60;
      }
    }
    else
    {
      if ( (a8 & 2) != 0 )
      {
        v21 = *(struct _MDL **)(v11.QuadPart + 144);
        NewMdl = v21;
      }
      else
      {
        v21 = NewMdl;
      }
      NumberOfBytes = v19;
      if ( g_bInjectRotateFailure )
      {
        v12 = -1073741823;
      }
      else
      {
        v12 = MmRotatePhysicalView(v18, &NumberOfBytes, v21, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
        if ( v12 >= 0 )
        {
LABEL_15:
          if ( (unsigned int)v10 <= 1 )
          {
            v23 = v52;
            v9 = 1;
            v29 = NewMdl;
            *(_QWORD *)(v11.QuadPart + 136) = v52;
            *(_QWORD *)(v11.QuadPart + 144) = v29;
          }
          else
          {
            if ( (v20 & 2) == 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(v11.QuadPart + 144), 0);
              v22 = *(void **)(v11.QuadPart + 192);
              *(_QWORD *)(v11.QuadPart + 144) = 0LL;
              if ( v22 )
              {
                MmUnsecureVirtualMemory(v22);
                *(_QWORD *)(v11.QuadPart + 192) = 0LL;
              }
            }
            v23 = v52;
          }
          *(_BYTE *)(v11.QuadPart + 130) = v9;
LABEL_21:
          v24 = (struct _EPROCESS *)PsGetCurrentProcess(v22, v14, v16, v17);
          VIDMM_GLOBAL::RecordRotation(v24, VirtualAddress, v23, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v12);
          return (unsigned int)v12;
        }
      }
      if ( (v20 & 2) == 0 )
      {
LABEL_53:
        if ( v12 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
        {
          v39 = *(_QWORD *)(v11.QuadPart + 144);
          if ( v39 )
          {
            v40 = 1LL;
            v41 = *(_QWORD *)(v39 + 48);
            v42 = *(_DWORD *)(v39 + 40) >> 12;
            v43 = v41;
            if ( v42 > 1 )
            {
              v44 = (_QWORD *)(v39 + 56);
              v53 = (_QWORD *)(v39 + 56);
              v45 = v42 - 1;
              do
              {
                v46 = *v44;
                if ( *v44 == v43 + 1 )
                {
                  ++v40;
                }
                else
                {
                  v47.QuadPart = v41 << 12;
                  v57.QuadPart = v40 << 12;
                  v41 = v46;
                  if ( MmIsIoSpaceActive(v47, v40 << 12) )
                  {
                    v48 = v57;
                    do
                    {
                      v57.QuadPart = -10000LL;
                      KeDelayExecutionThread(0, 0, &v57);
                    }
                    while ( MmIsIoSpaceActive(v47, v48.QuadPart) );
                  }
                  v44 = v53;
                  v46 = v41;
                  v40 = 1LL;
                }
                ++v44;
                v43 = v46;
                v53 = v44;
                --v45;
              }
              while ( v45 );
              v20 = a8;
              v11 = v58;
              LODWORD(v10) = v60;
            }
            v54.QuadPart = v40 << 12;
            v49.QuadPart = v41 << 12;
            if ( MmIsIoSpaceActive(v49, v40 << 12) )
            {
              v50 = v54;
              do
              {
                v58.QuadPart = -10000LL;
                KeDelayExecutionThread(0, 0, &v58);
              }
              while ( MmIsIoSpaceActive(v49, v50.QuadPart) );
            }
            if ( (v20 & 2) == 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(v11.QuadPart + 144), 0);
              *(_QWORD *)(v11.QuadPart + 144) = 0LL;
            }
            *(_BYTE *)(v11.QuadPart + 130) = 0;
          }
          else
          {
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
              0LL,
              270LL,
              4LL,
              (union _LARGE_INTEGER)v11.QuadPart,
              -1073741558LL,
              0LL);
          }
        }
        v22 = *(void **)(v11.QuadPart + 192);
        if ( v22 )
        {
          MmUnsecureVirtualMemory(v22);
          *(_QWORD *)(v11.QuadPart + 192) = 0LL;
        }
        v23 = v52;
        goto LABEL_21;
      }
      ExFreePoolWithTag(*(PVOID *)(v11.QuadPart + 144), 0);
      *(_QWORD *)(v11.QuadPart + 144) = 0LL;
    }
    if ( v12 >= 0 )
      goto LABEL_15;
    goto LABEL_53;
  }
  v26 = MmSecureVirtualMemory(v18, Size, 4u);
  *(_QWORD *)(v11.QuadPart + 192) = v26;
  if ( v26 )
  {
    v18 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C006E810, 1u);
  WdLogSingleEntry1(6LL, 3450LL);
  DxgkLogInternalTriageEvent(v30, 262145LL);
  return 3221225495LL;
}

/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CD870
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0025EA0 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027D9C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0027E44 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C006F4F0 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CDC44 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ecx
  int v11; // eax
  _QWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)*((_QWORD *)a2 + 3);
  v6 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3) != v6 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 30LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( (*v4 & 1) != 0 )
  {
    v10 = v4[6];
    if ( (unsigned int)(v10 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v4 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 1, (PSIZE_T)v4 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v10 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v4 + 1));
      ObCloseHandle(*((HANDLE *)v4 + 5), (*((_QWORD *)v4 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v4 + 4));
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *((_QWORD *)v4 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v4 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 156LL);
    v11 = v4[6];
    v12 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v11 == 1 )
    {
      v12[20] -= *((_QWORD *)v4 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) -= *((_QWORD *)v4 + 7);
    }
    else
    {
      v13 = v11 == 2;
      v14 = *((_QWORD *)v4 + 7);
      if ( v13 )
      {
        v12[22] -= v14;
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *((_QWORD *)v4 + 7);
      }
      else
      {
        v12[24] -= v14;
        *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) -= *((_QWORD *)v4 + 7);
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v4[6] - 3) > 3 )
        v15 = *((_QWORD *)v4 + 1);
      else
        v15 = *((_QWORD *)v4 + 4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp_EtwWriteTransfer(
          v15,
          &EventDestroyProcessAllocationDetails,
          *((_QWORD *)v4 + 7),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v4,
          *((_QWORD *)v4 + 7),
          v15);
      if ( bTracingEnabled )
      {
        v16 = (unsigned int)v4[6];
        if ( (unsigned int)(v16 - 3) > 3 )
          v17 = *((_QWORD *)v4 + 1);
        else
          v17 = *((_QWORD *)v4 + 4);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v19) = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v18) = v4[6];
          McTemplateK0pxqqt_EtwWriteTransfer(
            v16,
            &EventDestroyProcessAllocation,
            *((_QWORD *)v4 + 7),
            v17,
            *((_QWORD *)v4 + 7),
            v18,
            v19,
            0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v4);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}

/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F1540
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0032564 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007C570 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F18F0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rbx
  int v7; // ecx
  __int64 v8; // r8
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v10; // eax
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != **((_QWORD **)this + 1) )
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  if ( (*v4 & 1) != 0 )
  {
    v7 = v4[6];
    if ( (unsigned int)(v7 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v4 + 6));
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, _DWORD *, _DWORD *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        v4 + 2,
        v4 + 14,
        0x8000LL);
    }
    else
    {
      if ( (unsigned int)(v7 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v4 + 1));
      ObCloseHandle(*((HANDLE *)v4 + 5), (*((_QWORD *)v4 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v4 + 4));
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *((_QWORD *)v4 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v4 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 156LL);
    v10 = v4[6];
    v11 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v10 == 1 )
    {
      v11[20] -= *((_QWORD *)v4 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) -= *((_QWORD *)v4 + 7);
    }
    else
    {
      v12 = v10 == 2;
      v13 = *((_QWORD *)v4 + 7);
      if ( v12 )
      {
        v11[22] -= v13;
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *((_QWORD *)v4 + 7);
      }
      else
      {
        v11[24] -= v13;
        *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) -= *((_QWORD *)v4 + 7);
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v4[6] - 3) > 3 )
        v14 = *((_QWORD *)v4 + 1);
      else
        v14 = *((_QWORD *)v4 + 4);
      if ( (byte_1C006E941 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v14,
          &EventDestroyProcessAllocationDetails,
          v8,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v4,
          *((_QWORD *)v4 + 7),
          v14);
      if ( bTracingEnabled )
      {
        v15 = (unsigned int)v4[6];
        if ( (unsigned int)(v15 - 3) > 3 )
          v16 = *((_QWORD *)v4 + 1);
        else
          v16 = *((_QWORD *)v4 + 4);
        if ( (byte_1C006E942 & 2) != 0 )
        {
          LODWORD(v18) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v17) = v4[6];
          McTemplateK0pxqqt_EtwWriteTransfer(
            v15,
            &EventDestroyProcessAllocation,
            *((_QWORD *)v4 + 7),
            v16,
            *((_QWORD *)v4 + 7),
            v17,
            v18,
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

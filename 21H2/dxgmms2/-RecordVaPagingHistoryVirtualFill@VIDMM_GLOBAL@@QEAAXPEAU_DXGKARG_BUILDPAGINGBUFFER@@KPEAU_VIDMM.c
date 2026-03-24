/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BEE74
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00752F0 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  _OWORD *v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v8 = operator new[](0x40uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v9 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v9 == dword_1C00503AC )
      {
        *((_DWORD *)this + 10248) = 0;
        v9 = 0LL;
      }
      v10 = *(void **)(*((_QWORD *)this + 5123) + 24 * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *v8 = *(_OWORD *)&a2->Transfer.hAllocation;
      v8[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *((_QWORD *)v8 + 4) = a2->Transfer.Source.SegmentAddress.QuadPart;
      *((_DWORD *)v8 + 10) = a3;
      *((_QWORD *)v8 + 6) = a4;
      if ( a4 )
      {
        v12 = *((_QWORD *)a4 + 5);
        if ( v12 )
          v11 = *(_QWORD *)(v12 + 16);
        else
          v11 = *((_QWORD *)a4 + 6);
      }
      else
      {
        v11 = 0LL;
      }
      *((_QWORD *)v8 + 7) = v11;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 6;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

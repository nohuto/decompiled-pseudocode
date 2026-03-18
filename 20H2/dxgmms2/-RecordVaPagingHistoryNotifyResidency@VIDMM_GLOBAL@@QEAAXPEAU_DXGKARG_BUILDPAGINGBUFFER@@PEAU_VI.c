/*
 * XREFs of ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BF2A8
 * Callers:
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A328 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v6 = operator new[](0x38uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v7 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v7 == dword_1C00513AC )
      {
        *((_DWORD *)this + 10248) = 0;
        v7 = 0LL;
      }
      v8 = *(void **)(*((_QWORD *)this + 5123) + 24 * v7 + 16);
      if ( v8 )
        operator delete(v8);
      *(_OWORD *)v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v9 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      v6[5] = a3;
      *((_OWORD *)v6 + 1) = v9;
      *((_DWORD *)v6 + 8) = *((_DWORD *)a3 + 19) & 0x3F;
      v10 = *((_QWORD *)a3 + 5);
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 16);
      else
        v11 = *((_QWORD *)a3 + 6);
      v6[6] = v11;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 10;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

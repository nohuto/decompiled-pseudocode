/*
 * XREFs of ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00BF390
 * Callers:
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0072A10 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB *a3,
        int a4)
{
  _OWORD *v8; // rdi
  unsigned int v9; // ecx
  void *v10; // rcx

  if ( *((_QWORD *)this + 5123) )
  {
    v8 = operator new[](0x40uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v9 = *((_DWORD *)this + 10248);
      if ( v9 == dword_1C00513AC )
      {
        *((_DWORD *)this + 10248) = 0;
        v9 = 0;
      }
      v10 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *v8 = a3->RootPageTableAddress;
      v8[1] = *(_OWORD *)&a3->hProcess;
      *((_QWORD *)v8 + 4) = a3->EndVirtualAddress;
      *((_DWORD *)v8 + 14) = a4;
      *((_QWORD *)v8 + 5) = *(_QWORD *)a2;
      *((_QWORD *)v8 + 6) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 5;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

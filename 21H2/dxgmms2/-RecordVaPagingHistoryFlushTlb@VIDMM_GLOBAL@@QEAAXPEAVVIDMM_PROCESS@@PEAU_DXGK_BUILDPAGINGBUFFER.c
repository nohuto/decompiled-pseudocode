/*
 * XREFs of ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00E3330
 * Callers:
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C008AB30 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB *a3,
        int a4)
{
  __int64 v8; // rdi
  unsigned int v9; // ecx
  void *v10; // rcx

  if ( *((_QWORD *)this + 5123) )
  {
    v8 = operator new(64LL, 0x32356956u, 256LL);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v9 = *((_DWORD *)this + 10248);
      if ( v9 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v9 = 0;
      }
      v10 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *(D3DGPU_PHYSICAL_ADDRESS *)v8 = a3->RootPageTableAddress;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)&a3->hProcess;
      *(_QWORD *)(v8 + 32) = a3->EndVirtualAddress;
      *(_DWORD *)(v8 + 56) = a4;
      *(_QWORD *)(v8 + 40) = *(_QWORD *)a2;
      *(_QWORD *)(v8 + 48) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 5;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

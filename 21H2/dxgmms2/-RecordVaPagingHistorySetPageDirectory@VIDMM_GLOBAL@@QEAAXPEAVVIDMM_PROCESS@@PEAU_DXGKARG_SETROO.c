/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00A71B8
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0096600 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00B843C (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00B8EE8 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00F5C88 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGKARG_SETROOTPAGETABLE *a3,
        void *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v8 = operator new(56LL, 0x32356956u, 256LL);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v9 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v9 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v9 = 0LL;
      }
      v10 = *(void **)(*((_QWORD *)this + 5123) + 24 * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *(_OWORD *)v8 = *(_OWORD *)&a3->hContext;
      v11 = *(_OWORD *)&a3->Address.SegmentOffset;
      *(_QWORD *)(v8 + 48) = a4;
      *(_OWORD *)(v8 + 16) = v11;
      if ( a2 )
        v12 = *(_QWORD *)a2;
      else
        v12 = 0LL;
      *(_QWORD *)(v8 + 32) = v12;
      if ( a2 )
        v13 = *((_QWORD *)a2 + 4);
      else
        v13 = 0LL;
      *(_QWORD *)(v8 + 40) = v13;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 9;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

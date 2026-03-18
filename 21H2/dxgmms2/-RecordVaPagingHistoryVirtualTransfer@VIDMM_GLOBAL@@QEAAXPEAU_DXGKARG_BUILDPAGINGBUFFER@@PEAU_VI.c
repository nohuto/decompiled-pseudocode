/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E41E8
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v6 = operator new(88LL, 0x32356956u, 256LL);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v7 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v7 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v7 = 0LL;
      }
      v8 = *(void **)(*((_QWORD *)this + 5123) + 24 * v7 + 16);
      if ( v8 )
        operator delete(v8);
      *(_OWORD *)v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_OWORD *)(v6 + 32) = *(_OWORD *)&a2->Reserved.Reserved[8];
      v9 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *(_QWORD *)(v6 + 72) = a3;
      *(_OWORD *)(v6 + 48) = v9;
      if ( a3 )
        v10 = *(_QWORD *)(*((_QWORD *)a3 + 66) + 40LL);
      else
        v10 = 0LL;
      *(_QWORD *)(v6 + 80) = v10;
      *(_DWORD *)(v6 + 64) = *((_DWORD *)a3 + 17) & 0x3F;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 7;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

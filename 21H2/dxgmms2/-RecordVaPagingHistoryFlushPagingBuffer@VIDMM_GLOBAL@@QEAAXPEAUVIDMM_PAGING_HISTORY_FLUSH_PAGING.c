/*
 * XREFs of ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00E31AC
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *a2,
        int a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ecx
  void *v8; // rcx

  if ( *((_QWORD *)this + 5123) )
  {
    v6 = operator new(96LL, 0x32356956u, 256LL);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v7 = *((_DWORD *)this + 10248);
      if ( v7 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v7 = 0;
      }
      v8 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v7 + 16);
      if ( v8 )
        operator delete(v8);
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v6 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v6 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v6 + 80) = *((_OWORD *)a2 + 5);
      *(_DWORD *)(v6 + 88) = a3;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 8;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

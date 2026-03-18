/*
 * XREFs of ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00BF20C
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *a2,
        int a3)
{
  _OWORD *v6; // rdi
  unsigned int v7; // ecx
  void *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1

  if ( *((_QWORD *)this + 5123) )
  {
    v6 = operator new[](0x60uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v7 = *((_DWORD *)this + 10248);
      if ( v7 == dword_1C00513AC )
      {
        *((_DWORD *)this + 10248) = 0;
        v7 = 0;
      }
      v8 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v7 + 16);
      if ( v8 )
        operator delete(v8);
      v9 = *((_OWORD *)a2 + 1);
      *v6 = *(_OWORD *)a2;
      v10 = *((_OWORD *)a2 + 2);
      v6[1] = v9;
      v11 = *((_OWORD *)a2 + 3);
      v6[2] = v10;
      v12 = *((_OWORD *)a2 + 4);
      v6[3] = v11;
      v13 = *((_OWORD *)a2 + 5);
      v6[4] = v12;
      v6[5] = v13;
      *((_DWORD *)v6 + 22) = a3;
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 8;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

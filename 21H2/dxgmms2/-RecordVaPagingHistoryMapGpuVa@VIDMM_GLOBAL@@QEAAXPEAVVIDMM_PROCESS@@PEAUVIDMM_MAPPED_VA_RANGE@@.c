/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00E3640
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0088C60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v9 = operator new(80LL, 0x32356956u, 256LL);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v10 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v10 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v10 = 0LL;
      }
      v11 = *(void **)(*((_QWORD *)this + 5123) + 24 * v10 + 16);
      if ( v11 )
        operator delete(v11);
      *(_QWORD *)v9 = *(_QWORD *)a2;
      *(_QWORD *)(v9 + 8) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(v9 + 24) = a5;
      *(_QWORD *)(v9 + 16) = a4;
      *(_QWORD *)(v9 + 32) = *((_QWORD *)a3 + 12);
      *(_QWORD *)(v9 + 40) = *((_QWORD *)a3 + 13);
      *(_QWORD *)(v9 + 48) = *((_QWORD *)a3 + 7);
      *(_DWORD *)(v9 + 56) = (int)(*((_DWORD *)a3 + 16) << 28) >> 28;
      v12 = *((_QWORD *)a3 + 9);
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 64) = v12;
      if ( (*((_DWORD *)a3 + 16) & 0xF) == 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL);
        if ( v13 )
          *(_QWORD *)(v9 + 72) = *(_QWORD *)(v13 + 32);
      }
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 14;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

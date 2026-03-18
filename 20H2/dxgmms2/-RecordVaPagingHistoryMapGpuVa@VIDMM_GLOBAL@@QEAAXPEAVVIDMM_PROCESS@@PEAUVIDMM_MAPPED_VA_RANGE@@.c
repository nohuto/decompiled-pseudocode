/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00BF0F0
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0070BC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v9 = operator new[](0x50uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
      *((_QWORD *)this + 5126) = KeGetCurrentThread();
      v10 = *((unsigned int *)this + 10248);
      if ( (_DWORD)v10 == dword_1C00513AC )
      {
        *((_DWORD *)this + 10248) = 0;
        v10 = 0LL;
      }
      v11 = *(void **)(*((_QWORD *)this + 5123) + 24 * v10 + 16);
      if ( v11 )
        operator delete(v11);
      *v9 = *(_QWORD *)a2;
      v9[1] = *((_QWORD *)a2 + 4);
      v9[3] = a5;
      v9[2] = a4;
      v9[4] = *((_QWORD *)a3 + 12);
      v9[5] = *((_QWORD *)a3 + 13);
      v9[6] = *((_QWORD *)a3 + 7);
      *((_DWORD *)v9 + 14) = (int)(*((_DWORD *)a3 + 16) << 28) >> 28;
      v12 = *((_QWORD *)a3 + 9);
      v9[9] = 0LL;
      v9[8] = v12;
      if ( (*((_DWORD *)a3 + 16) & 0xF) == 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL);
        if ( v13 )
          v9[9] = *(_QWORD *)(v13 + 32);
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

/*
 * XREFs of ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C00BF52C
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00652A8 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        unsigned __int64 a5)
{
  _BYTE *v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax

  if ( *((_QWORD *)this + 5123) )
  {
    v9 = operator new[](0x30uLL, 0x32356956u, PagedPool);
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
      v9[32] = a4;
      *((_QWORD *)v9 + 1) = a2;
      *((_QWORD *)v9 + 2) = a3;
      *((_QWORD *)v9 + 5) = a5 & -(__int64)(a4 != 0);
      v12 = *((_QWORD *)a3 + 2);
      if ( v12 )
        v12 = *(_QWORD *)(v12 + 32);
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 3) = v12;
      if ( a2 )
        *(_QWORD *)v9 = **(_QWORD **)(*((_QWORD *)a2 + 17) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 11;
      *((_QWORD *)this + 5126) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}

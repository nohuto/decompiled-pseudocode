/*
 * XREFs of ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00E3DF0
 * Callers:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE *a3,
        struct VIDMM_ALLOC *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5,
        unsigned int a6)
{
  char *v10; // r14
  UINT NumPageTableEntries; // edi
  __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned int v14; // eax
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  unsigned int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  __int128 v24; // xmm0

  if ( *((_QWORD *)this + 5123) )
  {
    v10 = (char *)this + 41000;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    NumPageTableEntries = 1;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    if ( (*(_DWORD *)&a3->Flags & 1) == 0 )
      NumPageTableEntries = a3->NumPageTableEntries;
    v12 = 16LL * (NumPageTableEntries - 1) + 168;
    if ( a3->pPageTableEntries64KB )
      v12 += 16LL * NumPageTableEntries;
    v13 = operator new[](v12, 0x32356956u, 256LL);
    if ( v13 )
    {
      v14 = *((_DWORD *)this + 10248);
      if ( v14 == dword_1C006E41C )
      {
        *((_DWORD *)this + 10248) = 0;
        v14 = 0;
      }
      v15 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v14 + 16);
      if ( v15 )
        operator delete(v15);
      *(_OWORD *)v13 = *(_OWORD *)&a3->PageTableLevel;
      *(DXGK_PAGETABLEUPDATEADDRESS *)(v13 + 16) = a3->PageTableAddress;
      *(_OWORD *)(v13 + 32) = *(_OWORD *)&a3->pPageTableEntries;
      *(_OWORD *)(v13 + 48) = *(_OWORD *)&a3->Reserved0;
      *(_OWORD *)(v13 + 64) = *(_OWORD *)&a3->AllocationOffsetInBytes;
      *(_OWORD *)(v13 + 80) = *(_OWORD *)&a3->UpdateMode;
      *(_QWORD *)(v13 + 96) = a3->FirstPteVirtualAddress;
      *(_DWORD *)(v13 + 144) = a6;
      *(_QWORD *)(v13 + 120) = a4;
      *(_QWORD *)(v13 + 128) = a5;
      *(_QWORD *)(v13 + 104) = *(_QWORD *)a2;
      *(_QWORD *)(v13 + 112) = *((_QWORD *)a2 + 4);
      if ( a4 && (v16 = *((_QWORD *)a4 + 2)) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 32);
      }
      else if ( a5 )
      {
        v17 = *(_QWORD *)(*((_QWORD *)a5 + 66) + 40LL);
      }
      else
      {
        v17 = 0LL;
      }
      *(_QWORD *)(v13 + 136) = v17;
      if ( NumPageTableEntries )
      {
        v18 = 0LL;
        v19 = NumPageTableEntries;
        do
        {
          v20 = *(_OWORD *)&a3->pPageTableEntries[v18++].0;
          *(_OWORD *)(v18 * 16 + v13 + 136) = v20;
          --v19;
        }
        while ( v19 );
      }
      if ( a3->pPageTableEntries64KB )
      {
        v21 = 0;
        if ( NumPageTableEntries )
        {
          v22 = 0LL;
          do
          {
            v23 = 2LL * (v21 + NumPageTableEntries);
            ++v21;
            v24 = *(_OWORD *)&a3->pPageTableEntries64KB[v22++].0;
            *(_OWORD *)(v13 + 8 * v23 + 152) = v24;
          }
          while ( v21 < NumPageTableEntries );
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v13;
      *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 4;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}

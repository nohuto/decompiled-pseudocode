/*
 * XREFs of ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C00761FC
 * Callers:
 *     ?VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C0001FA0 (-VidMmEvict@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00B74F8 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024A40 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0076350 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::Evict(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct _VIDMM_MULTI_ALLOC **v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r8
  struct _VIDMM_MULTI_ALLOC **i; // r15
  struct _VIDMM_MULTI_ALLOC *v11; // rbx
  __int64 v12; // rbp
  struct _KTHREAD **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  char v17; // r9
  __int64 v18; // [rsp+20h] [rbp-78h]
  _QWORD v19[10]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a3;
  v7 = a4;
  VIDMM_DEVICE::UnreferenceAllocationList(a2, a3, a4, a6);
  for ( i = &v6[v7]; v6 != i; ++v6 )
  {
    v11 = *v6;
    v12 = **(_QWORD **)*v6;
    if ( (a5 & 2) != 0 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 312));
      v13 = *(struct _KTHREAD ***)(v12 + 312);
      *(_BYTE *)(v12 + 90) = 1;
      DXGFASTMUTEX::Release(v13, v14);
    }
    v15 = *((_BYTE *)v11 + 25) & 1;
    if ( !((unsigned int)v15 | *((_DWORD *)v11 + 38)) && !*((_DWORD *)v11 + 39) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 41);
      memset(v19, 0, sizeof(v19));
      v16 = (_QWORD *)*((_QWORD *)v11 + 1);
      LODWORD(v19[0]) = 207;
      v19[2] = v11;
      LODWORD(v19[4]) = a5;
      v17 = dword_1C0051488 || (*(_DWORD *)(v16[1] + 112LL) & 1) != 0;
      VIDMM_GLOBAL::QueueDeferredCommand(
        this,
        (struct VIDMM_PAGING_QUEUE *)(v16[10] + 176LL * (*(_DWORD *)(v12 + 76) & 0x3F)),
        (struct _VIDMM_DEFERRED_COMMAND *)v19,
        v17,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v18) = *((_DWORD *)v11 + 38);
      McTemplateK0pq_EtwWriteTransfer(v15, &EventVidMmEvict, v9, v11, v18);
    }
  }
}

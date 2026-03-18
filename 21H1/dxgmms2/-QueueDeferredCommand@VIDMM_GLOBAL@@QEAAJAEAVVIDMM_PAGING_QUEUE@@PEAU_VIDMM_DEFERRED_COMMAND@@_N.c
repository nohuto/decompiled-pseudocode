/*
 * XREFs of ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00652A8 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00659D0 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0069420 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC20 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C00761FC (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF40 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089BB8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C00B0020 (-DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z.c)
 *     ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00B0BDC (-EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOB.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0ED8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F88 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B3420 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00B4C74 (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B5DA4 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 *     ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00B8C00 (-VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0065D04 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ @ 0x1C0066038 (-GetNewPacket@VIDMM_PAGING_QUEUE@@QEAAPEAUVIDMM_PAGING_QUEUE_PACKET@@XZ.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueueDeferredCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_DEFERRED_COMMAND *a3,
        char a4,
        unsigned __int64 *a5)
{
  struct _VIDSCH_SYNC_OBJECT *v5; // rax
  __int64 v8; // rbx
  struct VIDMM_PAGING_QUEUE **v11; // rbx
  struct VIDMM_PAGING_QUEUE *v12; // r15
  struct VIDMM_PAGING_QUEUE **NewPacket; // rdi
  struct VIDMM_PAGING_QUEUE *v14; // rax
  __int64 v15; // rcx
  struct _VIDSCH_SYNC_OBJECT *i; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v20; // [rsp+38h] [rbp-28h]
  unsigned __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v22; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v24; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+38h] BYREF

  v5 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 11);
  v25 = 0;
  v8 = *((_QWORD *)a2 + 10);
  v20 = v5;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 144, 0LL);
  *(_QWORD *)(v8 + 152) = KeGetCurrentThread();
  v11 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 16);
  v12 = (struct VIDMM_PAGING_QUEUE *)*((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = (char *)v12 + 1;
  NewPacket = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 2);
  if ( NewPacket[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16)
    || (v14 = *NewPacket, *((struct VIDMM_PAGING_QUEUE ***)*NewPacket + 1) != NewPacket) )
  {
    __fastfail(3u);
  }
  *v11 = v14;
  *((_QWORD *)v14 + 1) = v11;
  v15 = *((_QWORD *)a2 + 10) + 144LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( NewPacket != v11
    || (NewPacket = (struct VIDMM_PAGING_QUEUE **)operator new[](0xA0uLL, 0x38346956u, PagedPool)) != 0LL )
  {
    memset(NewPacket, 0, 0xA0uLL);
    NewPacket[5] = v12;
  }
  if ( !*((_QWORD *)a3 + 1) )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL);
  for ( i = v20; !NewPacket; NewPacket = (struct VIDMM_PAGING_QUEUE **)VIDMM_PAGING_QUEUE::GetNewPacket(a2) )
  {
    v21 = *((_QWORD *)a2 + 12);
    v22 = v20;
    VIDMM_GLOBAL::WaitForFences(this, &v22, &v21, 1u, 0LL);
  }
  *((_WORD *)NewPacket + 12) = 257;
  *((_OWORD *)NewPacket + 3) = *(_OWORD *)a3;
  *((_OWORD *)NewPacket + 4) = *((_OWORD *)a3 + 1);
  *((_OWORD *)NewPacket + 5) = *((_OWORD *)a3 + 2);
  *((_OWORD *)NewPacket + 6) = *((_OWORD *)a3 + 3);
  *((_OWORD *)NewPacket + 7) = *((_OWORD *)a3 + 4);
  if ( a4 )
    NewPacket[9] = (struct VIDMM_PAGING_QUEUE *)&v25;
  if ( *(_DWORD *)a3 == 206 )
  {
    v18 = MEMORY[0xFFFFF78000000320];
    NewPacket[17] = (struct VIDMM_PAGING_QUEUE *)(v18 * KeQueryTimeIncrement());
  }
  v19 = 0LL;
  VIDMM_PAGING_QUEUE::AppendReadyPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)NewPacket, &v19);
  if ( a4 )
  {
    v23 = v19;
    v24 = i;
    VIDMM_GLOBAL::WaitForFences(this, &v24, &v23, 1u, 0LL);
  }
  else if ( a5 )
  {
    *a5 = v19;
    return 259LL;
  }
  return v25;
}

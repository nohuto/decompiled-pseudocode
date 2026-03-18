/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C0022790 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0064E30 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0069B80 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC00 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF20 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE2C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F68 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00B74D8 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchSubmitWaitFromCpu @ 0x1C00013E0 (VidSchSubmitWaitFromCpu.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DIGBGJFG@@@QEAAPEA_KI@Z @ 0x1C0001638 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DIGBGJFG@@@QEAAPEA_KI@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0001850 (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        unsigned __int64 *a3,
        unsigned int a4,
        const unsigned __int64 *a5)
{
  _BYTE *PoolWithTag; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 *v8; // r15
  struct _VIDSCH_SYNC_OBJECT **v9; // r13
  unsigned int v10; // edi
  unsigned __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rdi
  __int64 v17; // r8
  _BYTE *v18; // r11
  const unsigned __int64 *v19; // rdx
  signed __int64 v20; // r9
  signed __int64 v21; // r10
  unsigned __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  int v28; // eax
  char v29; // di
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // [rsp+50h] [rbp-91h]
  PRKEVENT Event; // [rsp+58h] [rbp-89h] BYREF
  _BYTE *v36; // [rsp+60h] [rbp-81h]
  _BYTE v37[16]; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-69h]
  VIDMM_GLOBAL *v39; // [rsp+80h] [rbp-61h]
  const unsigned __int64 *v40; // [rsp+88h] [rbp-59h]
  struct _VIDSCH_SYNC_OBJECT **v41; // [rsp+90h] [rbp-51h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp-49h] BYREF
  _QWORD v43[4]; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-21h]
  PVOID P; // [rsp+D0h] [rbp-11h] BYREF
  char v46; // [rsp+D8h] [rbp-9h] BYREF
  int v47; // [rsp+E8h] [rbp+7h]

  Event = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v6 = a4;
  v47 = 0;
  LODWORD(v7) = a4;
  v36 = 0LL;
  v8 = (__int64 *)a3;
  v38 = 0;
  v9 = a2;
  v40 = a3;
  v41 = a2;
  v39 = this;
  v33 = 1;
  while ( 1 )
  {
    if ( !a5 || *((_BYTE *)this + 4624) )
      goto LABEL_4;
    v13 = v6;
    v16 = (char *)NonPagedPoolZeroedArray<unsigned __int64,2,945908054>::AllocateElements(&P, v6);
    if ( v6 > 2 )
    {
      v14 = 0xFFFFFFFFFFFFFFFFuLL % v6;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      {
        PoolWithTag = v36;
        v18 = 0LL;
        goto LABEL_22;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v6, 0x38616956u);
    }
    else
    {
      PoolWithTag = v37;
    }
    v36 = PoolWithTag;
    v38 = v6;
    if ( PoolWithTag && v6 )
    {
      memset(PoolWithTag, 0, 8LL * v6);
      PoolWithTag = v36;
    }
    v18 = PoolWithTag;
LABEL_22:
    if ( v16 && v18 )
    {
      v7 = 0LL;
      if ( v6 )
      {
        v19 = a5;
        v20 = (char *)v40 - (char *)a5;
        v21 = (char *)v41 - (char *)a5;
        do
        {
          v22 = *(const unsigned __int64 *)((char *)v19 + v20);
          if ( *v19 <= v22 || *v19 - v22 < 0x7FFFFFFF )
          {
            v30 = 8 * v7;
            v7 = (unsigned int)(v7 + 1);
            *(_QWORD *)&v16[v30] = v22;
            *(_QWORD *)&v18[v30] = *(const unsigned __int64 *)((char *)v19 + v21);
          }
          ++v19;
          --v13;
        }
        while ( v13 );
        PoolWithTag = v36;
      }
      v8 = (__int64 *)P;
      v9 = (struct _VIDSCH_SYNC_OBJECT **)PoolWithTag;
LABEL_4:
      v10 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_10;
      v11 = (unsigned __int64 *)v8;
      while ( 1 )
      {
        v12 = *(unsigned __int64 *)((char *)v11 + (char *)v9 - (char *)v8);
        if ( v12 )
        {
          if ( !VidSchIsMonitoredFenceSignaled(v12, *v11) )
            break;
        }
        ++v10;
        ++v11;
        if ( v10 >= (unsigned int)v7 )
          goto LABEL_9;
      }
      v43[0] = 48LL;
      v43[3] = 512LL;
      v43[1] = 0LL;
      v43[2] = 0LL;
      v44 = 0LL;
      v23 = ObCreateObject(0LL, ExEventObjectType, v43, 0LL, 0LL, 24, 0, 0, &Event);
      v27 = v23;
      if ( v23 >= 0 )
      {
        KeInitializeEvent(Event, SynchronizationEvent, 0);
        ObfReferenceObject(Event);
        v28 = VidSchSubmitWaitFromCpu(
                v7,
                (__int64)v9,
                v8,
                (__int64)Event,
                0,
                1,
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 2) + 624LL) + 248LL),
                0LL);
        v27 = v28;
        if ( v28 >= 0 )
        {
          v29 = 0;
          v33 = 0;
          LODWORD(v27) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
LABEL_34:
          v6 = a4;
          goto LABEL_35;
        }
        ObfDereferenceObject(Event);
      }
      v32 = WdLogNewEntry5_WdAssertion(v25, v24, v26);
      *(_QWORD *)(v32 + 24) = v27;
      WdLogEvent5_WdAssertion(v32);
      v29 = v33;
      goto LABEL_34;
    }
    LODWORD(v27) = -1073741801;
    v31 = WdLogNewEntry5_WdAssertion(v15, v14, v17);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdAssertion(v31);
    v29 = v33;
LABEL_35:
    if ( Event )
      ObfDereferenceObject(Event);
    if ( (int)v27 >= 0 || !v29 )
      break;
    Interval.QuadPart = 50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    PoolWithTag = v36;
    this = v39;
  }
LABEL_9:
  PoolWithTag = v36;
LABEL_10:
  if ( PoolWithTag != v37 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v36 = 0LL;
  v38 = 0;
  if ( P != &v46 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}

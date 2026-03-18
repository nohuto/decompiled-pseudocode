/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C002D0F0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008890C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0093210 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D70C4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00DBE30 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0002EDC (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C0016C00 (VidSchSubmitWaitFromCpu.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        const unsigned __int64 *a5)
{
  const unsigned __int64 *v5; // r15
  struct _VIDSCH_SYNC_OBJECT **v6; // rdi
  unsigned __int64 v7; // rbx
  const unsigned __int64 *v8; // r12
  unsigned int v9; // eax
  struct _VIDSCH_SYNC_OBJECT **v10; // r13
  unsigned __int64 v11; // r14
  char *v12; // rsi
  char *v13; // r11
  signed __int64 v14; // r9
  const unsigned __int64 *v15; // rdx
  signed __int64 v16; // r10
  unsigned int v17; // r15d
  unsigned __int64 v18; // r8
  unsigned int v19; // edi
  unsigned __int64 *v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  char v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  char v34; // [rsp+50h] [rbp-B0h]
  unsigned int v35; // [rsp+54h] [rbp-ACh]
  PRKEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v37; // [rsp+60h] [rbp-A0h]
  VIDMM_GLOBAL *v38; // [rsp+68h] [rbp-98h]
  PVOID Pool2; // [rsp+70h] [rbp-90h]
  _BYTE v40[16]; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+88h] [rbp-78h]
  const unsigned __int64 *v42; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v44[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+D0h] [rbp-30h]
  _BYTE v47[16]; // [rsp+D8h] [rbp-28h] BYREF
  int v48; // [rsp+E8h] [rbp-18h]

  v5 = a5;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v42 = a3;
  Event = 0LL;
  v9 = a4;
  v37 = a2;
  v10 = a2;
  v38 = this;
  v35 = a4;
  v34 = 1;
  while ( 2 )
  {
    P = 0LL;
    v48 = 0;
    Pool2 = 0LL;
    v41 = 0;
    if ( !v5 || *((_BYTE *)this + 4640) )
      goto LABEL_20;
    if ( (unsigned int)v7 > 2 )
    {
      v11 = v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      {
        v12 = 0LL;
        goto LABEL_48;
      }
      P = (PVOID)ExAllocatePool2(64LL, 8 * v7, 945908054LL);
    }
    else
    {
      P = v47;
      if ( (_DWORD)v7 )
        memset(v47, 0, 8 * v7);
    }
    v11 = v7;
    v48 = v7;
    v12 = (char *)P;
    if ( (unsigned int)v7 <= 2 )
    {
      Pool2 = v40;
      if ( (_DWORD)v7 )
        memset(v40, 0, 8 * v7);
      goto LABEL_10;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 >= 8 )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 8 * v7, 945908054LL);
LABEL_10:
      v13 = (char *)Pool2;
      v6 = v37;
      v41 = v7;
      goto LABEL_11;
    }
    v6 = v37;
LABEL_48:
    v13 = 0LL;
LABEL_11:
    if ( !v12 || !v13 )
    {
      LODWORD(v23) = -1073741801;
      WdLogSingleEntry1(1LL, -1073741801LL);
      HIDWORD(v33) = 0;
      HIDWORD(v32) = 0;
      HIDWORD(v31) = 0;
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      v25 = v34;
      goto LABEL_30;
    }
    v9 = 0;
    v35 = 0;
    if ( (_DWORD)v7 )
    {
      v14 = (char *)v42 - (char *)v5;
      v15 = v5;
      v16 = (char *)v6 - (char *)v5;
      v17 = 0;
      do
      {
        v18 = *(const unsigned __int64 *)((char *)v15 + v14);
        if ( *v15 <= v18 || *v15 - v18 < 0x7FFFFFFF )
        {
          v26 = v17++;
          v27 = 8 * v26;
          *(_QWORD *)&v12[v27] = v18;
          *(_QWORD *)&v13[v27] = *(const unsigned __int64 *)((char *)v15 + v16);
        }
        ++v15;
        --v11;
      }
      while ( v11 );
      v35 = v17;
      v9 = v17;
      v5 = a5;
    }
    v8 = (const unsigned __int64 *)P;
    v10 = (struct _VIDSCH_SYNC_OBJECT **)Pool2;
LABEL_20:
    v19 = 0;
    if ( !v9 )
      break;
    v20 = (unsigned __int64 *)v8;
    while ( 1 )
    {
      v21 = *(unsigned __int64 *)((char *)v20 + (char *)v10 - (char *)v8);
      if ( v21 )
        break;
LABEL_39:
      ++v19;
      ++v20;
      if ( v19 >= v9 )
        goto LABEL_21;
    }
    if ( VidSchIsMonitoredFenceSignaled(v21, *v20) )
    {
      v9 = v35;
      goto LABEL_39;
    }
    LODWORD(v33) = 0;
    LODWORD(v32) = 0;
    v44[0] = 48LL;
    v44[3] = 512LL;
    v44[1] = 0LL;
    v44[2] = 0LL;
    v45 = 0LL;
    LODWORD(v31) = 24;
    v22 = ObCreateObject(0LL, ExEventObjectType, v44, 0LL, 0LL, v31, v32, v33, &Event);
    LODWORD(v23) = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(1LL, v22);
      HIDWORD(v33) = 0;
      HIDWORD(v32) = 0;
      HIDWORD(v31) = 0;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      v25 = v34;
    }
    else
    {
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      ObfReferenceObject(Event);
      v24 = VidSchSubmitWaitFromCpu(
              v35,
              (__int64)v10,
              (__int64)v8,
              (__int64)Event,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 632LL) + 256LL),
              0LL);
      v23 = v24;
      if ( v24 < 0 )
      {
        ObfDereferenceObject(Event);
        WdLogSingleEntry1(1LL, v23);
        HIDWORD(v33) = 0;
        HIDWORD(v32) = 0;
        HIDWORD(v31) = 0;
        DxgkLogInternalTriageEvent(v30, 0x40000LL);
        v25 = v34;
      }
      else
      {
        v25 = 0;
        v34 = 0;
        LODWORD(v23) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
      }
    }
LABEL_30:
    if ( Event )
    {
      ObfDereferenceObject(Event);
      Event = 0LL;
    }
    if ( (int)v23 < 0 && v25 )
    {
      Interval.QuadPart = 50000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( Pool2 != v40 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v6 = v37;
      Pool2 = 0LL;
      v9 = v35;
      v41 = 0;
      if ( P != v47 && P )
      {
        ExFreePoolWithTag(P, 0);
        v9 = v35;
      }
      this = v38;
      continue;
    }
    break;
  }
LABEL_21:
  if ( Pool2 != v40 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v41 = 0;
  if ( P != v47 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}

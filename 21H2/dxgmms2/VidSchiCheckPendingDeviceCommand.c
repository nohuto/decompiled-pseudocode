/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C000ACE0
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0004180 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004C98 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005790 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00095B0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C000A060 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CC70 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013370 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C00165FC (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037900 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00382D4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0038384 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C003950C (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0005660 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0015190 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00234E8 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002D2F0 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD **v6; // rbx
  _QWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  unsigned int v12; // r11d
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // r9
  _QWORD *v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // r13
  _QWORD *v21; // r14
  _QWORD *v22; // rcx
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // r14
  __int64 **v27; // rcx
  __int64 **v28; // rcx
  _QWORD *v29; // rax
  void **v30; // rcx
  bool v31; // zf
  _QWORD *v32; // r9
  char *v33; // rcx
  char *v34; // rcx
  _QWORD *v35; // rsi
  _QWORD *v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // r14
  __int64 v40; // r10
  _QWORD *v41; // r10
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 **v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1[4];
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 648LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1744), &LockHandle);
  v6 = (_QWORD **)(v1 + 1776);
  v7 = *v6;
  if ( *v6 != v6 )
  {
    do
    {
      v35 = (_QWORD *)*v7;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, v7 - 27, v5, v7) )
      {
        v37 = *v36;
        if ( *(_QWORD **)(*v36 + 8LL) != v36 )
          goto LABEL_54;
        v38 = (_QWORD *)v36[1];
        if ( (_QWORD *)*v38 != v36 )
          goto LABEL_54;
        *v38 = v37;
        *(_QWORD *)(v37 + 8) = v38;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v36 - 26), (struct VIDMM_ALLOC *)(v36 - 27));
      }
      v7 = v35;
    }
    while ( v35 != v6 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v10 = (_QWORD *)a1[201];
  while ( v10 != a1 + 201 )
  {
    v11 = v10;
    v12 = 0;
    v10 = (_QWORD *)*v10;
    v13 = v11[2];
    if ( v13 > a1[200] )
    {
      v14 = *((_DWORD *)v11 + 16);
      v15 = 0;
      if ( v14 )
      {
        v16 = v11[3];
        do
        {
          v17 = *(_QWORD *)(v16 + 16LL * v15);
          if ( v17 )
          {
            if ( *(_QWORD *)(v17 + 160) < *(_QWORD *)(v16 + 16LL * v15 + 8) )
              return;
          }
        }
        while ( ++v15 < v14 );
      }
      v8 = *((unsigned int *)v11 + 32);
      v9 = 0LL;
      if ( (_DWORD)v8 )
      {
        v39 = v11[9];
        do
        {
          v40 = *(_QWORD *)(v39 + 24LL * (unsigned int)v9);
          if ( v40 )
          {
            v41 = (_QWORD *)(v40 + 64);
            v42 = (_QWORD *)(v39 + 8 * (3LL * (unsigned int)v9 + 1));
            do
            {
              if ( *v41 < *v42 )
                return;
              ++v12;
              v41 += 3;
              ++v42;
            }
            while ( v12 < 2 );
            v12 = 0;
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < (unsigned int)v8 );
      }
      a1[200] = v13;
    }
    v18 = (_QWORD *)v11[19];
    if ( v18 != v11 + 19 )
    {
      while ( 1 )
      {
        v19 = *v18;
        v20 = v18 - 29;
        v21 = v18;
        v18 = (_QWORD *)v19;
        if ( *(_QWORD **)(v19 + 8) != v21 )
          break;
        v22 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v22 != v21 )
          break;
        *v22 = v19;
        *(_QWORD *)(v19 + 8) = v22;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v20);
        *v21 = 0LL;
        v20[30] = 0LL;
        if ( v18 == v11 + 19 )
          goto LABEL_16;
      }
LABEL_54:
      __fastfail(3u);
    }
LABEL_16:
    v23 = (__int64 *)v11[17];
    while ( v23 != v11 + 17 )
    {
      v24 = *v23;
      v25 = v23 - 27;
      v26 = v23;
      v23 = (__int64 *)v24;
      if ( *(__int64 **)(v24 + 8) != v26 )
        goto LABEL_54;
      v27 = (__int64 **)v26[1];
      if ( *v27 != v26 )
        goto LABEL_54;
      *v27 = (__int64 *)v24;
      *(_QWORD *)(v24 + 8) = v27;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v27, v25, v8, v9) )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 44352), &LockHandle);
        v28 = *(__int64 ***)(v3 + 44368);
        if ( *v28 != (__int64 *)(v3 + 44360) )
          goto LABEL_54;
        v26[1] = (__int64)v28;
        *v26 = v3 + 44360;
        *v28 = v26;
        *(_QWORD *)(v3 + 44368) = v26;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeSetEvent(*(PRKEVENT *)(v3 + 44344), 0, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1744LL), &v46);
        v43 = a1[4] + 1776LL;
        v44 = *(__int64 ***)(a1[4] + 1784LL);
        if ( *v44 != (__int64 *)v43 )
          goto LABEL_54;
        v26[1] = (__int64)v44;
        *v26 = v43;
        *v44 = v26;
        *(_QWORD *)(v43 + 8) = v26;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
      }
    }
    v29 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_54;
    v30 = (void **)v11[1];
    if ( *v30 != v11 )
      goto LABEL_54;
    v31 = bTracingEnabled == 0;
    *v30 = v29;
    v29[1] = v30;
    if ( !v31 )
    {
      v32 = (_QWORD *)a1[1];
      if ( !v32 )
        v32 = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pp_EtwWriteTransfer(v30, &EventRetireSyncPoint, v8, v32, v11[2]);
    }
    v33 = (char *)v11[9];
    if ( v33 != (char *)(v11 + 10) && v33 )
      ExFreePoolWithTag(v33, 0);
    v11[9] = 0LL;
    *((_DWORD *)v11 + 32) = 0;
    v34 = (char *)v11[3];
    if ( v34 != (char *)(v11 + 4) )
    {
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
    }
    v11[3] = 0LL;
    *((_DWORD *)v11 + 16) = 0;
    ExFreePoolWithTag(v11, 0);
  }
}

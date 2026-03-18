/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F222 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C001F338 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003E344 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003E5D0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C004053C (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00187B8 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0019E68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001A22C (VidSchiTryEnterIndependentFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EAF0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C001EEFE (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C002E080 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0035580 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C003679C (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C003AE8C (VidSchiUpdateCurrentIsrFrameTime.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  struct HwQueueStagingList *v5; // r12
  char v6; // si
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  struct _VIDMM_DMA_BUFFER *v14; // rdx
  __int64 v15; // r9
  unsigned int i; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 *v31; // rdx
  int v32; // edx
  __int64 v33; // r15
  int v34; // r12d
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r11
  int v43; // edx
  unsigned int v44; // r10d
  int v45; // eax
  char v46; // cl
  int v47; // eax
  unsigned int v48; // esi
  bool v49; // zf
  int v50; // eax
  char j; // cl
  __int64 v52; // r8
  char v53; // r15
  __int64 v54; // rdx
  struct HwQueueStagingList **v55; // rax
  struct HwQueueStagingList **v56; // rdx
  struct VIDSCH_HW_CONTEXT *v57; // rsi
  unsigned int v58; // eax
  int v59; // ecx
  struct _SLIST_ENTRY *v60; // rcx
  __int64 v61; // [rsp+50h] [rbp-19h]
  struct VIDSCH_HW_CONTEXT *v62; // [rsp+58h] [rbp-11h]
  __int64 v63; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  BOOL v66; // [rsp+D8h] [rbp+6Fh]
  BOOL v67; // [rsp+E0h] [rbp+77h]

  v4 = *((_QWORD *)a2 + 12);
  v5 = a1;
  v6 = a3;
  v63 = v4;
  v66 = 0;
  v62 = *(struct VIDSCH_HW_CONTEXT **)(v4 + 40);
  v67 = 0;
  v8 = *((_QWORD *)v62 + 1);
  v61 = *((_QWORD *)v62 + 2);
  v9 = *(_QWORD *)(v8 + 32);
  if ( bTracingEnabled && (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    v10 = *((_QWORD *)a2 + 11);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 56);
      if ( !v11 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
        v11 = v10;
    }
    else
    {
      v11 = *(_QWORD *)(v4 + 48);
      if ( !v11 )
        v11 = v4;
    }
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v11, &AbortQueuePacket, a3, a2, v11);
  }
  v12 = *((_DWORD *)a2 + 12);
  if ( v12 )
  {
    if ( v12 == 8 )
    {
      if ( (byte_1C006E941 & 1) != 0 )
      {
        v19 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
        if ( !v19 )
          v19 = *((_QWORD *)a2 + 12);
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)a2 + 36), &EventDmaCompleteByGpu, a3, v19, *((_QWORD *)a2 + 36));
      }
      --*(_DWORD *)(v4 + 152);
      _InterlockedIncrement64((volatile signed __int64 *)(v61 + 1728));
      if ( (*((_DWORD *)a2 + 68) & 0x100) != 0 )
      {
        LOBYTE(a3) = 1;
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          a3,
          a4);
      }
    }
    else if ( v12 == 3 )
    {
      VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 872));
    }
  }
  else
  {
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
      if ( !v13 )
        v13 = *((_QWORD *)a2 + 12);
      McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)a2 + 96), &EventDmaCompleteByGpu, a3, v13, *((_QWORD *)a2 + 96));
    }
    --*(_DWORD *)(v4 + 152);
    _InterlockedIncrement64((volatile signed __int64 *)(v61 + 1728));
    v14 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a2 + 35);
    if ( v14 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(v9 + 8) + 656LL), v14, 0LL, a4);
      if ( (*((_DWORD *)a2 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          0LL,
          v15);
    }
    for ( i = 0; i < *((_DWORD *)a2 + 118); ++i )
    {
      if ( i >= 0x10 )
        break;
      v17 = *((_QWORD *)a2 + i + 60);
      *((_QWORD *)a2 + i + 60) = 0LL;
      if ( v17 )
        _InterlockedDecrement((volatile signed __int32 *)(v17 + 104));
    }
    if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 812));
      VidSchiUpdateCurrentIsrFrameTime(v9, *(_QWORD *)(v9 + 8LL * *((unsigned int *)a2 + 40) + 3200), 0);
      v18 = *((unsigned int *)a2 + 40);
      *((_QWORD *)a2 + 17) = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v18 + 3200) + 44056LL);
      *((_DWORD *)a2 + 33) = *(_DWORD *)(*(_QWORD *)(v9 + 8 * v18 + 3200) + 44064LL);
    }
  }
  if ( v6 && (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) == 0 )
  {
    v20 = *((_QWORD *)a2 + 12);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 40);
      v22 = *(_QWORD *)(v21 + 16);
      v23 = *(unsigned __int16 *)(v22 + 4);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 40LL) + 32LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(v22 + 24) + 4LL));
      if ( v24 )
      {
        v26 = *(__int64 **)(v24 + 8);
        if ( (unsigned int)v23 < *(_DWORD *)(v24 + 80) )
          v26 += v23;
        v25 = *v26;
        goto LABEL_48;
      }
    }
    else
    {
      v27 = *((_QWORD *)a2 + 11);
      v28 = *(_QWORD *)(v27 + 96);
      if ( (*(_DWORD *)(v28 + 12) & 0x10) == 0 )
      {
        v29 = *(unsigned __int16 *)(v28 + 4);
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v28 + 24) + 4LL));
        v31 = *(__int64 **)(v30 + 8);
        if ( (unsigned int)v29 < *(_DWORD *)(v30 + 80) )
          v31 += v29;
        v25 = *v31;
        goto LABEL_48;
      }
    }
    v25 = 0LL;
LABEL_48:
    if ( v25 )
      ++*(_DWORD *)(v25 + 224);
  }
  v32 = *((_DWORD *)a2 + 18);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a2 + 13) = 16;
  if ( (v32 & 0x40020) != 0x40000 && (v32 & 0x4000) == 0 )
    goto LABEL_88;
  v33 = *((unsigned int *)a2 + 40);
  v34 = v32 & 0xC00;
  if ( (v32 & 0x40000) != 0 )
  {
    if ( (v32 & 0x4000) == 0 )
      goto LABEL_77;
    goto LABEL_58;
  }
  if ( (v32 & 4) == 0 )
  {
LABEL_58:
    v67 = v34 != 1024;
    v35 = 0;
    if ( v34 != 1024 )
      goto LABEL_63;
    goto LABEL_77;
  }
  if ( *((_DWORD *)a2 + 98) == 1 )
  {
    v66 = v34 != 1024;
    goto LABEL_58;
  }
  if ( (*((_DWORD *)a2 + 16) & 2) == 0 )
  {
    if ( v34 == 1024 )
    {
LABEL_66:
      if ( (*((_DWORD *)a2 + 218) & 0x3FF) != 0 )
      {
        v36 = *(_QWORD *)(v9 + 632);
        v37 = *(unsigned __int16 *)(v61 + 4);
        if ( (unsigned int)v37 < *(_DWORD *)(v9 + 704) )
          v36 += 8 * v37;
        VidSchiUnreferencePrimaryAllocations(
          a1,
          (struct _VIDSCH_GLOBAL *)v9,
          v33,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 872),
          *((_DWORD *)a2 + 102),
          1 << *(_BYTE *)(*(_QWORD *)v36 + 6LL),
          0,
          0);
      }
LABEL_70:
      if ( v67 && (_DWORD)v33 != -1 && (*((_DWORD *)a2 + 18) & 0x40000) == 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v33 + 1444));
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 32LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v8 + 32) + 4LL))
                        + 8 * v33
                        + 88);
        if ( (*((_DWORD *)a2 + 18) & 0x80u) == 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v33 + 6456) + 8LL));
          ++**(_DWORD **)(v9 + 8 * v33 + 6456);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v38 + 8));
        ++*(_DWORD *)v38;
        if ( (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1736), &LockHandle);
          *(_DWORD *)(v8 + 4 * v33 + 508) = *((_DWORD *)a2 + 96);
          *(_QWORD *)(v8 + 8 * v33 + 576) = *((unsigned int *)a2 + 33);
          *(_QWORD *)(v8 + 8 * v33 + 704) = *((_QWORD *)a2 + 17);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      goto LABEL_77;
    }
    v66 = 1;
    v35 = 1;
    v67 = 1;
LABEL_63:
    if ( VidSchiIsFocusHwContext(v62) )
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL));
    if ( !v35 )
      goto LABEL_70;
    goto LABEL_66;
  }
LABEL_77:
  if ( (*((_DWORD *)a2 + 18) & 0x40080) != 0 && *((_QWORD *)a2 + 18) && *((_QWORD *)a2 + 19) )
  {
    v49 = v34 == 1024;
    v5 = a1;
    if ( !v49 )
      VidSchiSubmitPresentHistoryToken(a1, a2, 0LL, 0LL, 0LL);
  }
  else
  {
    v5 = a1;
  }
  if ( v66 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 736));
    v39 = v9;
    if ( *(_BYTE *)(v9 + 2212) )
      v39 = v9 + 4 * v33;
    _InterlockedDecrement((volatile signed __int32 *)(v39 + 740));
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1572));
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v33 + 1508));
  }
  VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1688));
LABEL_88:
  if ( *((_DWORD *)a2 + 12) == 3 && *((_DWORD *)a2 + 40) != -1 )
  {
    v40 = *((_QWORD *)a2 + 11);
    if ( v40 )
      v41 = *(_QWORD *)(v40 + 104);
    else
      v41 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
    v42 = *(_QWORD *)(v41 + 32);
    v43 = *((_DWORD *)a2 + 18);
    if ( (v43 & 0x800000) != 0 )
      v44 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
    else
      v44 = (1 << *(_DWORD *)(v42 + 152)) - 1;
    v49 = !_BitScanForward((unsigned int *)&v45, v44);
    v46 = -1;
    if ( !v49 )
      v46 = v45;
    if ( v44 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v42 + 8LL * *((unsigned int *)a2 + 40) + 3200) + 280LL * v46 + 184),
          0xFFFFFFFF);
        v47 = 1 << v46;
        v46 = -1;
        v44 &= ~v47;
        v49 = !_BitScanForward((unsigned int *)&v47, v44);
        if ( !v49 )
          v46 = v47;
      }
      while ( v44 );
      v43 = *((_DWORD *)a2 + 18);
    }
    if ( (v43 & 0x800000) != 0 )
      v48 = ((unsigned __int16)*((_DWORD *)a2 + 218) | (unsigned __int16)(*((_DWORD *)a2 + 218) >> 10)) & 0x3FF;
    else
      v48 = (1 << *(_DWORD *)(v9 + 152)) - 1;
    v49 = !_BitScanForward((unsigned int *)&v50, v48);
    for ( j = -1; ; j = -1 )
    {
      if ( !v49 )
        j = v50;
      if ( !v48 )
        break;
      v52 = *((unsigned int *)a2 + 40);
      v53 = j;
      v54 = *(int *)(*(_QWORD *)(v9 + 8 * v52 + 3200) + 280LL * (unsigned int)j + 180);
      if ( (int)v54 > -1 && *(_DWORD *)(160 * v54 + *(_QWORD *)(v9 + 3328) + 112) == 1 )
        VidSchiTryEnterIndependentFlip(v5, (struct _VIDSCH_GLOBAL *)v9, v52, j);
      v48 &= ~(1 << v53);
      v49 = !_BitScanForward((unsigned int *)&v50, v48);
    }
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1584));
  if ( v67 )
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v8 + 120));
  if ( v66 )
  {
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v8 + 136));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1672));
    *(_QWORD *)(v9 + 1616) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1584), 0, 0);
  }
  if ( (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) != 0 )
  {
    v57 = v62;
  }
  else
  {
    v55 = (struct HwQueueStagingList **)(v63 + 176);
    if ( !*(_QWORD *)(v63 + 176) )
    {
      v56 = (struct HwQueueStagingList **)*((_QWORD *)v5 + 1);
      if ( *v56 != v5 )
        __fastfail(3u);
      *v55 = v5;
      *(_QWORD *)(v63 + 184) = v56;
      *v56 = (struct HwQueueStagingList *)v55;
      *((_QWORD *)v5 + 1) = v55;
      *((_BYTE *)v5 + 16) = 0;
    }
    v57 = v62;
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)v62 + 41);
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v61 + 408));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1640));
    *((_QWORD *)v62 + 38) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)((char *)v62 + 272), 0, 0);
    *(_QWORD *)(v61 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v61 + 240), 0, 0);
    *(_QWORD *)(v9 + 1448) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1416), 0, 0);
  }
  v58 = *((_DWORD *)a2 + 12);
  if ( v58 <= 7 )
  {
    v59 = 137;
    if ( _bittest(&v59, v58) )
    {
      if ( !*((_BYTE *)v57 + 89) )
        VidSchiReleasePrivateDataReference(
          (struct _VIDSCH_GLOBAL *)v9,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 872));
      v60 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 38);
      if ( v60 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v60);
        *((_QWORD *)a2 + 38) = 0LL;
      }
    }
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}

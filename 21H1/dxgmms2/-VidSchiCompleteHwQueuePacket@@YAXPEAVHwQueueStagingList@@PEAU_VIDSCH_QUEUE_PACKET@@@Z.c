/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036688
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035D10 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035FA8 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038260 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00384F0 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038804 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C00394BC (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0002550 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00046E0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000EBF8 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0013988 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0013A18 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0023C78 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002D3B8 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0032024 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00379B0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0037EE4 (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  __int64 v3; // r12
  struct HwQueueStagingList *v5; // r13
  int v6; // esi
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  struct _VIDMM_DMA_BUFFER *v13; // rdx
  unsigned int i; // ecx
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // r12
  int v19; // ebp
  BOOL v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r11
  int v28; // edx
  unsigned int v29; // r10d
  int v30; // eax
  char v31; // cl
  int v32; // eax
  unsigned int v33; // esi
  bool v34; // zf
  int v35; // eax
  char j; // cl
  __int64 v37; // r8
  char v38; // bp
  __int64 v39; // rdx
  int v40; // edx
  struct HwQueueStagingList **v41; // rax
  struct HwQueueStagingList **v42; // rdx
  struct VIDSCH_HW_CONTEXT *v43; // rsi
  unsigned int v44; // eax
  int v45; // ecx
  struct _SLIST_ENTRY *v46; // rcx
  struct VIDSCH_HW_CONTEXT *v47; // [rsp+50h] [rbp-68h]
  __int64 v48; // [rsp+58h] [rbp-60h]
  __int64 v49; // [rsp+60h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  int v51; // [rsp+C8h] [rbp+10h]
  BOOL v52; // [rsp+D0h] [rbp+18h]

  v3 = *((_QWORD *)a2 + 12);
  v5 = a1;
  v49 = v3;
  v52 = 0;
  v6 = 0;
  v47 = *(struct VIDSCH_HW_CONTEXT **)(v3 + 40);
  v51 = 0;
  v7 = *((_QWORD *)v47 + 1);
  v8 = *((_QWORD *)v47 + 2);
  v48 = v8;
  v9 = *(_QWORD *)(v7 + 32);
  if ( bTracingEnabled && (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    v10 = *((_QWORD *)a2 + 11);
    if ( v10 )
    {
      a1 = *(struct HwQueueStagingList **)(v10 + 56);
      if ( !a1 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
        a1 = (struct HwQueueStagingList *)v10;
    }
    else
    {
      a1 = *(struct HwQueueStagingList **)(v3 + 48);
      if ( !a1 )
        a1 = (struct HwQueueStagingList *)v3;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp_EtwWriteTransfer((__int64)a1, &AbortQueuePacket, a3, a2, a1);
  }
  v11 = *((_DWORD *)a2 + 12);
  if ( v11 )
  {
    if ( v11 == 8 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
        if ( !v16 )
          v16 = *((_QWORD *)a2 + 12);
        McTemplateK0pp_EtwWriteTransfer((__int64)a1, &EventDmaCompleteByGpu, a3, v16, *((_QWORD *)a2 + 36));
      }
      --*(_DWORD *)(v3 + 152);
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1720));
      if ( (*((_DWORD *)a2 + 68) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          1);
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
      if ( !v12 )
        v12 = *((_QWORD *)a2 + 12);
      McTemplateK0pp_EtwWriteTransfer((__int64)a1, &EventDmaCompleteByGpu, a3, v12, *((_QWORD *)a2 + 94));
    }
    --*(_DWORD *)(v3 + 152);
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1720));
    v13 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a2 + 35);
    if ( v13 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(v9 + 8) + 648LL), v13, 0);
      if ( (*((_DWORD *)a2 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          0);
    }
    for ( i = 0; i < *((_DWORD *)a2 + 116); ++i )
    {
      if ( i >= 0x10 )
        break;
      v15 = *((_QWORD *)a2 + i + 59);
      *((_QWORD *)a2 + i + 59) = 0LL;
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 104));
    }
  }
  v17 = *((_DWORD *)a2 + 18);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a2 + 13) = 16;
  if ( (v17 & 0x40020) == 0x40000 || (v17 & 0x4000) != 0 )
  {
    v18 = *((unsigned int *)a2 + 40);
    v19 = v17 & 0xC00;
    if ( (v17 & 0x40000) != 0 )
    {
      v20 = (v17 & 0x4000) != 0 && v19 != 1024;
      v51 = v20;
      goto LABEL_45;
    }
    if ( (v17 & 4) != 0 )
    {
      if ( *((_DWORD *)a2 + 98) != 1 )
      {
        if ( (*((_DWORD *)a2 + 16) & 2) != 0 )
        {
LABEL_60:
          if ( (*((_DWORD *)a2 + 18) & 0x40080) != 0 && *((_QWORD *)a2 + 18) && *((_QWORD *)a2 + 19) && v19 != 1024 )
            VidSchiSubmitPresentHistoryToken(v5, a2, 0LL, 0LL, 0LL);
          if ( v52 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 728));
            v24 = v9;
            if ( *(_BYTE *)(v9 + 2132) )
              v24 = v9 + 4 * v18;
            _InterlockedDecrement((volatile signed __int32 *)(v24 + 732));
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 1572));
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v18 + 1508));
          }
          VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1672));
          v3 = v49;
          goto LABEL_70;
        }
        v6 = 1;
        if ( v19 != 1024 )
        {
          v52 = 1;
          v51 = 1;
          goto LABEL_46;
        }
        v20 = 0;
LABEL_45:
        if ( !v20 )
        {
LABEL_48:
          if ( v6 && (*((_DWORD *)a2 + 210) & 0x3FF) != 0 )
          {
            v21 = *(_QWORD *)(v9 + 624);
            v22 = *(unsigned __int16 *)(v48 + 4);
            if ( (unsigned int)v22 < *(_DWORD *)(v9 + 696) )
              v21 += 8 * v22;
            VidSchiUnreferencePrimaryAllocations(
              v5,
              (struct _VIDSCH_GLOBAL *)v9,
              v18,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 840),
              *((_DWORD *)a2 + 102),
              1 << *(_BYTE *)(*(_QWORD *)v21 + 6LL),
              0,
              0);
          }
          if ( v51 && (_DWORD)v18 != -1 && (*((_DWORD *)a2 + 18) & 0x40000) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v18 + 1444));
            v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                            + 8 * v18
                            + 88);
            if ( (*((_DWORD *)a2 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v18 + 6352) + 8LL));
              ++**(_DWORD **)(v9 + 8 * v18 + 6352);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
            ++*(_DWORD *)v23;
            if ( (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1720), &LockHandle);
              *(_DWORD *)(v7 + 4 * v18 + 508) = *((_DWORD *)a2 + 96);
              *(_QWORD *)(v7 + 8 * v18 + 576) = *((unsigned int *)a2 + 33);
              *(_QWORD *)(v7 + 8 * v18 + 704) = *((_QWORD *)a2 + 17);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
          }
          goto LABEL_60;
        }
LABEL_46:
        if ( VidSchiIsFocusHwContext(v47) )
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[22])(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 8LL));
        goto LABEL_48;
      }
      v52 = v19 != 1024;
    }
    v20 = v19 != 1024;
    v51 = v20;
    goto LABEL_45;
  }
LABEL_70:
  if ( *((_DWORD *)a2 + 12) == 3 && *((_DWORD *)a2 + 40) != -1 )
  {
    v25 = *((_QWORD *)a2 + 11);
    if ( v25 )
      v26 = *(_QWORD *)(v25 + 104);
    else
      v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
    v27 = *(_QWORD *)(v26 + 32);
    v28 = *((_DWORD *)a2 + 18);
    if ( (v28 & 0x800000) != 0 )
      v29 = ((unsigned __int16)*((_DWORD *)a2 + 210) | (unsigned __int16)(*((_DWORD *)a2 + 210) >> 10)) & 0x3FF;
    else
      v29 = (1 << *(_DWORD *)(v27 + 144)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v30, v29);
    v31 = -1;
    if ( !v34 )
      v31 = v30;
    if ( v29 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v27 + 8LL * *((unsigned int *)a2 + 40) + 3104) + 216LL * v31 + 176),
          0xFFFFFFFF);
        v32 = 1 << v31;
        v31 = -1;
        v29 &= ~v32;
        v34 = !_BitScanForward((unsigned int *)&v32, v29);
        if ( !v34 )
          v31 = v32;
      }
      while ( v29 );
      v28 = *((_DWORD *)a2 + 18);
    }
    if ( (v28 & 0x800000) != 0 )
      v33 = ((unsigned __int16)*((_DWORD *)a2 + 210) | (unsigned __int16)(*((_DWORD *)a2 + 210) >> 10)) & 0x3FF;
    else
      v33 = (1 << *(_DWORD *)(v9 + 144)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v35, v33);
    for ( j = -1; ; j = -1 )
    {
      if ( !v34 )
        j = v35;
      if ( !v33 )
        break;
      v37 = *((unsigned int *)a2 + 40);
      v38 = j;
      v39 = *(int *)(*(_QWORD *)(v9 + 8 * v37 + 3104) + 216LL * (unsigned int)j + 172);
      if ( (int)v39 <= -1 )
        v40 = 0;
      else
        v40 = *(_DWORD *)(152 * v39 + *(_QWORD *)(v9 + 3232) + 112);
      if ( v40 == 1 )
        VidSchiTryEnterIndependentFlip(v5, (struct _VIDSCH_GLOBAL *)v9, v37, j);
      v33 &= ~(1 << v38);
      v34 = !_BitScanForward((unsigned int *)&v35, v33);
    }
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1584));
  if ( v51 )
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 120));
  if ( v52 )
  {
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 136));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1656));
    *(_QWORD *)(v9 + 1600) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1568), 0, 0);
  }
  if ( (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) != 0 )
  {
    v43 = v47;
  }
  else
  {
    v41 = (struct HwQueueStagingList **)(v3 + 176);
    if ( !*(_QWORD *)(v3 + 176) )
    {
      v42 = (struct HwQueueStagingList **)*((_QWORD *)v5 + 1);
      if ( *v42 != v5 )
        __fastfail(3u);
      *v41 = v5;
      *(_QWORD *)(v3 + 184) = v42;
      *v42 = (struct HwQueueStagingList *)v41;
      *((_QWORD *)v5 + 1) = v41;
      *((_BYTE *)v5 + 16) = 0;
    }
    v43 = v47;
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)v47 + 41);
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v48 + 408));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1624));
    *((_QWORD *)v47 + 38) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)((char *)v47 + 272), 0, 0);
    *(_QWORD *)(v48 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v48 + 240), 0, 0);
    *(_QWORD *)(v9 + 1432) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1400), 0, 0);
  }
  v44 = *((_DWORD *)a2 + 12);
  if ( v44 <= 7 )
  {
    v45 = 137;
    if ( _bittest(&v45, v44) )
    {
      if ( !*((_BYTE *)v43 + 89) )
        VidSchiReleasePrivateDataReference(
          (struct _VIDSCH_GLOBAL *)v9,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 840));
      v46 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 38);
      if ( v46 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v46);
        *((_QWORD *)a2 + 38) = 0LL;
      }
    }
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}

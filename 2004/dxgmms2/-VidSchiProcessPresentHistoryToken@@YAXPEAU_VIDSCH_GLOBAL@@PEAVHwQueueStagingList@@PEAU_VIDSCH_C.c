/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002690
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0002550 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C002FB58 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00046E0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0013730 (VidSchiPropagatePresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C002A754 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002A7D0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4DC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C002D538 (McTemplateK0ppqqx_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        struct HwQueueStagingList *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDSCH_HW_QUEUE *a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_SUBMIT_DATA2 *a6,
        union _ULARGE_INTEGER a7,
        bool a8,
        bool a9)
{
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  unsigned int i; // edi
  __int64 v21; // r14
  struct _SLIST_ENTRY *v22; // rcx
  struct _SLIST_ENTRY *v23; // rcx
  int v24; // ebx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdi
  struct _SLIST_ENTRY *v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  struct _VIDSCH_DEVICE *v35; // r15
  char v36; // dl
  __int64 v37; // r9
  int v39; // ecx
  char v40; // cl
  __int64 v41; // rax
  __int64 v42; // r13
  void (__fastcall *v43)(_QWORD); // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // [rsp+60h] [rbp-68h]
  __int64 v48; // [rsp+68h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+70h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a6 & 0x1000000) != 0 )
  {
    v35 = a5;
    v36 = -1;
    v37 = *((unsigned int *)a6 + 29);
    if ( _BitScanForward((unsigned int *)&v39, *((_DWORD *)a6 + 142) & 0x3FF) )
      v36 = v39;
    v40 = 0;
    v47 = *((_DWORD *)a6 + 29);
    if ( v36 != -1 )
      v40 = v36;
    if ( !a5 )
    {
      v41 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 143) * ((8 * *((_DWORD *)a6 + 144) + 199) & 0xFFFFFFF8) + 616);
      if ( v41 )
        v35 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v41 + 8) + 32LL);
      else
        v35 = 0LL;
    }
    v42 = *((_QWORD *)a1 + v37 + 388);
    v48 = *((unsigned int *)a6 + 29);
    if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v37, v40) && VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v35);
    }
    else
    {
      if ( *(_DWORD *)(v42 + 33288) != -1 )
      {
        v43 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 372);
        if ( v43 )
          v43(*((_QWORD *)a1 + 378));
      }
      v44 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v44[3] = *((_QWORD *)a6 + 13);
      v44[4] = *((unsigned int *)a6 + 28);
      if ( a8 )
      {
        v44[5] = 0LL;
        v44[6] = *((_QWORD *)a6 + 19);
        v45 = *((_QWORD *)a6 + 20);
      }
      else
      {
        v44[5] = *((_QWORD *)a6 + 19);
        v44[6] = *((_QWORD *)a6 + 20);
        v45 = *((_DWORD *)a6 + 1) & 1;
      }
      v44[7] = v45;
      WdLogEvent5_WdPresentTokenEvent(v44);
      VidSchiPropagatePresentHistoryToken(
        a1,
        *((PKSPIN_LOCK *)a6 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a6 + 13),
        0,
        0,
        a8,
        a9,
        *((_QWORD *)a6 + 3),
        (__int64)a6 + 568,
        (__int64)a6,
        0LL,
        0);
      VidSchiUnreferencePrimaryAllocations(
        a2,
        a1,
        v47,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 568),
        *((_DWORD *)a6 + 34),
        *((_DWORD *)a6 + 34),
        0,
        0);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 182);
      v46 = 4 * v48;
      if ( *((_BYTE *)a1 + 2132) )
        a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + v46);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 183);
      _InterlockedDecrement((volatile signed __int32 *)v35 + 393);
      _InterlockedDecrement((volatile signed __int32 *)((char *)v35 + v46 + 1508));
      VidSchiCheckPendingDeviceCommand(v35);
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v13[3] = *((_QWORD *)a6 + 13);
    v13[4] = *((unsigned int *)a6 + 28);
    v13[5] = *((_QWORD *)a6 + 19);
    v13[6] = *((_QWORD *)a6 + 20);
    WdLogEvent5_WdPresentTokenEvent(v13);
    v16 = *((_QWORD *)a6 + 68);
    v17 = *((_QWORD *)a6 + 3);
    v18 = *((_QWORD *)a6 + 13);
    v19 = *((_QWORD *)a6 + 12);
    if ( !v16
      || (v29 = *((_DWORD *)a6 + 1),
          v30 = *((_QWORD *)a6 + 69),
          v31 = *((_QWORD *)a6 + 70),
          v32 = *((_QWORD *)a6 + 96),
          *((_QWORD *)a6 + 96) = 0LL,
          LOBYTE(v29) = (v29 & 0x20) != 0,
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, _BYTE))DxgCoreInterface[67])(
            v16,
            v30,
            v31,
            v32,
            v29),
          (_BYTE)v29) )
    {
      if ( v17 )
      {
        v27 = *((_QWORD *)a6 + 96);
        if ( v27 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 16), &v49);
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 12));
          v28 = *(struct _SLIST_ENTRY **)(v17 + 8);
          if ( v28 )
            CRefCountedBuffer::RefCountedBufferRelease(v28);
          *(_QWORD *)(v17 + 8) = v27;
          KeReleaseInStackQueuedSpinLock(&v49);
        }
      }
      for ( i = 0; i < *((_DWORD *)a1 + 36); ++i )
      {
        v21 = i * ((8 * *((_DWORD *)a6 + 144) + 199) & 0xFFFFFFF8);
        v22 = *(struct _SLIST_ENTRY **)((char *)a6 + v21 + 768);
        if ( v22 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v22);
          *(_QWORD *)((char *)a6 + v21 + 768) = 0LL;
        }
      }
      v23 = (struct _SLIST_ENTRY *)*((_QWORD *)a6 + 4);
      if ( v23 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v23);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      v24 = *((_DWORD *)a6 + 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx_EtwWriteTransfer((_DWORD)v23, v14, v15, v19, v18);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, &LockHandle);
      v25 = *(unsigned int *)(v19 + 8);
      if ( (unsigned int)v25 >= 0x800 )
      {
        v33 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v33 + 24) = 3457LL;
        WdLogEvent5_WdAssertion(v33);
        v25 = *(unsigned int *)(v19 + 8);
      }
      *(_QWORD *)(v19 + 8 * v25 + 80) = v18;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~4u;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) = (8 * a9) | *(_BYTE *)(*(unsigned int *)(v19 + 8)
                                                                                 + v19
                                                                                 + 16464) & 0xF7;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) ^= (*(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) ^ (16 * v24)) & 0x10;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~0x20u;
      v26 = ((unsigned __int16)*(_DWORD *)(v19 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v19 + 8) = v26;
      if ( v26 == *(_DWORD *)(v19 + 12) )
      {
        v34 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v34 + 24) = 3474LL;
        WdLogEvent5_WdAssertion(v34);
      }
      KeSetEvent(*(PRKEVENT *)(v19 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v19 + 48), (PSLIST_ENTRY)(v18 - 16));
    }
  }
}

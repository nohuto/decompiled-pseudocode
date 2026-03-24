/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000282C (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C002FB08 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002EAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0005170 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000ACE0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00151C8 (VidSchiPropagatePresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C002A774 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002A7F0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4FC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C002D4F0 (McTemplateK0ppqqx_EtwWriteTransfer.c)
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
  _QWORD *v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rbp
  bool v19; // bl
  __int64 v20; // rbx
  struct _SLIST_ENTRY *v21; // rcx
  unsigned int i; // ebx
  __int64 v23; // r14
  struct _SLIST_ENTRY *v24; // rcx
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  struct _VIDSCH_DEVICE *v31; // rbx
  __int64 v32; // r9
  bool v33; // zf
  int v34; // ecx
  char v35; // dl
  char v36; // cl
  __int64 v37; // rax
  __int64 v38; // rbp
  void (__fastcall *v39)(_QWORD); // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+88h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a6 & 0x1000000) != 0 )
  {
    v31 = a5;
    v32 = *((unsigned int *)a6 + 29);
    v33 = !_BitScanForward((unsigned int *)&v34, *((_DWORD *)a6 + 144) & 0x3FF);
    v35 = -1;
    v43 = *((_DWORD *)a6 + 29);
    if ( !v33 )
      v35 = v34;
    v36 = 0;
    if ( v35 != -1 )
      v36 = v35;
    if ( !a5 )
    {
      v37 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 145) * ((8 * *((_DWORD *)a6 + 146) + 199) & 0xFFFFFFF8) + 624);
      if ( v37 )
        v31 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v37 + 8) + 32LL);
      else
        v31 = 0LL;
    }
    v38 = *((_QWORD *)a1 + v32 + 388);
    v44 = *((unsigned int *)a6 + 29);
    if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v32, v36) && VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v31);
    }
    else
    {
      if ( *(_DWORD *)(v38 + 33288) != -1 )
      {
        v39 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 372);
        if ( v39 )
          v39(*((_QWORD *)a1 + 378));
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v40[3] = *((_QWORD *)a6 + 13);
      v40[4] = *((unsigned int *)a6 + 28);
      if ( a8 )
      {
        v40[5] = 0LL;
        v40[6] = *((_QWORD *)a6 + 19);
        v41 = *((_QWORD *)a6 + 20);
      }
      else
      {
        v40[5] = *((_QWORD *)a6 + 19);
        v40[6] = *((_QWORD *)a6 + 20);
        v41 = *((_DWORD *)a6 + 1) & 1;
      }
      v40[7] = v41;
      WdLogEvent5_WdPresentTokenEvent(v40);
      VidSchiPropagatePresentHistoryToken(
        a1,
        *((PKSPIN_LOCK *)a6 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a6 + 13),
        0,
        0,
        a8,
        a9,
        *((_QWORD *)a6 + 3),
        (__int64)a6 + 576,
        (__int64)a6,
        0LL,
        0);
      VidSchiUnreferencePrimaryAllocations(
        a2,
        a1,
        v43,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 576),
        *((_DWORD *)a6 + 34),
        *((_DWORD *)a6 + 34),
        0,
        0);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 182);
      v42 = 4 * v44;
      if ( *((_BYTE *)a1 + 2132) )
        a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + v42);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 183);
      _InterlockedDecrement((volatile signed __int32 *)v31 + 393);
      _InterlockedDecrement((volatile signed __int32 *)((char *)v31 + v42 + 1508));
      VidSchiCheckPendingDeviceCommand(v31);
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v12[3] = *((_QWORD *)a6 + 13);
    v12[4] = *((unsigned int *)a6 + 28);
    v12[5] = *((_QWORD *)a6 + 19);
    v12[6] = *((_QWORD *)a6 + 20);
    WdLogEvent5_WdPresentTokenEvent(v12);
    v15 = *((_QWORD *)a6 + 68);
    v16 = *((_QWORD *)a6 + 3);
    v17 = *((_QWORD *)a6 + 13);
    v18 = *((_QWORD *)a6 + 12);
    if ( !v15
      || (v19 = (*((_DWORD *)a6 + 1) & 0x20) != 0,
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[67])(
            v15,
            *((_QWORD *)a6 + 69),
            *((_QWORD *)a6 + 70),
            *((_QWORD *)a6 + 71),
            v19),
          v19) )
    {
      if ( v16 )
      {
        v20 = *((_QWORD *)a6 + 97);
        if ( v20 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 12));
          v21 = *(struct _SLIST_ENTRY **)(v16 + 8);
          if ( v21 )
            CRefCountedBuffer::RefCountedBufferRelease(v21);
          *(_QWORD *)(v16 + 8) = v20;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      for ( i = 0; i < *((_DWORD *)a1 + 36); ++i )
      {
        v23 = i * ((8 * *((_DWORD *)a6 + 146) + 199) & 0xFFFFFFF8);
        v24 = *(struct _SLIST_ENTRY **)((char *)a6 + v23 + 776);
        if ( v24 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v24);
          *(_QWORD *)((char *)a6 + v23 + 776) = 0LL;
        }
      }
      v25 = (struct _SLIST_ENTRY *)*((_QWORD *)a6 + 4);
      if ( v25 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v25);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      v26 = *((_DWORD *)a6 + 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx_EtwWriteTransfer((_DWORD)v25, v13, v14, v18, v17);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v18, &v46);
      v27 = *(unsigned int *)(v18 + 8);
      if ( (unsigned int)v27 >= 0x800 )
      {
        v28 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v28 + 24) = 3481LL;
        WdLogEvent5_WdAssertion(v28);
        v27 = *(unsigned int *)(v18 + 8);
      }
      *(_QWORD *)(v18 + 8 * v27 + 80) = v17;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~4u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) = (8 * a9) | *(_BYTE *)(*(unsigned int *)(v18 + 8)
                                                                                 + v18
                                                                                 + 16464) & 0xF7;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) ^= (*(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) ^ (16 * v26)) & 0x10;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~0x20u;
      v29 = ((unsigned __int16)*(_DWORD *)(v18 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v18 + 8) = v29;
      if ( v29 == *(_DWORD *)(v18 + 12) )
      {
        v30 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v30 + 24) = 3498LL;
        WdLogEvent5_WdAssertion(v30);
      }
      KeSetEvent(*(PRKEVENT *)(v18 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&v46);
    }
    else if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v18 + 48), (PSLIST_ENTRY)(v17 - 16));
    }
  }
}

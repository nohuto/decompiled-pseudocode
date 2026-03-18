/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0019B18 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0011A30 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001863C (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0019E68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001A274 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001A344 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
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
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v14; // r14
  struct VIDSCH_SUBMIT_DATA2 *v15; // rax
  struct VIDSCH_SUBMIT_DATA2 *v16; // r15
  __int64 v17; // rbp
  struct _D3DKMT_PRESENTHISTORYTOKEN *v18; // r13
  union _SLIST_HEADER *v19; // r12
  unsigned int v20; // edi
  __int64 v21; // r15
  struct _SLIST_ENTRY *v22; // rcx
  struct _SLIST_ENTRY *v23; // rcx
  __int64 v24; // rdi
  struct _SLIST_ENTRY *v25; // rcx
  __int64 v26; // rdx
  bool v27; // zf
  int v28; // ecx
  struct _VIDSCH_DEVICE *v29; // r12
  __int64 v30; // r13
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  bool v35; // di
  __int64 v36; // rax
  void (__fastcall *v37)(_QWORD); // rax
  bool v38; // [rsp+38h] [rbp-80h]
  bool v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-48h] BYREF
  struct VIDSCH_SUBMIT_DATA2 *v42; // [rsp+E8h] [rbp+30h]

  v14 = (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 600);
  if ( (*(_DWORD *)a6 & 0x1000000) != 0 )
  {
    v26 = *((unsigned int *)a6 + 29);
    v27 = !_BitScanForward((unsigned int *)&v28, *(_DWORD *)v14 & 0x3FF);
    if ( v27 || (_BYTE)v28 == 0xFF )
      LOBYTE(v28) = 0;
    v29 = a5;
    if ( !a5 )
    {
      v36 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 151) * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8) + 648);
      if ( v36 )
        v29 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v36 + 8) + 32LL);
      else
        v29 = 0LL;
    }
    v40 = *((_QWORD *)a1 + v26 + 400);
    v30 = *((unsigned int *)a6 + 29);
    if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v26, (char)v28)
      && VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v29);
    }
    else
    {
      if ( *(_DWORD *)(v40 + 44232) != -1 )
      {
        v37 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 384);
        if ( v37 )
          v37(*((_QWORD *)a1 + 390));
      }
      v31 = *(_QWORD *)((char *)a6 + 156);
      v32 = *((_QWORD *)a6 + 13);
      v33 = *((unsigned int *)a6 + 28);
      if ( a8 )
        WdLogSingleEntry5(8LL, v32, v33, 0LL, v31, *((_QWORD *)a6 + 21));
      else
        WdLogSingleEntry5(8LL, v32, v33, v31, *((_QWORD *)a6 + 21), *((_DWORD *)a6 + 1) & 1);
      VidSchiPropagatePresentHistoryToken(
        a1,
        *((PKSPIN_LOCK *)a6 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a6 + 13),
        0,
        0,
        a8,
        a9,
        *((_QWORD *)a6 + 3),
        (__int64)v14,
        (__int64)a6,
        0LL,
        0);
      VidSchiUnreferencePrimaryAllocations(a2, a1, v30, v14, *((_DWORD *)a6 + 34), *((_DWORD *)a6 + 34), 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 184);
      v34 = 4 * v30;
      if ( *((_BYTE *)a1 + 2212) )
        a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + v34);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 185);
      _InterlockedDecrement((volatile signed __int32 *)v29 + 393);
      _InterlockedDecrement((volatile signed __int32 *)((char *)v29 + v34 + 1508));
      VidSchiCheckPendingDeviceCommand(v29);
    }
  }
  else
  {
    WdLogSingleEntry4(
      8LL,
      *((_QWORD *)a6 + 13),
      *((unsigned int *)a6 + 28),
      *(_QWORD *)((char *)a6 + 156),
      *((_QWORD *)a6 + 21));
    v15 = (struct VIDSCH_SUBMIT_DATA2 *)*((_QWORD *)a6 + 70);
    v16 = 0LL;
    v17 = *((_QWORD *)a6 + 3);
    v18 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a6 + 13);
    v19 = (union _SLIST_HEADER *)*((_QWORD *)a6 + 12);
    v42 = 0LL;
    if ( !v15
      || (v16 = v15,
          v42 = v15,
          v35 = (*((_DWORD *)a6 + 1) & 0x20) != 0,
          ((void (__fastcall *)(struct VIDSCH_SUBMIT_DATA2 *, _QWORD, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[72])(
            v15,
            *((unsigned int *)a6 + 142),
            *((_QWORD *)a6 + 72),
            *((_QWORD *)a6 + 73),
            *((_QWORD *)a6 + 74),
            v35),
          v35) )
    {
      if ( v17 )
      {
        v24 = *((_QWORD *)v14 + 25);
        if ( v24 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 12));
          v25 = *(struct _SLIST_ENTRY **)(v17 + 8);
          if ( v25 )
            CRefCountedBuffer::RefCountedBufferRelease(v25);
          *(_QWORD *)(v17 + 8) = v24;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v20 = 0;
      if ( *((_DWORD *)a1 + 38) )
      {
        do
        {
          v21 = v20 * ((8 * *((_DWORD *)v14 + 2) + 231) & 0xFFFFFFF8);
          v22 = *(struct _SLIST_ENTRY **)((char *)v14 + v21 + 200);
          if ( v22 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v22);
            *(_QWORD *)((char *)v14 + v21 + 200) = 0LL;
          }
          ++v20;
        }
        while ( v20 < *((_DWORD *)a1 + 38) );
        v16 = v42;
      }
      v23 = (struct _SLIST_ENTRY *)*((_QWORD *)a6 + 4);
      if ( v23 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v23);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        &v19->Alignment,
        v18,
        0,
        0,
        0,
        a9,
        *((_BYTE *)a6 + 4) & 1,
        v38,
        v39,
        v16);
    }
    else if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
    {
      ExpInterlockedPushEntrySList(v19 + 3, (PSLIST_ENTRY)(&v18[-1].Token.SurfaceComplete + 131));
    }
  }
}

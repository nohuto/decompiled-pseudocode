/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C0013730
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002690 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003C20 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F6A0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchSubmitCommand @ 0x1C007E500 (VidSchSubmitCommand.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11111@Z @ 0x1C0013838 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0013988 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        union _SLIST_HEADER *SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        bool a4,
        bool a5,
        bool a6,
        bool a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        char a12)
{
  BOOL v12; // ebx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // si
  struct _SLIST_ENTRY *v22; // rcx
  int v23; // esi
  __int64 v24; // rbp
  struct _SLIST_ENTRY *v25; // rcx
  bool v26; // [rsp+38h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  LOBYTE(v12) = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  if ( a10 && *(_QWORD *)(a10 + 544) )
  {
    v17 = *(_QWORD *)(a10 + 544);
    v18 = *(_QWORD *)(a10 + 552);
    v19 = *(_QWORD *)(a10 + 560);
    v20 = *(_QWORD *)(a10 + 768);
    v23 = *(_DWORD *)(a10 + 4) >> 5;
    *(_QWORD *)(a10 + 768) = 0LL;
LABEL_17:
    v21 = v23 & 1;
    goto LABEL_4;
  }
  if ( a11 && *a11 )
  {
    v18 = a11[1];
    v17 = *a11;
    v19 = a11[2];
    v20 = a11[3];
    LOBYTE(v23) = *((_BYTE *)a11 + 32);
    goto LABEL_17;
  }
LABEL_4:
  if ( a4 )
    v17 &= -(__int64)(a12 != 0);
  if ( !v17
    || (((void (__fastcall *)(__int64, __int64, __int64, __int64, char))DxgCoreInterface[67])(v17, v18, v19, v20, v21),
        v21) )
  {
    if ( a8 )
    {
      v24 = *(_QWORD *)(a9 + 200);
      if ( v24 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a8 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 12));
        v25 = *(struct _SLIST_ENTRY **)(a8 + 8);
        if ( v25 )
          CRefCountedBuffer::RefCountedBufferRelease(v25);
        *(_QWORD *)(a8 + 8) = v24;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( a10 )
    {
      VidSchiReleasePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(a10 + 568));
      v22 = *(struct _SLIST_ENTRY **)(a10 + 32);
      if ( v22 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v22);
        *(_QWORD *)(a10 + 32) = 0LL;
      }
      v12 = *(_DWORD *)(a10 + 4) & 1;
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(&SpinLock->Alignment, a3, a4, a5, a6, a7, v12, v26);
  }
  else if ( (*(_DWORD *)(a10 + 4) & 0x10) != 0 )
  {
    ExpInterlockedPushEntrySList(SpinLock + 3, (PSLIST_ENTRY)(&a3[-1].Token.SurfaceComplete + 131));
  }
}

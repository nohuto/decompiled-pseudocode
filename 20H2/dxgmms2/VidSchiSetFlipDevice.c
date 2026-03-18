/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0001924
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004590 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C0010B08 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0016C9C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00037A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009DB0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024774 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029C64 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029D34 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029D60 (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0029DEC (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BFB0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002EFF8 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchiCompletePendingFlip @ 0x1C003CB40 (VidSchiCompletePendingFlip.c)
 *     VidSchControlVSyncDevice @ 0x1C0087B80 (VidSchControlVSyncDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00D0BE8 (VidSchiFlushPendingFlips.c)
 *     VidSchIsVSyncAvailable @ 0x1C00D2970 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v8; // r13
  int v10; // r12d
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // r9
  struct _VIDSCH_GLOBAL *v19; // rdx
  int v20; // esi
  char v21; // cl
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r13d
  __int64 v27; // r14
  int v28; // r15d
  struct VIDSCH_FLIP_QUEUE *v29; // rax
  unsigned int v30; // edx
  _QWORD *v31; // rax
  __int64 v32; // r8
  int v33; // r15d
  int v34; // eax
  _OWORD *v35; // rax
  struct VIDSCH_FLIP_QUEUE *v36; // r14
  struct VIDSCH_FLIP_QUEUE **v37; // rdx
  unsigned int v38; // r14d
  _QWORD *v39; // rsi
  __int64 v40; // rcx
  _QWORD *v41; // rax
  char *v42; // rdi
  __int64 v43; // rax
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v45; // edx
  struct _VIDSCH_GLOBAL *v46; // [rsp+30h] [rbp-61h] BYREF
  struct _VIDSCH_GLOBAL **v47; // [rsp+38h] [rbp-59h]
  char v48; // [rsp+40h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v50[2]; // [rsp+60h] [rbp-31h] BYREF
  char v51; // [rsp+70h] [rbp-21h]
  int v52; // [rsp+71h] [rbp-20h]
  __int16 v53; // [rsp+75h] [rbp-1Ch]
  char v54; // [rsp+77h] [rbp-1Ah]
  unsigned int *v55; // [rsp+78h] [rbp-19h]
  int *v56; // [rsp+80h] [rbp-11h]
  __int64 v57; // [rsp+88h] [rbp-9h]
  struct VIDSCH_FLIP_QUEUE **FlipQueueRef; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned int v59; // [rsp+E8h] [rbp+57h] BYREF
  PERESOURCE Resource; // [rsp+F0h] [rbp+5Fh]
  int v61; // [rsp+F8h] [rbp+67h] BYREF

  v59 = a2;
  v8 = a4;
  v10 = 0;
  v11 = *((_QWORD *)a1 + a2 + 388);
  Resource = (PERESOURCE)((char *)a1 + 968);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 968), 1u);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v12[3] = a3;
  v12[4] = v59;
  v12[5] = v8;
  WdLogEvent5_WdEvent();
  if ( (_DWORD)v8 )
  {
    v16 = *(_QWORD *)(v11 + 16);
    if ( v16 )
    {
      if ( v16 == a3 && *(_DWORD *)(v11 + 4) == (_DWORD)v8 )
        goto LABEL_5;
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v31[3] = 281LL;
      v31[4] = 0x10000LL;
      v31[5] = a1;
      v31[6] = a3;
      v31[7] = v59;
      WdLogEvent5_WdCriticalError(v31);
      __debugbreak();
    }
    if ( ((int)v8 >= 4 || *((_BYTE *)a1 + 148))
      && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, v59)
        ? (v10 = -1073741823)
        : (LOBYTE(v32) = 1, v10 = VidSchControlVSyncDevice(a3, 1LL, v32, v59)),
          v10 < 0)
      || (int)v8 < 3 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
      *(_BYTE *)(v11 + 8) = a6;
      *(_DWORD *)(v11 + 4) = v8;
      *(_QWORD *)(v11 + 16) = a3;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
      v33 = -1;
      LODWORD(v47) = v59;
      v34 = -1;
      v46 = a1;
      while ( 1 )
      {
        HIDWORD(v47) = v34;
        if ( v34 == *((_DWORD *)a1 + 36) )
          break;
        FlipQueueRef = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v46);
        v35 = operator new[](0x15058uLL, 0x39616956u, (enum _POOL_TYPE)512);
        v36 = (struct VIDSCH_FLIP_QUEUE *)v35;
        if ( v35 )
        {
          v22 = HIDWORD(v47) == -1;
          *((_DWORD *)v35 + 15) = HIDWORD(v47);
          *((_DWORD *)v35 + 8) = 0;
          *((_DWORD *)v35 + 9) = 0;
          *((_DWORD *)v35 + 10) = 0;
          *((_DWORD *)v35 + 11) = 0;
          *((_DWORD *)v35 + 12) = 0;
          *((_DWORD *)v35 + 13) = 0;
          *((_QWORD *)v35 + 8) = 0LL;
          *((_QWORD *)v35 + 9) = 0LL;
          *((_DWORD *)v35 + 20) = 0;
          *((_BYTE *)v35 + 56) = v22;
          memset((char *)v35 + 88, 0, 0x15000uLL);
          *(_OWORD *)v36 = 0LL;
          *((_OWORD *)v36 + 1) = 0LL;
        }
        else
        {
          v36 = 0LL;
        }
        v37 = FlipQueueRef;
        *FlipQueueRef = v36;
        if ( !v36 )
        {
          v10 = -1073741801;
          break;
        }
        v38 = 0;
        while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                       (struct VIDSCH_FLIP_QUEUE *)((char *)*v37 + 1344 * v38 + 88),
                       a1) >= 0 )
        {
          v37 = FlipQueueRef;
          if ( ++v38 >= 0x40 )
            goto LABEL_51;
        }
        v10 = -1073741801;
LABEL_51:
        if ( v10 < 0 )
          goto LABEL_60;
        *((_DWORD *)*FlipQueueRef + 13) = 63;
        v34 = HIDWORD(v47) + 1;
      }
      if ( v10 >= 0 )
      {
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v8;
        *(_QWORD *)(v11 + 16) = a3;
        goto LABEL_56;
      }
LABEL_60:
      LODWORD(v47) = v59;
      v46 = a1;
      while ( 1 )
      {
        HIDWORD(v47) = v33;
        if ( v33 == *((_DWORD *)a1 + 36) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v46);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue, v45);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v46) = 0LL;
        }
        ++v33;
      }
LABEL_56:
      v39 = (_QWORD *)(a3 + 104);
      v40 = *v39;
      if ( *(_QWORD **)(*v39 + 8LL) != v39
        || (v41 = (_QWORD *)v39[1], (_QWORD *)*v41 != v39)
        || (*v41 = v40,
            v42 = (char *)a1 + 288,
            *(_QWORD *)(v40 + 8) = v41,
            v43 = *(_QWORD *)v42,
            *(char **)(*(_QWORD *)v42 + 8LL) != v42) )
      {
        __fastfail(3u);
      }
      *v39 = v43;
      v39[1] = v42;
      *(_QWORD *)(v43 + 8) = v39;
      *(_QWORD *)v42 = v39;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else if ( !a3 || a3 == *(_QWORD *)(v11 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v18 = *(_QWORD *)(a3 + 8);
        if ( !v18 )
          v18 = a3;
      }
      else
      {
        v18 = 0LL;
      }
      McTemplateK0pq_EtwWriteTransfer(v14, &EventClearFlipDevice, v15, v18, v59);
    }
    VidSchiClearPeriodicFrameNotifications(a1, v59);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
    v47 = &v46;
    v48 = 0;
    v46 = (struct _VIDSCH_GLOBAL *)&v46;
    VidSchiCompletePendingFlip(&v46, a1, v59, a5);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v46);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v11);
      if ( a7 )
      {
        VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v59);
        VidSchiFlushPendingFlips(a1, v11);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
    }
    LOWORD(v20) = *(_WORD *)(v11 + 33160);
    if ( (_WORD)v20 )
    {
      do
      {
        v61 = 0;
        v21 = -1;
        v22 = !_BitScanForward((unsigned int *)&v23, (unsigned __int16)v20);
        if ( !v22 )
          v21 = v23;
        v24 = (unsigned int)v21;
        v25 = *((_QWORD *)a1 + 2);
        v61 = v24;
        FlipQueueRef = *(struct VIDSCH_FLIP_QUEUE ***)(3072 * v24 + v11 + 2440);
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v50[1] = &FlipQueueRef;
        v55 = &v59;
        v56 = &v61;
        v50[0] = 1LL;
        v51 = 1;
        v57 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))DxgCoreInterface[76])(v25, 0LL, v50);
        v20 = (unsigned __int16)v20 & ~(1 << v61);
      }
      while ( (_WORD)v20 );
      LOWORD(v20) = *(_WORD *)(v11 + 33160);
    }
    v26 = *(_DWORD *)(v11 + 4);
    v27 = *(_QWORD *)(v11 + 16);
    v47 = &v46;
    v48 = 0;
    v46 = (struct _VIDSCH_GLOBAL *)&v46;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v46,
      v19,
      (struct _VIDSCH_PRESENT_INFO *)v11,
      v20);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v46);
    v28 = -1;
    LODWORD(v47) = v59;
    v46 = a1;
    while ( 1 )
    {
      HIDWORD(v47) = v28;
      if ( v28 == *((_DWORD *)a1 + 36) )
        break;
      v29 = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v46);
      if ( v29 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v29, v30);
        *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v46) = 0LL;
      }
      ++v28;
    }
    *(_BYTE *)(v11 + 8) = a6;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v27 && (v26 >= 4 || *((_BYTE *)a1 + 148)) )
      v10 = VidSchControlVSyncDevice(v27, 1LL, 0LL, v59);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v10;
}

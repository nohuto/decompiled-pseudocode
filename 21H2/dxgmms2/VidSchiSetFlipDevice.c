/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0011D1C
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C00056D4 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C0011C98 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0016D7C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004C98 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000AFA0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00249D0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029EC4 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F94 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029FC0 (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A04C (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C210 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002F258 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchiCompletePendingFlip @ 0x1C003CDA0 (VidSchiCompletePendingFlip.c)
 *     VidSchControlVSyncDevice @ 0x1C008AC50 (VidSchControlVSyncDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00CFDB8 (VidSchiFlushPendingFlips.c)
 *     VidSchIsVSyncAvailable @ 0x1C00D1B40 (VidSchIsVSyncAvailable.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v20; // r9
  struct _VIDSCH_GLOBAL *v21; // rdx
  int v22; // esi
  char v23; // cl
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r13d
  __int64 v29; // r14
  int v30; // r15d
  struct VIDSCH_FLIP_QUEUE *v31; // rax
  unsigned int v32; // edx
  _QWORD *v33; // rax
  __int64 v34; // r8
  int v35; // r15d
  int v36; // eax
  _OWORD *v37; // rax
  struct VIDSCH_FLIP_QUEUE *v38; // r14
  struct VIDSCH_FLIP_QUEUE **v39; // rdx
  unsigned int v40; // r14d
  _QWORD *v41; // rsi
  __int64 v42; // rcx
  _QWORD *v43; // rax
  char *v44; // rdi
  __int64 v45; // rax
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v47; // edx
  struct HwQueueStagingList **v48; // [rsp+30h] [rbp-61h] BYREF
  struct HwQueueStagingList ***v49; // [rsp+38h] [rbp-59h]
  char v50; // [rsp+40h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-31h] BYREF
  char v53; // [rsp+70h] [rbp-21h]
  int v54; // [rsp+71h] [rbp-20h]
  __int16 v55; // [rsp+75h] [rbp-1Ch]
  char v56; // [rsp+77h] [rbp-1Ah]
  unsigned int *v57; // [rsp+78h] [rbp-19h]
  int *v58; // [rsp+80h] [rbp-11h]
  __int64 v59; // [rsp+88h] [rbp-9h]
  struct VIDSCH_FLIP_QUEUE **FlipQueueRef; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned int v61; // [rsp+E8h] [rbp+57h] BYREF
  PERESOURCE Resource; // [rsp+F0h] [rbp+5Fh]
  int v63; // [rsp+F8h] [rbp+67h] BYREF

  v61 = a2;
  v8 = a4;
  v10 = 0;
  v11 = *((_QWORD *)a1 + a2 + 388);
  Resource = (PERESOURCE)((char *)a1 + 968);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 968), 1u);
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v14[3] = a3;
  v14[4] = v61;
  v14[5] = v8;
  WdLogEvent5_WdEvent(v14);
  if ( (_DWORD)v8 )
  {
    v18 = *(_QWORD *)(v11 + 16);
    if ( v18 )
    {
      if ( v18 == a3 && *(_DWORD *)(v11 + 4) == (_DWORD)v8 )
        goto LABEL_5;
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
      v33[3] = 281LL;
      v33[4] = 0x10000LL;
      v33[5] = a1;
      v33[6] = a3;
      v33[7] = v61;
      WdLogEvent5_WdCriticalError(v33);
      __debugbreak();
    }
    if ( ((int)v8 >= 4 || *((_BYTE *)a1 + 148))
      && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, v61)
        ? (v10 = -1073741823)
        : (LOBYTE(v34) = 1, v10 = VidSchControlVSyncDevice(a3, 1LL, v34, v61)),
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
      v35 = -1;
      LODWORD(v49) = v61;
      v36 = -1;
      v48 = (struct HwQueueStagingList **)a1;
      while ( 1 )
      {
        HIDWORD(v49) = v36;
        if ( v36 == *((_DWORD *)a1 + 36) )
          break;
        FlipQueueRef = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v48);
        v37 = operator new[](0x15058uLL, 0x39616956u, (POOL_TYPE)512);
        v38 = (struct VIDSCH_FLIP_QUEUE *)v37;
        if ( v37 )
        {
          v24 = HIDWORD(v49) == -1;
          *((_DWORD *)v37 + 15) = HIDWORD(v49);
          *((_DWORD *)v37 + 8) = 0;
          *((_DWORD *)v37 + 9) = 0;
          *((_DWORD *)v37 + 10) = 0;
          *((_DWORD *)v37 + 11) = 0;
          *((_DWORD *)v37 + 12) = 0;
          *((_DWORD *)v37 + 13) = 0;
          *((_QWORD *)v37 + 8) = 0LL;
          *((_QWORD *)v37 + 9) = 0LL;
          *((_DWORD *)v37 + 20) = 0;
          *((_BYTE *)v37 + 56) = v24;
          memset((char *)v37 + 88, 0, 0x15000uLL);
          *(_OWORD *)v38 = 0LL;
          *((_OWORD *)v38 + 1) = 0LL;
        }
        else
        {
          v38 = 0LL;
        }
        v39 = FlipQueueRef;
        *FlipQueueRef = v38;
        if ( !v38 )
        {
          v10 = -1073741801;
          break;
        }
        v40 = 0;
        while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                       (struct VIDSCH_FLIP_QUEUE *)((char *)*v39 + 1344 * v40 + 88),
                       a1) >= 0 )
        {
          v39 = FlipQueueRef;
          if ( ++v40 >= 0x40 )
            goto LABEL_51;
        }
        v10 = -1073741801;
LABEL_51:
        if ( v10 < 0 )
          goto LABEL_60;
        *((_DWORD *)*FlipQueueRef + 13) = 63;
        v36 = HIDWORD(v49) + 1;
      }
      if ( v10 >= 0 )
      {
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v8;
        *(_QWORD *)(v11 + 16) = a3;
        goto LABEL_56;
      }
LABEL_60:
      LODWORD(v49) = v61;
      v48 = (struct HwQueueStagingList **)a1;
      while ( 1 )
      {
        HIDWORD(v49) = v35;
        if ( v35 == *((_DWORD *)a1 + 36) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v48);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue, v47);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v48) = 0LL;
        }
        ++v35;
      }
LABEL_56:
      v41 = (_QWORD *)(a3 + 104);
      v42 = *v41;
      if ( *(_QWORD **)(*v41 + 8LL) != v41
        || (v43 = (_QWORD *)v41[1], (_QWORD *)*v43 != v41)
        || (*v43 = v42,
            v44 = (char *)a1 + 288,
            *(_QWORD *)(v42 + 8) = v43,
            v45 = *(_QWORD *)v44,
            *(char **)(*(_QWORD *)v44 + 8LL) != v44) )
      {
        __fastfail(3u);
      }
      *v41 = v45;
      v41[1] = v44;
      *(_QWORD *)(v45 + 8) = v41;
      *(_QWORD *)v44 = v41;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else if ( !a3 || a3 == *(_QWORD *)(v11 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v20 = *(_QWORD *)(a3 + 8);
        if ( !v20 )
          v20 = a3;
      }
      else
      {
        v20 = 0LL;
      }
      McTemplateK0pq_EtwWriteTransfer(v16, &EventClearFlipDevice, v17, v20, v61);
    }
    VidSchiClearPeriodicFrameNotifications(a1, v61);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
    v49 = &v48;
    v50 = 0;
    v48 = (struct HwQueueStagingList **)&v48;
    VidSchiCompletePendingFlip(&v48, a1, v61, a5);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v48);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v11);
      if ( a7 )
      {
        VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v61);
        VidSchiFlushPendingFlips(a1, v11);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
    }
    LOWORD(v22) = *(_WORD *)(v11 + 33160);
    if ( (_WORD)v22 )
    {
      do
      {
        v63 = 0;
        v23 = -1;
        v24 = !_BitScanForward((unsigned int *)&v25, (unsigned __int16)v22);
        if ( !v24 )
          v23 = v25;
        v26 = (unsigned int)v23;
        v27 = *((_QWORD *)a1 + 2);
        v63 = v26;
        FlipQueueRef = *(struct VIDSCH_FLIP_QUEUE ***)(3072 * v26 + v11 + 2440);
        v54 = 0;
        v55 = 0;
        v56 = 0;
        v52[1] = &FlipQueueRef;
        v57 = &v61;
        v58 = &v63;
        v52[0] = 1LL;
        v53 = 1;
        v59 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))DxgCoreInterface[76])(v27, 0LL, v52);
        v22 = (unsigned __int16)v22 & ~(1 << v63);
      }
      while ( (_WORD)v22 );
      LOWORD(v22) = *(_WORD *)(v11 + 33160);
    }
    v28 = *(_DWORD *)(v11 + 4);
    v29 = *(_QWORD *)(v11 + 16);
    v49 = &v48;
    v50 = 0;
    v48 = (struct HwQueueStagingList **)&v48;
    VidSchiUnreferenceDisplayingAllocations(&v48, v21, (struct _VIDSCH_PRESENT_INFO *)v11, v22);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v48);
    v30 = -1;
    LODWORD(v49) = v61;
    v48 = (struct HwQueueStagingList **)a1;
    while ( 1 )
    {
      HIDWORD(v49) = v30;
      if ( v30 == *((_DWORD *)a1 + 36) )
        break;
      v31 = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v48);
      if ( v31 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v31, v32);
        *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v48) = 0LL;
      }
      ++v30;
    }
    *(_BYTE *)(v11 + 8) = a6;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v29 && (v28 >= 4 || *((_BYTE *)a1 + 148)) )
      v10 = VidSchControlVSyncDevice(v29, 1LL, 0LL, v61);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v10;
}

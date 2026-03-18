/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C000317C
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0003B04 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001A8AC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C000FE70 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001ABA0 (-InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C001ADBC (VidSchiCompletePendingFlip.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C001AF04 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C001B4AC (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C001B4DC (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C001B554 (VidSchiClearPeriodicFrameNotifications.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchControlVSyncDevice @ 0x1C00A3490 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1C00AA260 (VidSchIsVSyncAvailable.c)
 *     VidSchiFlushPendingFlips @ 0x1C00AA2D4 (VidSchiFlushPendingFlips.c)
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
  __int64 v7; // r13
  struct _ERESOURCE *v8; // r15
  __int64 v10; // rdi
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // rax
  int v18; // esi
  unsigned __int16 v19; // r9
  __int64 v20; // r13
  int v21; // r14d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v23; // edx
  __int64 v24; // r8
  int v25; // r14d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r15
  bool v29; // zf
  _QWORD *v30; // rdx
  unsigned int v31; // r15d
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // r9
  int v39; // esi
  char v40; // cl
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // r14
  void *v46; // r15
  __int64 v47; // rcx
  struct VIDSCH_FLIP_QUEUE *v48; // rax
  unsigned int v49; // edx
  struct _VIDSCH_GLOBAL *v50; // [rsp+30h] [rbp-71h] BYREF
  __int128 v51; // [rsp+38h] [rbp-69h]
  struct _ERESOURCE *v52; // [rsp+48h] [rbp-59h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-31h] BYREF
  char v55; // [rsp+80h] [rbp-21h]
  int v56; // [rsp+81h] [rbp-20h]
  __int16 v57; // [rsp+85h] [rbp-1Ch]
  char v58; // [rsp+87h] [rbp-1Ah]
  unsigned int *v59; // [rsp+88h] [rbp-19h]
  int *v60; // [rsp+90h] [rbp-11h]
  __int64 v61; // [rsp+98h] [rbp-9h]
  PVOID v62; // [rsp+A0h] [rbp-1h]
  char v63; // [rsp+A8h] [rbp+7h]
  int v64; // [rsp+A9h] [rbp+8h]
  __int16 v65; // [rsp+ADh] [rbp+Ch]
  char v66; // [rsp+AFh] [rbp+Eh]
  PVOID BackTrace; // [rsp+F0h] [rbp+4Fh] BYREF
  unsigned int v68; // [rsp+F8h] [rbp+57h] BYREF
  int v69; // [rsp+108h] [rbp+67h] BYREF

  v68 = a2;
  v7 = a4;
  v8 = (struct _ERESOURCE *)((char *)a1 + 984);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v52 = (struct _ERESOURCE *)((char *)a1 + 984);
  v10 = *((_QWORD *)a1 + a2 + 400);
  v12 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 984), 1u);
  WdLogSingleEntry3(4LL, a3, v68, v7);
  if ( !(_DWORD)v7 )
  {
    if ( !a3 || a3 == *(_QWORD *)(v10 + 16) )
    {
      if ( (byte_1C006E941 & 1) != 0 )
      {
        if ( a3 )
        {
          v38 = *(_QWORD *)(a3 + 8);
          if ( !v38 )
            v38 = a3;
        }
        else
        {
          v38 = 0LL;
        }
        McTemplateK0pq_EtwWriteTransfer(v13, &EventClearFlipDevice, v14, v38, v68);
      }
      VidSchiClearPeriodicFrameNotifications(a1, v68);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
      *(_QWORD *)&v51 = &v50;
      BYTE8(v51) = 0;
      v50 = (struct _VIDSCH_GLOBAL *)&v50;
      VidSchiCompletePendingFlip(&v50, a1, v68, a5);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v50);
      if ( a5 == 6 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchiFlushPendingFlips(a1);
        if ( a7 )
        {
          VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v68);
          VidSchiFlushPendingFlips(a1);
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
      }
      v17 = *((_QWORD *)a1 + 2);
      if ( *(_BYTE *)(v17 + 4648) && *(_DWORD *)(v17 + 288) == 1 )
      {
        BackTrace = 0LL;
        RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
        LOWORD(v39) = *(_WORD *)(v10 + 44048);
        while ( (_WORD)v39 )
        {
          v69 = 0;
          v40 = -1;
          v29 = !_BitScanForward((unsigned int *)&v41, (unsigned __int16)v39);
          if ( !v29 )
            v40 = v41;
          v42 = (unsigned int)v40;
          v43 = *((_QWORD *)a1 + 2);
          v69 = v42;
          v52 = *(struct _ERESOURCE **)((v42 << 12) + v10 + 3088);
          v56 = 0;
          v57 = 0;
          v58 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v54[1] = &v52;
          v59 = &v68;
          v60 = &v69;
          v62 = BackTrace;
          v54[0] = 1LL;
          v63 = 0;
          v55 = 1;
          v61 = 0LL;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD *))DxgCoreInterface[81])(v43, 0LL, v54);
          v39 = (unsigned __int16)v39 & ~(1 << v69);
        }
      }
      v18 = *(_DWORD *)(v10 + 4);
      v19 = *(_WORD *)(v10 + 44048);
      v20 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)&v51 = &v50;
      v69 = v18;
      v50 = (struct _VIDSCH_GLOBAL *)&v50;
      BYTE8(v51) = 0;
      VidSchiUnreferenceDisplayingAllocations(
        (struct HwQueueStagingList *)&v50,
        a1,
        (struct _VIDSCH_PRESENT_INFO *)v10,
        v19);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v50);
      v21 = -1;
      LODWORD(v51) = v68;
      v50 = a1;
      while ( 1 )
      {
        DWORD1(v51) = v21;
        if ( v21 == *((_DWORD *)a1 + 38) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v50);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue, v23);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v50) = 0LL;
        }
        ++v21;
      }
      v37 = a6;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)(v10 + 8) = v37;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *((_BYTE *)a1 + 59) )
      {
        v44 = 0;
        if ( *((_DWORD *)a1 + 38) )
        {
          do
          {
            v45 = 280LL * v44;
            v46 = *(void **)(v45 + v10 + 416);
            if ( v46 )
            {
              *(_QWORD *)(v45 + v10 + 416) = 0LL;
              v47 = *((_QWORD *)a1 + 1);
              v50 = (struct _VIDSCH_GLOBAL *)__PAIR64__(v44, v68);
              v51 = 0LL;
              ((void (__fastcall *)(__int64, struct _VIDSCH_GLOBAL **))DxgCoreInterface[21])(v47, &v50);
              *(_DWORD *)(v45 + v10 + 368) = 0;
              ExFreePoolWithTag(v46, 0);
            }
            ++v44;
          }
          while ( v44 < *((_DWORD *)a1 + 38) );
          v8 = (struct _ERESOURCE *)((char *)a1 + 984);
        }
        v18 = v69;
      }
      if ( v20 && (v18 >= 4 || *((_BYTE *)a1 + 156)) )
        v12 = VidSchControlVSyncDevice(v20, 1LL, 0LL, v68);
    }
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v10 + 16);
  if ( v15 )
  {
    if ( v15 == a3 && *(_DWORD *)(v10 + 4) == (_DWORD)v7 )
      goto LABEL_5;
    WdLogSingleEntry5(0LL, 281LL, 0x10000LL, a1, a3, v68);
    __debugbreak();
LABEL_60:
    if ( !*((_BYTE *)a1 + 156) )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( (int)v7 < 4 )
    goto LABEL_60;
LABEL_20:
  if ( !(unsigned __int8)VidSchIsVSyncAvailable(a1, v68) )
  {
    v12 = -1073741823;
    goto LABEL_70;
  }
  LOBYTE(v24) = 1;
  v12 = VidSchControlVSyncDevice(a3, 1LL, v24, v68);
  if ( v12 < 0 )
  {
LABEL_70:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    *(_BYTE *)(v10 + 8) = a6;
    *(_DWORD *)(v10 + 4) = v7;
    *(_QWORD *)(v10 + 16) = a3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_5;
  }
LABEL_22:
  if ( (int)v7 < 3 )
    goto LABEL_70;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
  v25 = -1;
  LODWORD(v51) = v68;
  v26 = -1;
  v50 = a1;
LABEL_24:
  DWORD1(v51) = v26;
  if ( v26 == *((_DWORD *)a1 + 38) )
  {
    *(_BYTE *)(v10 + 8) = a6;
    *(_DWORD *)(v10 + 4) = v7;
    *(_QWORD *)(v10 + 16) = a3;
  }
  else
  {
    BackTrace = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v50);
    v27 = operator new(88184LL, 0x39616956u, 64LL);
    v28 = v27;
    if ( v27 )
    {
      *(_QWORD *)(v27 + 56) = 0LL;
      *(_QWORD *)(v27 + 64) = 0LL;
      *(_QWORD *)(v27 + 72) = 0LL;
      v29 = DWORD1(v51) == -1;
      *(_DWORD *)(v27 + 84) = DWORD1(v51);
      *(_QWORD *)(v27 + 88) = 0LL;
      *(_BYTE *)(v27 + 80) = v29;
      *(_QWORD *)(v27 + 96) = 0LL;
      *(_QWORD *)(v27 + 104) = 0LL;
      *(_DWORD *)(v27 + 112) = 0;
      memset((void *)(v27 + 120), 0, 0x15800uLL);
      v30 = BackTrace;
      *(_OWORD *)v28 = 0LL;
      *(_OWORD *)(v28 + 16) = 0LL;
      *(_OWORD *)(v28 + 32) = 0LL;
      *(_QWORD *)(v28 + 48) = 0LL;
      *v30 = v28;
      v31 = 0;
      while ( (int)_VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                     (_VIDSCH_FLIP_QUEUE_ENTRY *)(*v30 + 120LL + 1376LL * v31),
                     a1) >= 0 )
      {
        v30 = BackTrace;
        if ( ++v31 >= 0x40 )
        {
          *(_DWORD *)(*(_QWORD *)BackTrace + 76LL) = 63;
          v26 = DWORD1(v51) + 1;
          goto LABEL_24;
        }
      }
    }
    else
    {
      *(_QWORD *)BackTrace = 0LL;
    }
    v12 = -1073741801;
    LODWORD(v51) = v68;
    v50 = a1;
    while ( 1 )
    {
      DWORD1(v51) = v25;
      if ( v25 == *((_DWORD *)a1 + 38) )
        break;
      v48 = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v50);
      if ( v48 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v48, v49);
        *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v50) = 0LL;
      }
      ++v25;
    }
  }
  v32 = (_QWORD *)(a3 + 104);
  v33 = *v32;
  if ( *(_QWORD **)(*v32 + 8LL) != v32
    || (v34 = (_QWORD *)v32[1], (_QWORD *)*v34 != v32)
    || (*v34 = v33,
        v35 = (char *)a1 + 296,
        *(_QWORD *)(v33 + 8) = v34,
        v36 = *(_QWORD *)v35,
        *(char **)(*(_QWORD *)v35 + 8LL) != v35) )
  {
    __fastfail(3u);
  }
  *v32 = v36;
  v32[1] = v35;
  *(_QWORD *)(v36 + 8) = v32;
  *(_QWORD *)v35 = v32;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = v52;
LABEL_5:
  ExReleaseResourceLite(v8);
  return (unsigned int)v12;
}

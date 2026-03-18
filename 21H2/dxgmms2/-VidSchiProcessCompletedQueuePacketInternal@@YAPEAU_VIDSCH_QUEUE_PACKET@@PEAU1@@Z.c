/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000EC78 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00163B0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0016F08 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0018878 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B800 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C250 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0010BF0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0019E68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001A22C (VidSchiTryEnterIndependentFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00344AC (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C003679C (McTemplateK0pp_EtwWriteTransfer.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // r8
  int v9; // ecx
  struct _VIDSCH_QUEUE_PACKET **v10; // rdx
  struct _VIDSCH_QUEUE_PACKET **v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // esi
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  char *v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // eax
  unsigned int i; // esi
  unsigned int j; // esi
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // esi
  __int64 v35; // r12
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // r13
  unsigned int k; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rsi
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // r8
  struct _KEVENT *v47; // rsi
  struct _KEVENT *v48; // r13
  struct _KEVENT *v49; // rsi
  KIRQL v50; // r13
  struct _KEVENT *v51; // r12
  int v52; // eax
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int m; // esi
  __int64 v56; // r13
  __int64 v57; // r12
  struct _SLIST_ENTRY *v58; // rcx
  __int64 v59; // r13
  KSPIN_LOCK *v60; // r13
  char *v61; // rsi
  __int64 v62; // rcx
  char **v63; // rax
  char **v64; // rax
  _QWORD **v65; // rdi
  _QWORD *v66; // rsi
  _QWORD *v67; // rax
  struct _KEVENT *v69; // rcx
  __int64 v70; // rcx
  struct _KEVENT *v71; // rsi
  KIRQL v72; // r12
  __int64 v73; // rcx
  struct _KEVENT *v74; // r12
  struct _KEVENT *v75; // rsi
  PSLIST_HEADER v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r10
  int v80; // edx
  unsigned int v81; // r9d
  int v82; // eax
  char v83; // cl
  int v84; // eax
  unsigned int v85; // esi
  int v86; // eax
  __int64 v87; // r8
  char v88; // r12
  __int64 v89; // rdx
  int v90; // ecx
  __int64 v91; // rax
  void (__fastcall *v92)(_QWORD); // rax
  _QWORD *v93; // rax
  struct _KEVENT *v94; // rcx
  struct _KEVENT *v95; // rcx
  struct _KEVENT *v96; // rbx
  __int64 v97; // rcx
  char v98; // cl
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  int Flink; // ecx
  int v104; // ecx
  int v105; // ecx
  unsigned int v106; // [rsp+40h] [rbp-C0h]
  __int64 v107; // [rsp+48h] [rbp-B8h]
  __int64 v108; // [rsp+50h] [rbp-B0h]
  _QWORD v109[2]; // [rsp+78h] [rbp-88h] BYREF
  char v110; // [rsp+88h] [rbp-78h]
  char *v111; // [rsp+90h] [rbp-70h]
  __int64 v112; // [rsp+98h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v114; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v116; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v117; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v118; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v119; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v120; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+160h] [rbp+60h] BYREF
  int ListHead; // [rsp+1D0h] [rbp+D0h]
  KIRQL ListHeada; // [rsp+1D0h] [rbp+D0h]
  KIRQL ListHeadb; // [rsp+1D0h] [rbp+D0h]
  PSLIST_HEADER ListHeadc; // [rsp+1D0h] [rbp+D0h]
  KIRQL v126; // [rsp+1D8h] [rbp+D8h]
  int v127; // [rsp+1E0h] [rbp+E0h]
  unsigned int v128; // [rsp+1E8h] [rbp+E8h]

  v3 = *((_QWORD *)a1 + 11);
  v127 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v3 + 96);
  v6 = 0;
  v107 = *(_QWORD *)(v3 + 104);
  v108 = v5;
  v7 = *(_QWORD *)(v5 + 24);
  ListHead = 0;
  v112 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v97 = *(_QWORD *)(v3 + 56);
    if ( !v97 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v97 = v3;
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v97, &AbortQueuePacket, a3, a1, v97);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v37 = (__int64 *)*((_QWORD *)a1 + 36);
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37 + 3, 0xFFFFFFFF) == 1 )
      {
        v38 = *v37;
        if ( *v37 )
        {
          ++*(_DWORD *)(v38 + 28);
          if ( ExQueryDepthSList((PSLIST_HEADER)v38) >= *(_WORD *)(v38 + 16) )
          {
            ++*(_DWORD *)(v38 + 32);
            (*(void (__fastcall **)(__int64 *, __int64))(v38 + 56))(v37, v38);
            v5 = v108;
            *((_QWORD *)a1 + 36) = 0LL;
            goto LABEL_4;
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v38, (PSLIST_ENTRY)v37);
        }
        else
        {
          ExFreePoolWithTag(v37, 0);
        }
        v5 = v108;
      }
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
LABEL_4:
  v126 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1728), &LockHandle);
  v9 = *((_DWORD *)a1 + 20);
  v109[1] = v109;
  v109[0] = v109;
  v110 = 0;
  if ( (v9 & 0x10) != 0 )
  {
    v91 = *((_QWORD *)a1 + 11);
    *((_DWORD *)a1 + 20) = v9 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(v91 + 96) + 11240LL) != -1 )
    {
      v92 = *(void (__fastcall **)(_QWORD))(v7 + 3088);
      if ( v92 )
        v92(*(_QWORD *)(v7 + 3120));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    WdLogSingleEntry5(0LL, 281LL, 512LL, v7, v3, a1);
    __debugbreak();
    JUMPOUT(0x1C0022E3FLL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)v109, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v10 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v10[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_267;
  v11 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v11 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_267;
  *v11 = (struct _VIDSCH_QUEUE_PACKET *)v10;
  v10[1] = (struct _VIDSCH_QUEUE_PACKET *)v11;
  v12 = *(_QWORD *)(v3 + 664);
  if ( v12 == v3 + 664 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v42 = 13535LL;
LABEL_228:
      v41 = 10LL;
      goto LABEL_79;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v41 = 0LL;
      v42 = 13568LL;
LABEL_79:
      VidSchiUpdateContextStatus(v3, v41, v42);
    }
  }
  else
  {
    v13 = *(_DWORD *)(v12 + 48);
    v12 -= 32LL;
    if ( (v13 & 3) == 1 )
    {
      v112 = v12;
      *(_DWORD *)(v12 + 80) = v13 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v42 = 13516LL;
      goto LABEL_228;
    }
  }
  v14 = *((_DWORD *)a1 + 12);
  if ( v14 != 5 )
  {
    if ( v14 != 3 )
      goto LABEL_50;
    v15 = 0;
    v16 = *((_DWORD *)a1 + 218) & 0x3FF;
    if ( *(_BYTE *)(v7 + 156) )
      v15 = (*((_DWORD *)a1 + 218) >> 10) & 0x3FF;
    v17 = !_BitScanForward((unsigned int *)&v18, v16);
    v128 = v15;
    if ( v17 )
      LOBYTE(v18) = -1;
    v19 = (char)v18;
    v17 = !_BitScanForward((unsigned int *)&v18, v15);
    if ( v17 )
      LOBYTE(v18) = -1;
    v20 = (char)v18;
LABEL_24:
    v106 = v20;
    while ( v16 || v15 )
    {
      v21 = v20;
      if ( v19 < v20 )
        v21 = v19;
      v22 = (char *)a1 + v21 * ((8 * *((_DWORD *)a1 + 220) + 231) & 0xFFFFFFF8) + 872;
      v111 = v22;
      v23 = (void *)*((_QWORD *)v22 + 26);
      if ( v23 )
      {
        VidSchiReleaseSyncObjectReference(v23);
        v22 = v111;
        v15 = v128;
        v20 = v106;
        *((_QWORD *)v111 + 26) = 0LL;
      }
      v24 = (void *)*((_QWORD *)v22 + 28);
      if ( v19 >= v20 )
      {
        v98 = -1;
        v15 &= ~(1 << v20);
        v17 = !_BitScanForward((unsigned int *)&v99, v15);
        v128 = v15;
        if ( !v17 )
          v98 = v99;
        v20 = v98;
        goto LABEL_24;
      }
      if ( v24 )
      {
        VidSchiReleaseSyncObjectReference(v24);
        v15 = v128;
        v20 = v106;
        *((_QWORD *)v111 + 28) = 0LL;
      }
      v16 &= ~(1 << v19);
      v17 = !_BitScanForward((unsigned int *)&v25, v16);
      if ( v17 )
        LOBYTE(v25) = -1;
      v19 = (char)v25;
    }
    goto LABEL_49;
  }
  if ( (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_50;
  v26 = *((_QWORD *)a1 + 99);
  v27 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v26 )
  {
    *(_QWORD *)(v26 + 800) = *((_QWORD *)a1 + 100);
    v28 = *((_QWORD *)a1 + 100);
    if ( !v28 )
      goto LABEL_200;
  }
  else
  {
    v28 = *((_QWORD *)a1 + 100);
    if ( !v28 )
    {
      v29 = *((_DWORD *)a1 + 68);
      if ( (v29 & 2) != 0 )
      {
        v95 = (struct _KEVENT *)*((_QWORD *)a1 + 67);
        if ( (v29 & 8) != 0 )
        {
          ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[68])(v95, 0LL);
        }
        else
        {
          KeSetEvent(v95, 0, 0);
          ObfDereferenceObject(*((PVOID *)a1 + 67));
        }
        *((_QWORD *)a1 + 67) = 0LL;
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
        {
          if ( (*((_DWORD *)a1 + 68) & 4) != 0 )
            LOBYTE(v8) = 1;
          else
            LODWORD(v8) = 0;
          VidSchiCompleteSignalSyncObject((unsigned int)v109, *((_QWORD *)a1 + i + 35), v8, (_DWORD)a1 + 536 + 8 * i, 1);
        }
      }
      goto LABEL_45;
    }
  }
  *(_QWORD *)(v28 + 792) = *((_QWORD *)a1 + 99);
LABEL_200:
  *((_QWORD *)a1 + 99) = 0LL;
  *((_QWORD *)a1 + 100) = 0LL;
LABEL_45:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 )
  {
    for ( j = 0; j < *((_DWORD *)a1 + 69); ++j )
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + j + 35));
  }
  VidSchiCheckPendingDeviceCommand(v27, v12, v8);
LABEL_49:
  v6 = 0;
LABEL_50:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 980));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 2880));
      RtlSetBitEx(v7 + 488, *(unsigned __int16 *)(v5 + 4));
    }
    for ( k = 0; k < *((_DWORD *)a1 + 118); ++k )
    {
      if ( k >= 0x10 )
        break;
      v40 = *((_QWORD *)a1 + k + 60);
      *((_QWORD *)a1 + k + 60) = 0LL;
      if ( v40 )
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 104));
    }
  }
  v32 = *((unsigned int *)a1 + 18);
  v33 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v33 )
  {
    if ( (v32 & 0x400) == 0 || (v34 = 0, (v32 & 0x800) != 0) )
      v34 = 1;
    v35 = *((unsigned int *)a1 + 40);
    if ( (v32 & 0x40000) != 0 )
    {
      v36 = v34;
      if ( !v33 )
        v36 = 0;
    }
    else
    {
      if ( (v32 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 98) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
            goto LABEL_130;
          if ( v34 )
          {
            LOBYTE(v32) = 1;
            v127 = 1;
            ListHead = 1;
            VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v32, 0LL);
          }
          if ( (*((_DWORD *)a1 + 218) & 0x3FF) != 0 )
          {
            v100 = *(unsigned int *)(v3 + 88);
            v101 = *(_QWORD *)(v7 + 632);
            if ( (unsigned int)v100 < *(_DWORD *)(v7 + 704) )
              v101 += 8 * v100;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)v109,
              (struct _VIDSCH_GLOBAL *)v7,
              v35,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 872),
              *((_DWORD *)a1 + 102),
              1 << *(_BYTE *)(*(_QWORD *)v101 + 6LL),
              0,
              0);
          }
          if ( !ListHead )
            goto LABEL_130;
          goto LABEL_140;
        }
        v127 = v34;
      }
      v36 = v34;
    }
    ListHead = v36;
    if ( !v36 )
    {
LABEL_130:
      if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v34 )
        VidSchiSubmitPresentHistoryToken((unsigned int)v109, (_DWORD)a1, 0, 0, 0LL);
      if ( v127 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 736));
        v102 = v7;
        if ( *(_BYTE *)(v7 + 2212) )
          v102 = v7 + 4 * v35;
        _InterlockedDecrement((volatile signed __int32 *)(v102 + 740));
        _InterlockedDecrement((volatile signed __int32 *)(v107 + 1572));
        _InterlockedDecrement((volatile signed __int32 *)(v107 + 4LL * (unsigned int)v35 + 1508));
      }
      v71 = (struct _KEVENT *)(v7 + 1688);
      memset(&v115, 0, sizeof(v115));
      v72 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v115);
      if ( *(struct _KEVENT **)&v71->Header.Lock == v71 )
      {
LABEL_137:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v115);
        KeLowerIrql(v72);
        v6 = ListHead;
        if ( ListHead )
          goto LABEL_83;
        goto LABEL_81;
      }
      v96 = *(struct _KEVENT **)&v71->Header.Lock;
      while ( 1 )
      {
        if ( LODWORD(v96->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 4LL * LODWORD(v96[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 244LL) )
            goto LABEL_211;
        }
        else if ( ((__int64)v96[1].Header.WaitListHead.Flink & 0x10) != 0 )
        {
          Flink = (int)v96[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v96[5].Header.WaitListHead.Blink) = Flink;
          if ( Flink )
            goto LABEL_211;
        }
        ++v96[5].Header.LockNV;
        KeSetEvent(v96 + 4, 0, 0);
LABEL_211:
        v96 = *(struct _KEVENT **)&v96->Header.Lock;
        if ( v96 == v71 )
          goto LABEL_137;
      }
    }
    LOBYTE(v32) = 1;
    VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v32, 0LL);
LABEL_140:
    if ( (_DWORD)v35 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v107 + 4 * v35 + 1444));
      v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(v107 + 32) + 4LL))
                      + 8 * v35
                      + 88);
      if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v35 + 6456) + 8LL));
        ++**(_DWORD **)(v7 + 8 * v35 + 6456);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v73 + 8));
      ++*(_DWORD *)v73;
      if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
      {
        memset(&v114, 0, sizeof(v114));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1736), &v114);
        *(_DWORD *)(v107 + 4 * v35 + 508) = *((_DWORD *)a1 + 96);
        *(_QWORD *)(v107 + 8 * v35 + 576) = *((unsigned int *)a1 + 33);
        *(_QWORD *)(v107 + 8 * v35 + 704) = *((_QWORD *)a1 + 17);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
      }
    }
    goto LABEL_130;
  }
LABEL_81:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
LABEL_83:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v77 = *((_QWORD *)a1 + 11);
    if ( v77 )
      v78 = *(_QWORD *)(v77 + 104);
    else
      v78 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v79 = *(_QWORD *)(v78 + 32);
    v80 = *((_DWORD *)a1 + 18);
    if ( (v80 & 0x800000) != 0 )
      v81 = ((unsigned __int16)*((_DWORD *)a1 + 218) | (unsigned __int16)(*((_DWORD *)a1 + 218) >> 10)) & 0x3FF;
    else
      v81 = (1 << *(_DWORD *)(v79 + 152)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v82, v81);
    v83 = -1;
    if ( !v17 )
      v83 = v82;
    if ( v81 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v79 + 8LL * *((unsigned int *)a1 + 40) + 3200) + 280LL * v83 + 184),
          0xFFFFFFFF);
        v84 = 1 << v83;
        v83 = -1;
        v81 &= ~v84;
        v17 = !_BitScanForward((unsigned int *)&v84, v81);
        if ( !v17 )
          v83 = v84;
      }
      while ( v81 );
      v80 = *((_DWORD *)a1 + 18);
    }
    if ( (v80 & 0x800000) != 0 )
      v85 = ((unsigned __int16)*((_DWORD *)a1 + 218) | (unsigned __int16)(*((_DWORD *)a1 + 218) >> 10)) & 0x3FF;
    else
      v85 = (1 << *(_DWORD *)(v7 + 152)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v86, v85);
    if ( v17 )
      LOBYTE(v86) = -1;
    if ( v85 )
    {
      do
      {
        v87 = *((unsigned int *)a1 + 40);
        v88 = v86;
        v89 = *(int *)(*(_QWORD *)(v7 + 8 * v87 + 3200) + 280LL * (unsigned int)(char)v86 + 180);
        if ( (int)v89 > -1 && *(_DWORD *)(160 * v89 + *(_QWORD *)(v7 + 3328) + 112) == 1 )
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v109, (struct _VIDSCH_GLOBAL *)v7, v87, (char)v86);
        v85 &= ~(1 << v88);
        v17 = !_BitScanForward((unsigned int *)&v86, v85);
        if ( v17 )
          LOBYTE(v86) = -1;
      }
      while ( v85 );
      v6 = ListHead;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 724));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 2892));
  v43 = v107;
  _InterlockedDecrement((volatile signed __int32 *)(v107 + 1580));
  v44 = *((_DWORD *)a1 + 12);
  if ( (unsigned int)(v44 - 4) > 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v107 + 1584));
    v44 = *((_DWORD *)a1 + 12);
  }
  if ( !v44 && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *((unsigned int *)a1 + 40) + 3200) + 2996LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v7, v5, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v107, v45, v46);
  if ( v6 )
  {
    v74 = (struct _KEVENT *)(v107 + 120);
    memset(&v116, 0, sizeof(v116));
    ListHeadb = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v116);
    v75 = *(struct _KEVENT **)(v107 + 120);
    if ( *(struct _KEVENT **)&v74->Header.Lock == v74 )
    {
LABEL_151:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v116);
      KeLowerIrql(ListHeadb);
      v43 = v107;
      goto LABEL_88;
    }
    while ( LODWORD(v75->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v75[1].Header.Lock + 4LL * LODWORD(v75[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v75[1].Header.Lock + 244LL) )
        goto LABEL_149;
LABEL_150:
      v75 = *(struct _KEVENT **)&v75->Header.Lock;
      if ( v75 == v74 )
        goto LABEL_151;
    }
    if ( ((__int64)v75[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v104 = (int)v75[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v75[5].Header.WaitListHead.Blink) = v104;
      if ( v104 )
        goto LABEL_150;
    }
LABEL_149:
    ++v75[5].Header.LockNV;
    KeSetEvent(v75 + 4, 0, 0);
    goto LABEL_150;
  }
LABEL_88:
  if ( v127 )
  {
    VidSchiSignalRegisteredEvent(v7, v43 + 136);
    VidSchiSignalRegisteredEvent(v7, v7 + 1672);
    *(_QWORD *)(v7 + 1616) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1584), 0, 0);
  }
  v47 = (struct _KEVENT *)(v5 + 424);
  memset(&v117, 0, sizeof(v117));
  ListHeada = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v117);
  v48 = *(struct _KEVENT **)(v5 + 424);
  if ( *(struct _KEVENT **)&v47->Header.Lock != v47 )
  {
    do
    {
      if ( LODWORD(v48->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 4LL * LODWORD(v48[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v48[1].Header.Lock + 244LL) )
          goto LABEL_259;
      }
      else if ( ((__int64)v48[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v105 = (int)v48[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v48[5].Header.WaitListHead.Blink) = v105;
        if ( v105 )
          goto LABEL_259;
      }
      ++v48[5].Header.LockNV;
      KeSetEvent(v48 + 4, 0, 0);
LABEL_259:
      v48 = *(struct _KEVENT **)&v48->Header.Lock;
    }
    while ( v48 != v47 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v117);
  KeLowerIrql(ListHeada);
  v49 = (struct _KEVENT *)(v7 + 1656);
  memset(&v118, 0, sizeof(v118));
  v50 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1744), &v118);
  v51 = *(struct _KEVENT **)(v7 + 1656);
  if ( *(struct _KEVENT **)&v49->Header.Lock != v49 )
  {
    do
    {
      if ( LODWORD(v51->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v51[1].Header.Lock + 4LL * LODWORD(v51[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v51[1].Header.Lock + 244LL) )
          goto LABEL_186;
      }
      else if ( ((__int64)v51[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v90 = (int)v51[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v51[5].Header.WaitListHead.Blink) = v90;
        if ( v90 )
          goto LABEL_186;
      }
      ++v51[5].Header.LockNV;
      KeSetEvent(v51 + 4, 0, 0);
LABEL_186:
      v51 = *(struct _KEVENT **)&v51->Header.Lock;
    }
    while ( v51 != v49 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v118);
  KeLowerIrql(v50);
  *(_QWORD *)(v108 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v108 + 296), 0, 0);
  *(_QWORD *)(v7 + 1504) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 1472), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v52 = *((_DWORD *)a1 + 12);
    if ( !v52 || v52 == 7 )
    {
      v69 = (struct _KEVENT *)*((_QWORD *)a1 + 45);
      if ( v69 )
      {
        KeSetEvent(v69, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 45));
      }
    }
    else if ( v52 == 6 )
    {
      v94 = (struct _KEVENT *)*((_QWORD *)a1 + 38);
      if ( v94 )
        KeSetEvent(v94, 0, 0);
    }
  }
  v53 = *((_DWORD *)a1 + 12);
  if ( v53 <= 7 )
  {
    v54 = 137;
    if ( _bittest(&v54, v53) )
    {
      if ( !*(_BYTE *)(v3 + 909) )
      {
        for ( m = 0; m < *(_DWORD *)(v7 + 152); ++m )
        {
          v56 = m * ((8 * *((_DWORD *)a1 + 220) + 231) & 0xFFFFFFF8);
          v57 = *(_QWORD *)((char *)a1 + v56 + 1072);
          if ( v57 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), 0xFFFFFFFF) == 1 )
            {
              v76 = *(PSLIST_HEADER *)v57;
              ListHeadc = *(PSLIST_HEADER *)v57;
              if ( *(_QWORD *)v57 )
              {
                ++*((_DWORD *)&v76[1].HeaderX64 + 3);
                if ( ExQueryDepthSList(v76) < LOWORD(ListHeadc[1].Alignment) )
                {
                  ExpInterlockedPushEntrySList(ListHeadc, (PSLIST_ENTRY)v57);
                }
                else
                {
                  ++LODWORD(ListHeadc[2].Alignment);
                  ((void (__fastcall *)(__int64, PSLIST_HEADER))ListHeadc[3].Region)(v57, ListHeadc);
                }
              }
              else
              {
                ExFreePoolWithTag((PVOID)v57, 0);
              }
            }
            *(_QWORD *)((char *)a1 + v56 + 1072) = 0LL;
          }
        }
      }
      v58 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 + 38);
      if ( v58 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v58);
        *((_QWORD *)a1 + 38) = 0LL;
      }
    }
  }
  v59 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) )
  {
    v70 = *((_QWORD *)a1 + 77);
    if ( v70 || *((_QWORD *)a1 + 33) )
    {
      WdLogSingleEntry5(0LL, 281LL, 2560LL, a1, v70, *((_QWORD *)a1 + 33));
      __debugbreak();
      goto LABEL_267;
    }
  }
  WdLogSingleEntry2(4LL, a1, v3);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 0;
  v60 = (KSPIN_LOCK *)(v59 + 1736);
  v61 = (char *)a1 + 8;
  memset(&v119, 0, sizeof(v119));
  KeAcquireInStackQueuedSpinLock(v60, &v119);
  v62 = *((_QWORD *)a1 + 1);
  if ( *(char **)(*(_QWORD *)v61 + 8LL) != v61 || (v63 = (char **)*((_QWORD *)a1 + 2), *v63 != v61) )
LABEL_267:
    __fastfail(3u);
  *v63 = (char *)v62;
  *(_QWORD *)(v62 + 8) = v63;
  if ( v3 != -776 )
    --*(_DWORD *)(v3 + 776);
  KeReleaseInStackQueuedSpinLock(&v119);
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v60, v3 + 736, (_QWORD *)a1 + 1, (_DWORD *)(v3 + 752));
  }
  else
  {
    memset(&v120, 0, sizeof(v120));
    KeAcquireInStackQueuedSpinLock(v60, &v120);
    v64 = *(char ***)(v3 + 720);
    if ( *v64 != (char *)(v3 + 712) )
      goto LABEL_267;
    *(_QWORD *)v61 = v3 + 712;
    *((_QWORD *)a1 + 2) = v64;
    *v64 = v61;
    *(_QWORD *)(v3 + 720) = v61;
    if ( v3 != -728 )
      ++*(_DWORD *)(v3 + 728);
    KeReleaseInStackQueuedSpinLock(&v120);
  }
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v65 = (_QWORD **)(v3 + 712);
    while ( 1 )
    {
      memset(&v113, 0, sizeof(v113));
      v66 = 0LL;
      KeAcquireInStackQueuedSpinLock(v60, &v113);
      v67 = *v65;
      if ( *v65 == v65 )
        break;
      if ( *(_DWORD *)(v3 + 728) > 0x10u )
      {
        v66 = *v65;
        if ( (_QWORD **)v67[1] != v65 )
          goto LABEL_267;
        v93 = (_QWORD *)*v67;
        if ( (_QWORD *)v93[1] != v66 )
          goto LABEL_267;
        *v65 = v93;
        v93[1] = v65;
        --*(_DWORD *)(v3 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v113);
      if ( !v66 )
        goto LABEL_119;
      ExFreePoolWithTag(v66 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&v113);
  }
LABEL_119:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v109);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v126);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v109);
  return (struct _VIDSCH_QUEUE_PACKET *)v112;
}

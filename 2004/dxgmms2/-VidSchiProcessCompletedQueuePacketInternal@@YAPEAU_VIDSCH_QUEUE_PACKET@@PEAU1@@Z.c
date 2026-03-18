/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000F448 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0012740 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0012C3C (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C001510C (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0002550 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00046E0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007330 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000A5D0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BF88 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000C000 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C8B0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000EBF8 (VidSchiSignalRegisteredEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A238 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002D338 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0031FA4 (VidSchiTryEnterIndependentFlip.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  struct _VIDSCH_QUEUE_PACKET **v11; // rdx
  struct _VIDSCH_QUEUE_PACKET **v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // eax
  unsigned int i; // esi
  unsigned int j; // esi
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r12d
  __int64 v24; // r13
  int v25; // esi
  struct _KEVENT *v26; // rsi
  KIRQL v27; // r12
  struct _KEVENT *v28; // r13
  int v29; // ecx
  struct _KEVENT *v30; // rsi
  KIRQL v31; // r13
  struct _KEVENT *v32; // r12
  unsigned __int64 m; // rsi
  __int64 v34; // r12
  KIRQL v35; // r13
  struct _KEVENT *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // r15
  struct _SLIST_ENTRY *v42; // rcx
  KSPIN_LOCK *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  KSPIN_LOCK *v47; // rcx
  unsigned __int64 *v48; // rax
  _QWORD **v49; // rdi
  _QWORD *v50; // rsi
  _QWORD *v51; // rax
  __int64 *v53; // rsi
  __int64 v54; // r13
  unsigned int k; // ecx
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r10
  int v63; // edx
  unsigned int v64; // r9d
  bool v65; // zf
  int v66; // eax
  char v67; // cl
  int v68; // eax
  unsigned int v69; // esi
  int v70; // eax
  __int64 v71; // r8
  char v72; // r12
  __int64 v73; // rdx
  int v74; // ecx
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  void (__fastcall *v78)(_QWORD); // rax
  struct _KEVENT *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  int Flink; // ecx
  int v84; // ecx
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // [rsp+40h] [rbp-C0h]
  __int64 v88; // [rsp+48h] [rbp-B8h]
  _QWORD v89[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v92; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v93; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v95; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v96; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+130h] [rbp+30h] BYREF
  KIRQL v100; // [rsp+1A0h] [rbp+A0h]
  int v101; // [rsp+1A8h] [rbp+A8h]
  int v102; // [rsp+1B0h] [rbp+B0h]
  int v103; // [rsp+1B8h] [rbp+B8h]

  v3 = *((_QWORD *)a1 + 11);
  v102 = 0;
  v5 = 0;
  v101 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v88 = *(_QWORD *)(v3 + 104);
  v87 = v6;
  v7 = *(_QWORD *)(v6 + 24);
  v103 = 0;
  v91 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v76 = *(_QWORD *)(v3 + 56);
    if ( !v76 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v76 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v76, &AbortQueuePacket, a3, a1, v76);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v53 = (__int64 *)*((_QWORD *)a1 + 36);
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v53 + 3, 0xFFFFFFFF) == 1 )
      {
        v54 = *v53;
        if ( *v53 )
        {
          ++*(_DWORD *)(v54 + 28);
          if ( ExQueryDepthSList((PSLIST_HEADER)v54) >= *(_WORD *)(v54 + 16) )
          {
            ++*(_DWORD *)(v54 + 32);
            (*(void (__fastcall **)(__int64 *, __int64))(v54 + 56))(v53, v54);
            v6 = v87;
            *((_QWORD *)a1 + 36) = 0LL;
            goto LABEL_4;
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v54, (PSLIST_ENTRY)v53);
        }
        else
        {
          ExFreePoolWithTag(v53, 0);
        }
        v6 = v87;
      }
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
LABEL_4:
  v100 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1712), &LockHandle);
  v10 = *((unsigned int *)a1 + 20);
  v89[1] = v89;
  v89[0] = v89;
  v90 = 0;
  if ( (v10 & 0x10) != 0 )
  {
    v77 = *((_QWORD *)a1 + 11);
    *((_DWORD *)a1 + 20) = v10 & 0xFFFFFFEF;
    v10 = *(_QWORD *)(v77 + 96);
    v8 = *(unsigned int *)(v10 + 11224);
    if ( (_DWORD)v8 != -1 )
    {
      v78 = *(void (__fastcall **)(_QWORD))(v7 + 2992);
      if ( v78 )
        v78(*(_QWORD *)(v7 + 3024));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v8);
    v86[3] = 281LL;
    v86[4] = 512LL;
    v86[5] = v7;
    v86[6] = v3;
    v86[7] = a1;
    WdLogEvent5_WdCriticalError(v86);
    __debugbreak();
    JUMPOUT(0x1C001BEEALL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)v89, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v11 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v11[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_224;
  v12 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v12 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_224;
  *v12 = (struct _VIDSCH_QUEUE_PACKET *)v11;
  v11[1] = (struct _VIDSCH_QUEUE_PACKET *)v12;
  v13 = *(_QWORD *)(v3 + 664);
  if ( v13 == v3 + 664 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v57 = 10LL;
      v58 = 12887LL;
      goto LABEL_116;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v57 = 0LL;
      v58 = 12920LL;
LABEL_116:
      VidSchiUpdateContextStatus(v3, v57, v58);
    }
  }
  else
  {
    v14 = *(_DWORD *)(v13 + 48);
    v13 -= 32LL;
    if ( (v14 & 3) == 1 )
    {
      v91 = v13;
      *(_DWORD *)(v13 + 80) = v14 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v57 = 10LL;
      v58 = 12868LL;
      goto LABEL_116;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_28;
  v15 = *((_QWORD *)a1 + 99);
  v16 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v15 )
  {
    *(_QWORD *)(v15 + 800) = *((_QWORD *)a1 + 100);
    v17 = *((_QWORD *)a1 + 100);
    if ( !v17 )
      goto LABEL_166;
  }
  else
  {
    v17 = *((_QWORD *)a1 + 100);
    if ( !v17 )
    {
      v18 = *((_DWORD *)a1 + 68);
      if ( (v18 & 2) != 0 )
      {
        v79 = (struct _KEVENT *)*((_QWORD *)a1 + 67);
        if ( (v18 & 8) != 0 )
        {
          ((void (__fastcall *)(struct _KEVENT *, __int64))DxgCoreInterface[63])(v79, v13);
        }
        else
        {
          KeSetEvent(v79, 0, 0);
          ObfDereferenceObject(*((PVOID *)a1 + 67));
        }
        *((_QWORD *)a1 + 67) = 0LL;
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
        {
          if ( (*((_DWORD *)a1 + 68) & 4) != 0 )
            LOBYTE(v9) = 1;
          else
            v9 = 0;
          VidSchiCompleteSignalSyncObject((unsigned int)v89, *((_QWORD *)a1 + i + 35), v9, (_DWORD)a1 + 8 * (i + 67), 1);
        }
      }
      goto LABEL_24;
    }
  }
  *(_QWORD *)(v17 + 792) = *((_QWORD *)a1 + 99);
LABEL_166:
  *((_QWORD *)a1 + 99) = 0LL;
  *((_QWORD *)a1 + 100) = 0LL;
LABEL_24:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 )
  {
    for ( j = 0; j < *((_DWORD *)a1 + 69); ++j )
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + j + 35));
  }
  VidSchiCheckPendingDeviceCommand(v16);
  v5 = 0;
LABEL_28:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 964));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2864));
      RtlSetBitEx(v7 + 480);
    }
    for ( k = 0; k < *((_DWORD *)a1 + 116); ++k )
    {
      if ( k >= 0x10 )
        break;
      v56 = *((_QWORD *)a1 + k + 59);
      *((_QWORD *)a1 + k + 59) = 0LL;
      if ( v56 )
        _InterlockedDecrement((volatile signed __int32 *)(v56 + 104));
    }
  }
  v21 = *((unsigned int *)a1 + 18);
  v22 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v22 )
  {
    if ( (v21 & 0x400) == 0 || (v23 = 0, (v21 & 0x800) != 0) )
      v23 = 1;
    v24 = *((unsigned int *)a1 + 40);
    if ( (v21 & 0x40000) != 0 )
    {
      v25 = v23;
      if ( !v22 )
        v25 = 0;
    }
    else
    {
      if ( (v21 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 98) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
            goto LABEL_38;
          if ( !v23 )
          {
            v25 = 0;
            goto LABEL_194;
          }
          v25 = 1;
          v102 = 1;
          v101 = 1;
          v103 = 1;
LABEL_121:
          LOBYTE(v21) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v21, 0LL);
          if ( !v103 )
          {
LABEL_122:
            if ( v25 && (_DWORD)v24 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v88 + 4 * v24 + 1444));
              v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 + 40) + 24LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v88 + 32) + 4LL))
                              + 8 * v24
                              + 88);
              if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v24 + 6352) + 8LL));
                ++**(_DWORD **)(v7 + 8 * v24 + 6352);
              }
              _InterlockedDecrement((volatile signed __int32 *)(v59 + 8));
              ++*(_DWORD *)v59;
              if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1720), &v92);
                *(_DWORD *)(v88 + 4 * v24 + 508) = *((_DWORD *)a1 + 96);
                *(_QWORD *)(v88 + 8 * v24 + 576) = *((unsigned int *)a1 + 33);
                *(_QWORD *)(v88 + 8 * v24 + 704) = *((_QWORD *)a1 + 17);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v92);
              }
            }
LABEL_38:
            if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v23 )
              VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v89, a1, 0LL, 0LL, 0LL);
            if ( v102 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 728));
              v82 = v7;
              if ( *(_BYTE *)(v7 + 2132) )
                v82 = v7 + 4 * v24;
              _InterlockedDecrement((volatile signed __int32 *)(v82 + 732));
              _InterlockedDecrement((volatile signed __int32 *)(v88 + 1572));
              _InterlockedDecrement((volatile signed __int32 *)(v88 + 4 * v24 + 1508));
            }
            v26 = (struct _KEVENT *)(v7 + 1672);
            v27 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1728), &v93);
            v28 = *(struct _KEVENT **)(v7 + 1672);
            if ( *(struct _KEVENT **)&v26->Header.Lock == v26 )
            {
LABEL_45:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v93);
              KeLowerIrql(v27);
              v5 = v101;
              if ( v101 )
                goto LABEL_50;
              goto LABEL_48;
            }
            while ( 1 )
            {
              if ( LODWORD(v28->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v28[1].Header.Lock + 4LL * LODWORD(v28[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v28[1].Header.Lock + 244LL) )
                  goto LABEL_207;
              }
              else if ( ((__int64)v28[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                Flink = (int)v28[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v28[5].Header.WaitListHead.Blink) = Flink;
                if ( Flink )
                  goto LABEL_207;
              }
              ++v28[5].Header.LockNV;
              KeSetEvent(v28 + 4, 0, 0);
LABEL_207:
              v28 = *(struct _KEVENT **)&v28->Header.Lock;
              if ( v28 == v26 )
                goto LABEL_45;
            }
          }
LABEL_194:
          if ( (*((_DWORD *)a1 + 210) & 0x3FF) != 0 )
          {
            v80 = *(unsigned int *)(v3 + 88);
            v81 = *(_QWORD *)(v7 + 624);
            if ( (unsigned int)v80 < *(_DWORD *)(v7 + 696) )
              v81 += 8 * v80;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)v89,
              (struct _VIDSCH_GLOBAL *)v7,
              v24,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 840),
              *((_DWORD *)a1 + 102),
              1 << *(_BYTE *)(*(_QWORD *)v81 + 6LL),
              0,
              0);
          }
          goto LABEL_122;
        }
        v102 = v23;
      }
      v25 = v23;
    }
    v101 = v25;
    if ( !v25 )
      goto LABEL_38;
    goto LABEL_121;
  }
LABEL_48:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
LABEL_50:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v60 = *((_QWORD *)a1 + 11);
    if ( v60 )
      v61 = *(_QWORD *)(v60 + 104);
    else
      v61 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v62 = *(_QWORD *)(v61 + 32);
    v63 = *((_DWORD *)a1 + 18);
    if ( (v63 & 0x800000) != 0 )
      v64 = ((unsigned __int16)*((_DWORD *)a1 + 210) | (unsigned __int16)(*((_DWORD *)a1 + 210) >> 10)) & 0x3FF;
    else
      v64 = (1 << *(_DWORD *)(v62 + 144)) - 1;
    v65 = !_BitScanForward((unsigned int *)&v66, v64);
    v67 = -1;
    if ( !v65 )
      v67 = v66;
    if ( v64 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v62 + 8LL * *((unsigned int *)a1 + 40) + 3104) + 216LL * v67 + 176),
          0xFFFFFFFF);
        v68 = 1 << v67;
        v67 = -1;
        v64 &= ~v68;
        v65 = !_BitScanForward((unsigned int *)&v68, v64);
        if ( !v65 )
          v67 = v68;
      }
      while ( v64 );
      v63 = *((_DWORD *)a1 + 18);
    }
    if ( (v63 & 0x800000) != 0 )
      v69 = ((unsigned __int16)*((_DWORD *)a1 + 210) | (unsigned __int16)(*((_DWORD *)a1 + 210) >> 10)) & 0x3FF;
    else
      v69 = (1 << *(_DWORD *)(v7 + 144)) - 1;
    v65 = !_BitScanForward((unsigned int *)&v70, v69);
    if ( v65 )
      LOBYTE(v70) = -1;
    if ( v69 )
    {
      do
      {
        v71 = *((unsigned int *)a1 + 40);
        v72 = v70;
        v73 = *(int *)(*(_QWORD *)(v7 + 8 * v71 + 3104) + 216LL * (unsigned int)(char)v70 + 172);
        if ( (int)v73 > -1 && *(_DWORD *)(152 * v73 + *(_QWORD *)(v7 + 3232) + 112) == 1 )
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v89, (struct _VIDSCH_GLOBAL *)v7, v71, (char)v70);
        v69 &= ~(1 << v72);
        v65 = !_BitScanForward((unsigned int *)&v70, v69);
        if ( v65 )
          LOBYTE(v70) = -1;
      }
      while ( v69 );
      v5 = v101;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 716));
  _InterlockedDecrement((volatile signed __int32 *)(v87 + 2876));
  _InterlockedDecrement((volatile signed __int32 *)(v88 + 1580));
  v29 = *((_DWORD *)a1 + 12);
  if ( (unsigned int)(v29 - 4) > 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v88 + 1584));
    v29 = *((_DWORD *)a1 + 12);
  }
  if ( !v29 && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *((unsigned int *)a1 + 40) + 3104) + 2348LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 784));
  VidSchiProfilePerformanceTick(9, v7, v87, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v88);
  if ( v5 )
    VidSchiSignalRegisteredEvent(v7, v88 + 120);
  if ( v102 )
  {
    VidSchiSignalRegisteredEvent(v7, v88 + 136);
    VidSchiSignalRegisteredEvent(v7, v7 + 1656);
    *(_QWORD *)(v7 + 1600) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1568), 0, 0);
  }
  v30 = (struct _KEVENT *)(v87 + 424);
  v31 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1728), &v94);
  v32 = *(struct _KEVENT **)(v87 + 424);
  if ( *(struct _KEVENT **)&v30->Header.Lock != v30 )
  {
    do
    {
      if ( LODWORD(v32->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v32[1].Header.Lock + 4LL * LODWORD(v32[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v32[1].Header.Lock + 244LL) )
          goto LABEL_218;
      }
      else if ( ((__int64)v32[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v84 = (int)v32[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v32[5].Header.WaitListHead.Blink) = v84;
        if ( v84 )
          goto LABEL_218;
      }
      ++v32[5].Header.LockNV;
      KeSetEvent(v32 + 4, 0, 0);
LABEL_218:
      v32 = *(struct _KEVENT **)&v32->Header.Lock;
    }
    while ( v32 != v30 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
  KeLowerIrql(v31);
  m = v7 + 1640;
  v34 = v7;
  v35 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1728), &v95);
  v36 = *(struct _KEVENT **)(v7 + 1640);
  if ( *(_QWORD *)m != m )
  {
    do
    {
      if ( LODWORD(v36->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v36[1].Header.Lock + 4LL * LODWORD(v36[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v36[1].Header.Lock + 244LL) )
          goto LABEL_157;
      }
      else if ( ((__int64)v36[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v74 = (int)v36[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v36[5].Header.WaitListHead.Blink) = v74;
        if ( v74 )
          goto LABEL_157;
      }
      ++v36[5].Header.LockNV;
      KeSetEvent(v36 + 4, 0, 0);
LABEL_157:
      v36 = *(struct _KEVENT **)&v36->Header.Lock;
    }
    while ( v36 != (struct _KEVENT *)m );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v95);
  KeLowerIrql(v35);
  *(_QWORD *)(v87 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v87 + 296), 0, 0);
  *(_QWORD *)(v34 + 1488) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v34 + 1456), 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v39 = *((_DWORD *)a1 + 12);
    if ( !v39 || v39 == 7 )
    {
      v38 = *((_QWORD *)a1 + 45);
      if ( v38 )
      {
        KeSetEvent((PRKEVENT)v38, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 45));
      }
    }
    else if ( v39 == 6 )
    {
      v38 = *((_QWORD *)a1 + 38);
      if ( v38 )
        KeSetEvent((PRKEVENT)v38, 0, 0);
    }
  }
  v40 = *((_DWORD *)a1 + 12);
  if ( v40 <= 7 )
  {
    v38 = 137LL;
    if ( _bittest((const int *)&v38, v40) )
    {
      if ( !*(_BYTE *)(v3 + 901) )
      {
        for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v34 + 144); m = (unsigned int)(m + 1) )
        {
          v41 = (unsigned int)m * ((8 * *((_DWORD *)a1 + 212) + 199) & 0xFFFFFFF8);
          v42 = *(struct _SLIST_ENTRY **)((char *)a1 + v41 + 1040);
          if ( v42 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v42);
            *(_QWORD *)((char *)a1 + v41 + 1040) = 0LL;
          }
        }
      }
      v38 = *((_QWORD *)a1 + 38);
      if ( v38 )
      {
        CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v38);
        *((_QWORD *)a1 + 38) = 0LL;
      }
    }
  }
  v43 = *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !*((_DWORD *)a1 + 12) && (*((_QWORD *)a1 + 76) || *((_QWORD *)a1 + 33)) )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
    v85[3] = 281LL;
    v85[4] = 2560LL;
    v85[5] = a1;
    v85[6] = *((_QWORD *)a1 + 76);
    v85[7] = *((_QWORD *)a1 + 33);
    WdLogEvent5_WdCriticalError(v85);
    __debugbreak();
LABEL_223:
    VidSchiInterlockedInsertTailList(v47, v3 + 736, (_QWORD *)m, (_DWORD *)(v3 + 752));
    goto LABEL_83;
  }
  v44 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v44 + 24) = a1;
  *(_QWORD *)(v44 + 32) = v3;
  WdLogEvent5_WdEvent(v44);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v43 += 215;
  *((_DWORD *)a1 + 13) = 0;
  m = (unsigned __int64)a1 + 8;
  KeAcquireInStackQueuedSpinLock(v43, &v96);
  v45 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(*(_QWORD *)m + 8LL) != m )
    goto LABEL_224;
  v46 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( *v46 != m )
    goto LABEL_224;
  *v46 = v45;
  *(_QWORD *)(v45 + 8) = v46;
  if ( v3 != -776 )
    --*(_DWORD *)(v3 + 776);
  KeReleaseInStackQueuedSpinLock(&v96);
  v47 = v43;
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
    goto LABEL_223;
  KeAcquireInStackQueuedSpinLock(v43, &v97);
  v48 = *(unsigned __int64 **)(v3 + 720);
  if ( *v48 != v3 + 712 )
LABEL_224:
    __fastfail(3u);
  *(_QWORD *)m = v3 + 712;
  *((_QWORD *)a1 + 2) = v48;
  *v48 = m;
  *(_QWORD *)(v3 + 720) = m;
  if ( v3 != -728 )
    ++*(_DWORD *)(v3 + 728);
  KeReleaseInStackQueuedSpinLock(&v97);
LABEL_83:
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v49 = (_QWORD **)(v3 + 712);
    while ( 1 )
    {
      v50 = 0LL;
      KeAcquireInStackQueuedSpinLock(v43, &v98);
      v51 = *v49;
      if ( *v49 != v49 && *(_DWORD *)(v3 + 728) > 0x10u )
      {
        v50 = *v49;
        if ( (_QWORD **)v51[1] != v49 )
          goto LABEL_224;
        v75 = (_QWORD *)*v51;
        if ( (_QWORD *)v75[1] != v50 )
          goto LABEL_224;
        *v49 = v75;
        v75[1] = v49;
        --*(_DWORD *)(v3 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v98);
      if ( !v50 )
        break;
      ExFreePoolWithTag(v50 - 1, 0);
    }
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v89);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v100);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v89);
  return (struct _VIDSCH_QUEUE_PACKET *)v91;
}

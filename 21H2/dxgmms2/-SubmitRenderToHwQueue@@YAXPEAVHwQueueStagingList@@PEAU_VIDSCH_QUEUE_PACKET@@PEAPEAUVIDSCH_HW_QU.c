/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003E5D0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F222 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0018990 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001E908 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003BCE4 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0040738 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x1C0041778 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 */

void __fastcall SubmitRenderToHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r14
  bool v10; // zf
  unsigned int v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  LARGE_INTEGER PerformanceCounter; // r15
  LONG v20; // eax
  int v21; // r8d
  LONG v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // r9
  struct _SLIST_ENTRY *v25; // rcx
  LARGE_INTEGER *v26; // rbx
  __int128 v27; // xmm1
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h]
  __int128 v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+70h] [rbp-90h]
  _DWORD v32[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  _BYTE v35[128]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *((_QWORD *)a2 + 12);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_QWORD *)(v7 + 24);
  ++*(_DWORD *)(v3 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( *(_QWORD *)(v3 + 104) && *((_DWORD *)a2 + 194) == 1 )
    VidSchiSignalSyncObjectsFromCpu(a1, 1u, (struct _VIDSCH_SYNC_OBJECT **)(v3 + 104), 0, (char *)a2 + 816, a3);
  if ( (*(_BYTE *)(v9 + 3036) & 1) != 0
    || *(_DWORD *)(v9 + 3012)
    || *(_BYTE *)(v8 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 200), 0, 0)
    || *(_BYTE *)(v3 + 145) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v3);
    VidSchiCompleteHwQueuePacket(a1, a2, 0);
  }
  else
  {
    v10 = (*((_DWORD *)a2 + 18) & 0x4000) == 0;
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    if ( !v10 && (*(_DWORD *)(v8 + 48) & 2) != 0 )
    {
      *((_DWORD *)a2 + 20) |= 0x80u;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 812));
    }
    if ( (*((_DWORD *)a2 + 16) & 0x80) != 0 )
    {
      v11 = *((_DWORD *)a2 + 118);
      memset(v35, 0, sizeof(v35));
      if ( v11 )
      {
        v12 = v35;
        v13 = v11;
        do
        {
          *v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v12 + a2 - (struct _VIDSCH_QUEUE_PACKET *)v35 + 480) + 96LL)
                           + 40LL);
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      v32[0] = v11;
      v32[1] = 0;
      v33 = v35;
      v34 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 8LL);
      ((void (__fastcall *)(_QWORD, __int64, _DWORD *))DxgCoreInterface[81])(*(_QWORD *)(v9 + 16), 1LL, v32);
    }
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v7);
    v14 = *((_QWORD *)a2 + 36);
    *((_QWORD *)&v30 + 1) = 0LL;
    *(_QWORD *)&v28 = *(_QWORD *)(v3 + 112);
    *((_QWORD *)&v28 + 1) = *((_QWORD *)a2 + 96);
    v31 = *((_OWORD *)a2 + 49);
    *(_QWORD *)&v29 = *((_QWORD *)a2 + 39);
    DWORD2(v29) = *((_DWORD *)a2 + 81);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      v16 = v14 + 16;
      HIDWORD(v29) = v15;
    }
    else
    {
      v17 = *((_QWORD *)a2 + 35);
      if ( v17 )
      {
        HIDWORD(v29) = *((_DWORD *)a2 + 87);
        v16 = *(_QWORD *)(v17 + 128);
      }
      else
      {
        HIDWORD(v29) = 0;
        v16 = 0LL;
      }
    }
    v18 = *((_DWORD *)a2 + 18);
    *(_QWORD *)&v30 = v16;
    DWORD2(v30) = DWORD2(v30) & 0xFFFFFFF9 | ((v18 & 0x80 | (v18 >> 10) & 0x40) >> 5);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v20 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[54])(*(_QWORD *)(v9 + 8), &v28);
    v22 = v20;
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v23 = *((_QWORD *)a2 + 12);
      v24 = *(_QWORD *)(v23 + 48);
      if ( !v24 )
        LODWORD(v24) = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v23,
        *(_DWORD *)(v8 + 1576),
        v21,
        v24,
        SBYTE8(v28),
        v29,
        v20,
        *(_DWORD *)(v8 + 1576));
    }
    v25 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 36);
    if ( v25 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v25);
      *((_QWORD *)a2 + 36) = 0LL;
    }
    v26 = (LARGE_INTEGER *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
    memset(v26, 0, 0x70uLL);
    *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
    v26->LowPart = 8;
    v26[10] = *(LARGE_INTEGER *)((char *)a2 + 768);
    v26[11].LowPart = *((_DWORD *)a2 + 194);
    *(_OWORD *)&v26[2].LowPart = v28;
    *(_OWORD *)&v26[4].LowPart = v29;
    *(_OWORD *)&v26[6].LowPart = v30;
    v27 = v31;
    v26[11].HighPart = v22;
    v26[1] = PerformanceCounter;
    *(_OWORD *)&v26[8].LowPart = v27;
    if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v8, 19, 0LL);
  }
}

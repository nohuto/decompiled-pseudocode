/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035C90
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00381E0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0014160 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00364F4 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036608 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00386B8 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x1C0039B50 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 */

void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r15d
  __int64 v18; // r9
  _DWORD *v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+70h] [rbp-10h]

  v2 = *((_QWORD *)a2 + 12);
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v6 + 24);
  ++*(_DWORD *)(v2 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( (*(_BYTE *)(v8 + 2940) & 1) != 0
    || *(_DWORD *)(v8 + 2916)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v2);
    VidSchiCompleteHwQueuePacket(a1, a2);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6);
    v9 = 360LL * *(unsigned __int16 *)(v6 + 6);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
    if ( !*(_BYTE *)(v9 + *(_QWORD *)(v10 + 2560) + 48) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
      v11[3] = 281LL;
      v11[4] = 24576LL;
      v11[5] = 0LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
    }
    v12 = *((_QWORD *)a2 + 35);
    *((_QWORD *)&v23 + 1) = 0LL;
    *(_QWORD *)&v21 = *(_QWORD *)(v2 + 112);
    *((_QWORD *)&v21 + 1) = *((_QWORD *)a2 + 36);
    v24 = *(_OWORD *)((char *)a2 + 296);
    *(_QWORD *)&v22 = *(_QWORD *)(v12 + 96) + *((unsigned int *)a2 + 81);
    DWORD2(v22) = *((_DWORD *)a2 + 82);
    v13 = *(_QWORD *)(v12 + 128) + *((unsigned int *)a2 + 83);
    *((_QWORD *)&v23 + 1) = 1LL;
    *(_QWORD *)&v23 = v13;
    HIDWORD(v22) = *((_DWORD *)a2 + 84);
    v14 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[53])(*(_QWORD *)(v8 + 8), &v21);
    v17 = v14;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
      if ( !v18 )
        v18 = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        *(_DWORD *)(v7 + 1576),
        v15,
        v16,
        v18,
        SBYTE8(v21),
        v22,
        v14,
        *(_DWORD *)(v7 + 1576));
    }
    v19 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v19, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    *v19 = 8;
    *((_QWORD *)v19 + 10) = *((_QWORD *)a2 + 36);
    v19[22] = 0;
    *((_OWORD *)v19 + 1) = v21;
    *((_OWORD *)v19 + 2) = v22;
    *((_OWORD *)v19 + 3) = v23;
    v20 = v24;
    v19[23] = v17;
    *((_OWORD *)v19 + 4) = v20;
    if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}

/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0002550
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C002FD4C (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00309B0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036688 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002690 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C002A7D4 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002A850 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B774 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  bool v5; // di
  struct _VIDSCH_CONTEXT *v8; // r13
  __int64 v9; // r10
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  bool v14; // al
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // dl
  bool v20; // zf
  unsigned int v21; // ecx
  char v22; // al
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // r14
  struct VIDSCH_HW_QUEUE *v26; // rdx
  int v27; // eax
  unsigned int v28; // [rsp+50h] [rbp-48h]
  struct VIDSCH_HW_QUEUE *v29; // [rsp+58h] [rbp-40h]

  v5 = 0;
  v29 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v11 = a2[11];
    a3 = a2 + 34;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v11 )
    {
      v10 = *(_QWORD *)(v11 + 104);
      v8 = (struct _VIDSCH_CONTEXT *)a2[11];
    }
    else
    {
      v9 = a2[12];
      v29 = (struct VIDSCH_HW_QUEUE *)v9;
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL);
    }
    v12 = *(_QWORD *)(v10 + 32);
  }
  else
  {
    v12 = a5;
  }
  v13 = *((unsigned int *)a3 + 29);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( a3[19] && (_DWORD)v13 != -1 && *(_QWORD *)(v12 + 8 * v13 + 3104) )
    {
      v15 = *(_DWORD *)(v12 + 144);
      v16 = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          v17 = *(int *)(216LL * v16 + *(_QWORD *)(v12 + 8 * v13 + 3104) + 172);
          v18 = (int)v17 > -1 ? *(_QWORD *)(v12 + 3232) + 152 * v17 : 0LL;
          if ( v18
            && *((_DWORD *)a3 + 38) == *(_DWORD *)v18
            && *((_DWORD *)a3 + 39) == *(_DWORD *)(v18 + 4)
            && a3[20] == *(_QWORD *)(v18 + 8)
            && *(_DWORD *)(v18 + 112) == 3 )
          {
            goto LABEL_35;
          }
          if ( ++v16 >= v15 )
            goto LABEL_7;
        }
      }
      v14 = 0;
LABEL_8:
      VidSchiProcessPresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)v12,
        a1,
        v8,
        v29,
        (struct _VIDSCH_DEVICE *)v10,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v5,
        v14);
      return;
    }
    goto LABEL_7;
  }
  v19 = -1;
  v20 = !_BitScanForward(&v21, a3[71] & 0x3FF);
  v22 = v21;
  v23 = 0;
  if ( !v20 )
    v19 = v22;
  if ( v19 != -1 )
    v23 = v19;
  v28 = v23;
  v24 = *(int *)(*(_QWORD *)(v12 + 8 * v13 + 3104) + 216LL * (unsigned int)v23 + 172);
  if ( (int)v24 <= -1 )
    v25 = 0LL;
  else
    v25 = *(_QWORD *)(v12 + 3232) + 152 * v24;
  if ( !v25 )
    goto LABEL_7;
  if ( *(_QWORD *)(v25 + 120) == v25 + 120 )
  {
    v27 = *(_DWORD *)(v25 + 112);
    if ( v27 == 3 )
    {
      if ( *((_DWORD *)a3 + 38) == *(_DWORD *)v25
        && *((_DWORD *)a3 + 39) == *(_DWORD *)(v25 + 4)
        && a3[20] == *(_QWORD *)(v25 + 8) )
      {
LABEL_35:
        v14 = 1;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ( v27 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v12,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v25 + 97) )
    {
      v14 = 0;
      v5 = 1;
      *(_BYTE *)(v25 + 97) = 1;
      goto LABEL_8;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, v13, v28) )
    {
LABEL_7:
      v14 = 0;
      goto LABEL_8;
    }
    v26 = v29;
  }
  else
  {
    v26 = (struct VIDSCH_HW_QUEUE *)v9;
  }
  VidSchiPostponePresentHistoryToken(
    v8,
    v26,
    (struct _VIDSCH_DEVICE *)v10,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v12);
}

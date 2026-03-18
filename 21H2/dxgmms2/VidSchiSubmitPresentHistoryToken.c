/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0011570
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C00389B0 (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00394DC (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001A274 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001A344 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0034E4C (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  unsigned int v7; // r8d
  struct _VIDSCH_CONTEXT *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  bool v14; // r12
  bool v15; // r15
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // rax
  bool v19; // zf
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  unsigned int v28; // [rsp+A8h] [rbp+10h]

  v7 = 0;
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
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL);
    }
    v12 = *(_QWORD *)(v10 + 32);
  }
  else
  {
    v12 = a5;
  }
  v13 = *((unsigned int *)a3 + 29);
  v14 = 0;
  v15 = 0;
  v25 = *((_DWORD *)a3 + 29);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( !*(_QWORD *)((char *)a3 + 156) )
      goto LABEL_7;
    if ( (_DWORD)v13 == -1 )
      goto LABEL_7;
    if ( !*(_QWORD *)(v12 + 8 * v13 + 3200) )
      goto LABEL_7;
    v16 = *(_DWORD *)(v12 + 152);
    if ( !v16 )
      goto LABEL_7;
    v17 = *(_QWORD *)(v12 + 8 * v13 + 3200);
    while ( 1 )
    {
      v18 = *(int *)(280LL * v7 + v17 + 180);
      if ( (int)v18 > -1 )
      {
        v24 = *(_QWORD *)(v12 + 3328) + 160 * v18;
        if ( v24 )
        {
          if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v24
            && *((_DWORD *)a3 + 40) == *(_DWORD *)(v24 + 4)
            && a3[21] == *(_QWORD *)(v24 + 8)
            && *(_DWORD *)(v24 + 112) == 3 )
          {
            goto LABEL_40;
          }
        }
      }
      if ( ++v7 >= v16 )
        goto LABEL_7;
    }
  }
  v19 = !_BitScanForward((unsigned int *)&v20, a3[75] & 0x3FF);
  if ( v19 || (_BYTE)v20 == 0xFF )
    LOBYTE(v20) = 0;
  v28 = (char)v20;
  v21 = *(int *)(*(_QWORD *)(v12 + 8 * v13 + 3200) + 280LL * (unsigned int)(char)v20 + 180);
  if ( (int)v21 <= -1 )
    goto LABEL_7;
  v22 = *(_QWORD *)(v12 + 3328) + 160 * v21;
  v26 = v22;
  if ( !v22 )
    goto LABEL_7;
  if ( *(_QWORD *)(v22 + 120) == v22 + 120 )
  {
    v23 = *(_DWORD *)(v22 + 112);
    if ( v23 == 3 )
    {
      if ( *((_DWORD *)a3 + 39) != *(_DWORD *)v22
        || *((_DWORD *)a3 + 40) != *(_DWORD *)(v22 + 4)
        || a3[21] != *(_QWORD *)(v22 + 8) )
      {
        goto LABEL_7;
      }
LABEL_40:
      v15 = 1;
      goto LABEL_7;
    }
    if ( v23 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v12,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v26 + 97) )
    {
      *(_BYTE *)(v26 + 97) = 1;
      v14 = 1;
LABEL_7:
      VidSchiProcessPresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)v12,
        a1,
        v8,
        (struct VIDSCH_HW_QUEUE *)v9,
        (struct _VIDSCH_DEVICE *)v10,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v14,
        v15);
      return;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, v25, v28) )
      goto LABEL_7;
  }
  VidSchiPostponePresentHistoryToken(
    v8,
    (struct VIDSCH_HW_QUEUE *)v9,
    (struct _VIDSCH_DEVICE *)v10,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v12);
}

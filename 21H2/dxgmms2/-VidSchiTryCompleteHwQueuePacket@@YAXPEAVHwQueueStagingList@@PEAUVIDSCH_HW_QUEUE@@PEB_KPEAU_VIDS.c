/*
 * XREFs of ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C001F338
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C001F44E (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EA1C (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003F638 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 */

void __fastcall VidSchiTryCompleteHwQueuePacket(
        struct HwQueueStagingList *a1,
        struct VIDSCH_HW_QUEUE *a2,
        unsigned __int64 *a3,
        struct _VIDSCH_QUEUE_PACKET *a4,
        bool *a5)
{
  struct HwQueueStagingList *v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // al

  v5 = a1;
  v6 = *((int *)a4 + 12);
  *a5 = 0;
  if ( (_DWORD)v6 )
  {
    switch ( (_DWORD)v6 )
    {
      case 4:
        VidSchiCompleteHwQueueWaitPacket(v5, a4, (__int64)a3);
LABEL_21:
        *a5 = 1;
        return;
      case 5:
        if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
          return;
        VidSchiCompleteHwQueueSignalPacket(v5, a4, (bool)a3);
        goto LABEL_21;
      case 7:
        if ( *((struct VIDSCH_HW_QUEUE **)a4 + 5) != (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
          return;
        goto LABEL_20;
    }
    if ( (_DWORD)v6 != 8 )
    {
      WdLogSingleEntry5(0LL, 281LL, 2048LL, a2, a4, v6);
      __debugbreak();
    }
    v8 = *((_QWORD *)a2 + 7);
    v9 = *((_QWORD *)a4 + 36);
    v10 = *a3;
    if ( !*(_BYTE *)(v8 + 28) )
    {
      v11 = *(_BYTE *)(v8 + 29) == 0;
      goto LABEL_16;
    }
LABEL_20:
    VidSchiCompleteHwQueuePacket(v5, a4, 1);
    goto LABEL_21;
  }
  v12 = *((unsigned int *)a4 + 194);
  v13 = *((_QWORD *)a2 + 3 * v12 + 7);
  v9 = *((_QWORD *)a4 + 96);
  v10 = a3[v12];
  if ( *(_BYTE *)(v13 + 28) )
    goto LABEL_20;
  v11 = *(_BYTE *)(v13 + 29) == 0;
LABEL_16:
  if ( v11 )
    v14 = (int)v10 - (int)v9 >= 0;
  else
    v14 = v10 >= v9;
  if ( v14 )
    goto LABEL_20;
}

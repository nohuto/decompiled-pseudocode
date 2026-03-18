/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C003960C
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B8C0 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C00394BC (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct HwQueueStagingList *a1, struct _VIDSCH_NODE *a2)
{
  char *v2; // r14
  char *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  unsigned __int64 *v7; // rcx
  char v8; // al
  unsigned __int64 *v9; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned int *v12; // r9
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  struct _VIDSCH_QUEUE_PACKET *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  unsigned __int64 *v18; // rdx
  unsigned __int64 *v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v25; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)a2 + 1688;
  v4 = (char *)*((_QWORD *)a2 + 211);
  if ( v4 != (char *)a2 + 1688 )
  {
    do
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2);
      if ( v5 != (__int64 *)(v4 + 16) )
      {
        do
        {
          v6 = v5 - 1;
          *(_OWORD *)v23 = 0LL;
          v7 = (unsigned __int64 *)(v5 + 6);
          v8 = 0;
          v9 = v23;
          v10 = 2LL;
          do
          {
            v11 = *v7;
            if ( *v7 )
            {
              v12 = *(unsigned int **)(v11 + 64);
              if ( *(_BYTE *)(v11 + 29) )
                v11 = *(_QWORD *)v12;
              else
                v11 = *v12;
              if ( v11 != v7[1] )
                v8 = 1;
              *v9 = v11;
            }
            v7 += 3;
            ++v9;
            --v10;
          }
          while ( v10 );
          if ( v8 )
          {
            v13 = v6 + 20;
            do
            {
              v14 = (_QWORD *)*v13;
              if ( (_QWORD *)*v13 == v13 )
                break;
              if ( v14 == (_QWORD *)v6[26] )
                break;
              v15 = (struct _VIDSCH_QUEUE_PACKET *)(v14 - 4);
              v25 = 0;
              v16 = WdLogNewEntry5_WdEvent(v7, v11);
              *(_QWORD *)(v16 + 24) = v15;
              WdLogEvent5_WdEvent(v16);
              VidSchiTryCompleteHwQueuePacket(a1, (struct VIDSCH_HW_QUEUE *)(v5 - 1), v23, v15, &v25);
            }
            while ( v25 );
            v17 = (_QWORD *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
            memset(v17, 0, 0x70uLL);
            v18 = (unsigned __int64 *)(v6 + 8);
            *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
            v19 = v23;
            *(_DWORD *)v17 = 9;
            v20 = 2LL;
            v17[2] = v6;
            v21 = (char *)v17 - (char *)v23;
            do
            {
              v22 = *v19;
              *(unsigned __int64 *)((char *)v19 + v21 + 24) = *v19;
              ++v19;
              *v18 = v22;
              v18 += 3;
              --v20;
            }
            while ( v20 );
            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6[5] + 8));
          }
          v5 = (__int64 *)*v5;
        }
        while ( v5 != (__int64 *)(v4 + 16) );
        v2 = (char *)a2 + 1688;
      }
      v4 = *(char **)v4;
    }
    while ( v4 != v2 );
  }
}

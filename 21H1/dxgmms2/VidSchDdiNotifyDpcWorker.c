/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C002EED0
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CBB8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiForceTdr @ 0x1C003D00C (VidSchiForceTdr.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00050A0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0023460 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0030064 (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0030554 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00364E0 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C003AFA0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003B008 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B8C0 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B96C (VidSchiProcessSuspendContextCompletedDpc.c)
 */

void __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  PSLIST_ENTRY v5; // rax
  _QWORD *v6; // rbx
  _QWORD *p_Next; // r8
  struct _SLIST_ENTRY *v8; // rsi
  unsigned int Next; // ecx
  __int64 v10; // rdx
  struct _SLIST_ENTRY *v11; // rdi
  int v12; // eax

  v2 = *(union _SLIST_HEADER **)(a1 + 624);
  v5 = ExpInterlockedFlushSList(v2 + 110);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      p_Next = &v5->Next;
      v5 = v5->Next;
      *p_Next = v6;
      v6 = p_Next;
    }
    while ( v5 );
    do
    {
      v8 = (struct _SLIST_ENTRY *)(v6 - 2);
      v6 = (_QWORD *)*v6;
      Next = (unsigned int)v8->Next;
      if ( ((LODWORD(v8->Next) - 1) & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        switch ( Next )
        {
          case 0xBu:
            VidSchiProcessMonitoredFenceSignaledDpc(v8);
            break;
          case 0xFu:
            v11 = v8[2].Next;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&v11[375], v8);
            if ( bTracingEnabled )
              VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v11);
            break;
          case 0x10u:
            VidSchiProcessGpuEngineTimeoutDpc(v8);
            break;
          case 0xCu:
            VidSchiProcessHwQueuePageFaultedDpc(v8);
            break;
          case 0x11u:
            VidSchiProcessSuspendContextCompletedDpc(v8);
            break;
          default:
            if ( Next <= 0xA && (v12 = 1160, _bittest(&v12, Next)) )
            {
              VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v8[-1]);
              ExpInterlockedPushEntrySList(
                (PSLIST_HEADER)(*(&v2[194].Alignment + *((unsigned int *)&v8[4].Next + 2)) + 33648),
                v8);
            }
            else if ( Next == 14 )
            {
              VidSchiProcessPeriodicNotificationCookie(v2, &v8[-1], p_Next);
            }
            break;
        }
      }
      else
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v8[2].Next[6].Next[30], 1);
          v10 = VIDMM_GLOBAL::_Config >> 4;
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
          {
            LOBYTE(v10) = 1;
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 648), v10);
          }
        }
        VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v8[-1]);
      }
    }
    while ( v6 );
  }
}

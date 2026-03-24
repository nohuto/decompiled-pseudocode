/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C000CB40
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007BD0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C000A060 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C00165FC (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036D94 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A3A0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CC70 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010DD0 (VidSchiUnwaitWaitQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C003074C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0031FAC (VidSchiUnblockUnorderedWaiter.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4, char a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  __int64 v19; // rbp
  _QWORD *v20; // rdi
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  int v26; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 44);
  if ( (_DWORD)v7 == 4 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v7);
      v11[3] = a2;
      v11[4] = **(_QWORD **)(a2 + 64);
      v11[5] = *a4;
      WdLogEvent5_WdEvent(v11);
      v12 = *a4;
      v13 = *(unsigned __int64 **)(a2 + 64);
      if ( *(_BYTE *)(a2 + 29) )
      {
        if ( a3 || v12 > *v13 )
          *v13 = v12;
      }
      else if ( a3 || *(_DWORD *)v13 - (int)v12 < 0 )
      {
        *(_DWORD *)v13 = v12;
      }
      VidSchiUnwaitMonitoredFences(a1, v5, 0LL);
    }
    goto LABEL_7;
  }
  if ( (_DWORD)v7 )
  {
    v17 = v7 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v7 = (unsigned int)(v18 - 1);
        if ( !(_DWORD)v7 )
        {
          if ( *(_BYTE *)(a2 + 31) )
            ((void (__fastcall *)(_QWORD))DxgCoreInterface[63])(*(_QWORD *)(a2 + 64));
          else
            KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
          goto LABEL_7;
        }
        if ( (_DWORD)v7 != 2 )
          goto LABEL_7;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a2 + 27) )
      {
        v19 = *(_QWORD *)(a2 + 208);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 8), &LockHandle);
        if ( *(_QWORD *)(v19 + 32) < *a4 )
          *(_QWORD *)(v19 + 32) = *a4;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else if ( *(_QWORD *)(a2 + 72) < *a4 )
      {
        *(_QWORD *)(a2 + 72) = *a4;
      }
      if ( *(_DWORD *)(a2 + 36) )
        VidSchiUnblockUnorderedWaiter(a1, a2, 0LL);
      v20 = *(_QWORD **)(a2 + 96);
      while ( v20 != (_QWORD *)(a2 + 96) )
      {
        v21 = v20 - 36;
        v20 = (_QWORD *)*v20;
        if ( *(_BYTE *)(a2 + 27) )
          v22 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
        else
          v22 = *(_QWORD *)(a2 + 72);
        if ( v21[38] <= v22 )
          VidSchiUnwaitWaitQueuePacket(a1, v21, 0LL, 0LL);
      }
    }
    else
    {
      v23 = *(_DWORD *)(a2 + 56);
      if ( v23 < *(_DWORD *)(a2 + 60) )
      {
        v24 = (_QWORD *)(a2 + 96);
        *(_DWORD *)(a2 + 56) = v23 + 1;
        if ( (_QWORD *)*v24 != v24 )
        {
          v25 = (_QWORD *)*v24;
          *(_DWORD *)(a2 + 56) = v23;
          VidSchiUnwaitWaitQueuePacket(a1, v25 - 36, 0LL, 0LL);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    v14 = *(_QWORD *)(a2 + 96);
    if ( v14 != a2 + 96 )
    {
      v15 = v14 - 288;
      v16 = *(_QWORD *)(v14 - 288 + 88);
      if ( !v16 )
        v16 = *(_QWORD *)(v15 + 96);
      *(_QWORD *)(a2 + 56) = v16;
      VidSchiUnwaitWaitQueuePacket(a1, v15, 0LL, 0LL);
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 27) )
  {
    if ( a5 )
    {
      v26 = *(_DWORD *)(a2 + 44);
      if ( ((v26 - 2) & 0xFFFFFFFC) == 0 && v26 != 3 )
        VidSchiPropagateCrossAdapterSignal(a2);
    }
  }
}

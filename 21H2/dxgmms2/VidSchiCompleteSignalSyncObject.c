/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C000B800
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0019138 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003F638 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0039328 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C003AC04 (VidSchiUnblockUnorderedWaiter.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4, char a5)
{
  __int64 v5; // r14
  int v7; // edx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rdi
  int v20; // edx
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rdx
  int v26; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 4 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a2 + 28) )
    {
      WdLogSingleEntry3(4LL, a2, **(_QWORD **)(a2 + 64), *a4);
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
      VidSchiUnwaitMonitoredFences(a1, v5, 0LL, v11);
    }
    goto LABEL_9;
  }
  if ( v7 )
  {
    v17 = v7 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v20 = v18 - 1;
        if ( !v20 )
        {
          if ( *(_BYTE *)(a2 + 31) )
            ((void (__fastcall *)(_QWORD))DxgCoreInterface[68])(*(_QWORD *)(a2 + 64));
          else
            KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
          goto LABEL_9;
        }
        if ( v20 != 2 )
          goto LABEL_9;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a2 + 27) )
      {
        v21 = *(_QWORD *)(a2 + 208);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 8), &LockHandle);
        if ( *(_QWORD *)(v21 + 32) < *a4 )
          *(_QWORD *)(v21 + 32) = *a4;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else if ( *(_QWORD *)(a2 + 72) < *a4 )
      {
        *(_QWORD *)(a2 + 72) = *a4;
      }
      if ( *(_DWORD *)(a2 + 40) )
        VidSchiUnblockUnorderedWaiter(a1, a2, 0LL);
      v19 = *(_QWORD **)(a2 + 96);
      while ( v19 != (_QWORD *)(a2 + 96) )
      {
        v22 = v19 - 36;
        v19 = (_QWORD *)*v19;
        if ( *(_BYTE *)(a2 + 27) )
          v23 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
        else
          v23 = *(_QWORD *)(a2 + 72);
        if ( v22[38] <= v23 )
          VidSchiUnwaitWaitQueuePacket(a1, v22, 0LL, 0LL);
      }
    }
    else
    {
      v24 = *(_DWORD *)(a2 + 56);
      if ( v24 < *(_DWORD *)(a2 + 60) )
      {
        *(_DWORD *)(a2 + 56) = v24 + 1;
        v25 = *(_QWORD *)(a2 + 96);
        if ( v25 != a2 + 96 )
        {
          *(_DWORD *)(a2 + 56) = v24;
          VidSchiUnwaitWaitQueuePacket(a1, v25 - 288, 0LL, 0LL);
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
LABEL_9:
  if ( *(_BYTE *)(a2 + 27) )
  {
    if ( a5 )
    {
      v26 = *(_DWORD *)(a2 + 48);
      if ( ((v26 - 2) & 0xFFFFFFFC) == 0 && v26 != 3 )
        VidSchiPropagateCrossAdapterSignal(a2);
    }
  }
}

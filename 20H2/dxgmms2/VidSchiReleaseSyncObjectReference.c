/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C000B7B8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00069E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BA80 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000FC44 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C001651C (VidSchiCompleteSignalCommmand.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0033E30 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036B34 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A140 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchDestroySyncObject @ 0x1C007FB60 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00AE6D8 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00157A8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     DxgkReleaseGuestCpuEvent @ 0x1C0017834 (DxgkReleaseGuestCpuEvent.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C00178A4 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rdx
  char **v5; // rcx
  char *v6; // rdi
  __int64 v7; // rcx
  char **v8; // rax
  void *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 8, 0xFFFFFFFF) == 1 )
  {
    v2 = *((_DWORD *)P + 11);
    if ( v2 == 3 )
    {
      if ( P[31] )
      {
        v3 = *((_QWORD *)P + 8);
        if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() && *(_BYTE *)(v3 + 19) )
          DxgkReleaseGuestCpuEvent(v3);
        else
          ExFreePoolWithTag(*((PVOID *)P + 8), 0);
        *((_QWORD *)P + 8) = 0LL;
      }
      else
      {
        ObfDereferenceObject(*((PVOID *)P + 7));
        *((_QWORD *)P + 7) = 0LL;
      }
    }
    else if ( (unsigned int)(v2 - 4) <= 1 && !*((_QWORD *)P + 2) )
    {
      VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 56), P[24] != 0);
    }
    if ( !P[27] )
      goto LABEL_22;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 1) + 3088LL), &LockHandle);
    v4 = *((_QWORD *)P + 24);
    if ( *(char **)(v4 + 8) == P + 192 )
    {
      v5 = (char **)*((_QWORD *)P + 25);
      if ( *v5 == P + 192 )
      {
        *v5 = (char *)v4;
        *(_QWORD *)(v4 + 8) = v5;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v6 = P + 144;
        if ( !*((_QWORD *)P + 18) )
          goto LABEL_20;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 26) + 8LL), &v11);
        v7 = *(_QWORD *)v6;
        if ( *(char **)(*(_QWORD *)v6 + 8LL) == v6 )
        {
          v8 = (char **)*((_QWORD *)P + 19);
          if ( *v8 == v6 )
          {
            *v8 = (char *)v7;
            *(_QWORD *)(v7 + 8) = v8;
            KeReleaseInStackQueuedSpinLock(&v11);
LABEL_20:
            v9 = (void *)*((_QWORD *)P + 26);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v9, 0);
LABEL_22:
            ExFreePoolWithTag(P, 0);
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}

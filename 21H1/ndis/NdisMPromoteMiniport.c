/*
 * XREFs of NdisMPromoteMiniport @ 0x1C0071350
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001986C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C008BA1C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisMPromoteMiniport(NDIS_HANDLE MiniportHandle)
{
  unsigned int v1; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // r14
  __int64 v4; // r15
  KIRQL v5; // dl
  __int64 v6; // rbx
  KIRQL v7; // dl
  __int64 i; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x64u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportHandle);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportHandle + 30) & 0x10000000) == 0
    || *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle
    || (*((_DWORD *)MiniportHandle + 31) & 0x20000) != 0 )
  {
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    v1 = -1073741637;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, NewIrql);
  }
  else
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      v4 = *((_QWORD *)MiniportHandle + 22);
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedPromoteMiniport;
      PoolWithTag->Parameter = MiniportHandle;
      *((_DWORD *)MiniportHandle + 30) &= ~0x10000000u;
      ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, 0x21u);
      v5 = NewIrql;
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v5);
      v6 = *((_QWORD *)MiniportHandle + 470);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 392));
      for ( i = *(_QWORD *)(v6 + 16); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD *)(i + 176) == v4 )
          *(_QWORD *)(i + 176) = MiniportHandle;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 392), v7);
      ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      v1 = -1073741670;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, NewIrql);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x65u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportHandle);
  NdisTraceLoggingRareMiniportPath(MiniportHandle, 4097LL, v1);
  return v1;
}

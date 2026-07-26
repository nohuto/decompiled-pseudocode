/*
 * XREFs of NdisMAllocateSharedMemoryAsync @ 0x1C0061150
 * Callers:
 *     NdisMAllocateSharedMemoryAsyncEx @ 0x1C0061320 (NdisMAllocateSharedMemoryAsyncEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsync(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rsi
  NDIS_STATUS v9; // ebx
  NDIS_HANDLE v10; // rdi
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  __int64 v14; // [rsp+28h] [rbp-30h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x20u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x7361444Eu);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( *(_BYTE *)MiniportAdapterHandle == 17 )
  {
    v10 = (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 63);
    v11 = (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    if ( !v10 || !*((_QWORD *)v10 + 3) )
      goto LABEL_11;
    if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u
       ? *((_QWORD *)v10 + 5) == 0LL
       : *(_QWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 240LL) == 0LL )
    {
      goto LABEL_11;
    }
  }
  else if ( *(_BYTE *)MiniportAdapterHandle != 15
         || (v10 = MiniportAdapterHandle,
             v11 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 1),
             !*((_QWORD *)MiniportAdapterHandle + 3))
         || !*((_QWORD *)MiniportAdapterHandle + 5) )
  {
LABEL_11:
    v9 = -1073741823;
LABEL_12:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_13;
  }
  if ( !ndisReferenceMiniport(v11, 0x41u) )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 18);
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedAllocateSharedHandler;
  PoolWithTag[1].List.Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  LODWORD(PoolWithTag[1].List.Blink) = Length;
  BYTE4(PoolWithTag[1].List.Blink) = Cached;
  PoolWithTag[1].Parameter = Context;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
  v9 = 259;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v9;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x21u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v14);
  }
  return v9;
}

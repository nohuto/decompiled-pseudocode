/*
 * XREFs of NdisFRestartFilter @ 0x1C006A490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0018624 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0116740 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  NDIS_STATUS v2; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  int v5; // [rsp+60h] [rbp+8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x25u,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x2020444Eu);
    if ( PoolWithTag )
    {
      v5 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)NdisFilterHandle + 39, 0x16u, (enum _NDIS_REFERENCE_STATUS *)&v5) )
      {
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->WorkerRoutine = ndisQueuedRestartFilter;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag[1].List.Flink = (_LIST_ENTRY *)NdisFilterHandle;
        ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v2 = -1073741823;
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  else
  {
    ndisQueueFilterRestart((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v2 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      (char)NdisFilterHandle,
      v2);
  return v2;
}

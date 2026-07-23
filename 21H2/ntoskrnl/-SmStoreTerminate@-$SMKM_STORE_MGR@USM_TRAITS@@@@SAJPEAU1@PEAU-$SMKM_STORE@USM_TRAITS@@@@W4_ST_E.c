/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14059FAA8
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14059AE90 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     SmKmStoreReference @ 0x14028A7A8 (SmKmStoreReference.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  int v12; // eax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6D546D73u);
  if ( PoolWithTag )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 6016), v9, v10) )
    {
      PoolWithTag->List.Blink = 0LL;
      PoolWithTag[1].WorkerRoutine = 0LL;
      PoolWithTag[1].Parameter = 0LL;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = SmKmStoreTerminateWorker;
      PoolWithTag->Parameter = PoolWithTag;
      PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)(a2 + 6216);
      PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)a1;
      LODWORD(PoolWithTag[1].WorkerRoutine) = *(_DWORD *)(a2 + 6016);
      v12 = *(_DWORD *)(a1 + 1840) & 1;
      LODWORD(PoolWithTag[1].Parameter) = a3;
      HIDWORD(PoolWithTag[1].WorkerRoutine) = v12;
      HIDWORD(PoolWithTag[1].Parameter) = a4;
      ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
      PoolWithTag = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = -1073741431;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}

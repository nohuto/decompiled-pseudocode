/*
 * XREFs of ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001924C
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A210 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002D850 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0019320 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(
        struct _NDIS_IF_BLOCK *a1,
        void (__fastcall *a2)(_NDIS_WORK_ITEM *, void *),
        int a3,
        int a4)
{
  unsigned int v7; // edi
  struct _NDIS_WORK_ITEM *PoolWithTag; // rax
  struct _NDIS_WORK_ITEM *v10; // rsi
  KIRQL v11; // bl

  v7 = 0;
  PoolWithTag = (struct _NDIS_WORK_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Context = PoolWithTag;
    PoolWithTag[1].Context = a1;
    PoolWithTag->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisNsiQueuedIfBlockRodChangeNotification;
    PoolWithTag[1].Routine = a2;
    *(_DWORD *)PoolWithTag[1].WrapperReserved = a3;
    *(_DWORD *)&PoolWithTag[1].WrapperReserved[4] = a4;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->RefCountTracker, 0xAu);
    ++a1->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v11);
    ndisScheduleWorkItemInternal(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}

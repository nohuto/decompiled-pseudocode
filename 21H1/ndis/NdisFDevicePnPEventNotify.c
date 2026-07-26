/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x1C0016130
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0016070 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0018B58 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0068D6C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  unsigned __int8 *NdisReserved; // rax
  KIRQL v5; // dl
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  _QWORD Parameter[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v8; // [rsp+58h] [rbp-28h]
  __int128 v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+78h] [rbp-8h]
  KIRQL NewIrql; // [rsp+90h] [rbp+10h] BYREF

  Parameter[0] = 0LL;
  Parameter[1] = NdisFilterHandle;
  v8 = __PAIR128__((unsigned __int64)NetDevicePnPEvent, 0LL);
  v10 = 0LL;
  v9 = 0LL;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFDevicePnPEventNotifyInternal,
         Parameter,
         0x4CCCuLL,
         0,
         0LL) < 0 )
  {
    NewIrql = 0;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
    {
      NdisReserved = NetDevicePnPEvent->NdisReserved;
      while ( *(_QWORD *)NetDevicePnPEvent->NdisReserved )
        ;
    }
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v5 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v5);
    ndisWaitForKernelObject(&Event);
  }
}

/*
 * XREFs of NdisFNetPnPEvent @ 0x1C00158B0
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C001579C (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A188 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006944C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisFNetPnPEvent(
        NDIS_HANDLE NdisFilterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  PNET_PNP_EVENT_NOTIFICATION *i; // rcx
  KIRQL v6; // dl
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  _QWORD Parameter[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v9; // [rsp+58h] [rbp-28h]
  __int128 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  KIRQL NewIrql; // [rsp+90h] [rbp+10h] BYREF

  Parameter[0] = 0LL;
  Parameter[1] = NdisFilterHandle;
  v9 = __PAIR128__((unsigned __int64)NetPnPEventNotification, 0LL);
  v11 = 0LL;
  v10 = 0LL;
  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFNetPnPEventInternal, Parameter, 0x4CCCuLL, 0, 0LL) >= 0 )
    return Parameter[0];
  NewIrql = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
  for ( i = (PNET_PNP_EVENT_NOTIFICATION *)((char *)NdisFilterHandle + 256);
        *i;
        i = (PNET_PNP_EVENT_NOTIFICATION *)&(*i)->NetPnPEvent.NdisReserved[3] )
  {
    ;
  }
  *i = NetPnPEventNotification;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[3] = 0LL;
  NetPnPEventNotification->NetPnPEvent.NdisReserved[0] = (unsigned __int64)&Event;
  ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
  v6 = NewIrql;
  *((_QWORD *)NdisFilterHandle + 19) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
  ndisWaitForKernelObject(&Event);
  return NetPnPEventNotification->NetPnPEvent.NdisReserved[1];
}

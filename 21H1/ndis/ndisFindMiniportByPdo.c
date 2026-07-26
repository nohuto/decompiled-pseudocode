/*
 * XREFs of ndisFindMiniportByPdo @ 0x1C0017E40
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x1C00FB4B0 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindMiniportByPdo(_DEVICE_OBJECT *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  for ( i = ndisMiniportList; i && i->PhysicalDeviceObject != a1; i = i->NextGlobalMiniport )
    ;
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  return i;
}

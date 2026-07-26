/*
 * XREFs of ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C002538C
 * Callers:
 *     NdisFDeregisterFilterDriver @ 0x1C006A720 (NdisFDeregisterFilterDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0115320 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0138C20 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NdisDeregisterProtocol @ 0x1C013ABB0 (NdisDeregisterProtocol.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCloseRef(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // zf
  bool v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = *((_BYTE *)SpinLock + 10) == 0;
  *((_BYTE *)SpinLock + 10) = 1;
  v4 = v3;
  KeReleaseSpinLock(SpinLock, v2);
  return v4;
}

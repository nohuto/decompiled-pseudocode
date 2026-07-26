/*
 * XREFs of ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E78
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002DE90 (NdisRegisterProtocolDriver.c)
 *     NdisFRegisterFilterDriver @ 0x1C002F0E0 (NdisFRegisterFilterDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036620 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocol @ 0x1C00983F0 (NdisRegisterProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135C84 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C002BC20 (NdisAllocateRefCount.c)
 */

void __fastcall ndisInitializeRef(struct _REFERENCE_EX *a1, unsigned __int8 a2)
{
  KeInitializeSpinLock(&a1->SpinLock);
  *(_DWORD *)&a1->ReferenceCount = 1;
  a1->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)NdisAllocateRefCount(a2, 2);
}

/*
 * XREFs of ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A4B0
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A210 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023484 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0025B5C (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0032DB4 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C005FDF0 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0080990 (NdisMReenumerateFailedAdapter.c)
 *     ndisWdfDevicePowerDown @ 0x1C0082FE0 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008323C (ndisWdfDevicePowerOn.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B2D30 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106ABC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011DE20 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139BB8 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 */

struct _NDIS_IF_BLOCK *__fastcall ndisMReferenceIfBlock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_IF_BLOCK *IfBlock; // rbx
  KIRQL v5; // si

  IfBlock = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( a1->IfBlockAvailable )
  {
    IfBlock = a1->IfBlock;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker, a2);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&SpinLock, v5);
  return IfBlock;
}

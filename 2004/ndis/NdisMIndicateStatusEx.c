/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C0019A80
 * Callers:
 *     NdisFOidRequest @ 0x1C000C370 (NdisFOidRequest.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C1E0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002DA90 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C006FD74 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1C0070450 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00708A0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMIndicateStatus @ 0x1C0071770 (NdisMIndicateStatus.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C0073438 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1C00836C0 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008391C (ndisWdfDevicePowerOn.c)
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008FD88 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1C0092D00 (-ndisPMRejectAsync@@YAXPEAX@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093CE4 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093F1C (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B780 (-ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BA60 (-ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DB20 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    StatusIndication);
}

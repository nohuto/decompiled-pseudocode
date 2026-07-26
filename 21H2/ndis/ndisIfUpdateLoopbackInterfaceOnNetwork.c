/*
 * XREFs of ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1C003A220
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0105748 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002F204 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisIfUpdateLoopbackInterfaceOnNetwork(__int64 a1, union _NET_LUID_LH a2)
{
  KIRQL v4; // r8

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1704LL) = ndisIfFindInterfaceByNetLuid(a2);
  KeReleaseSpinLock(&ndisIfListLock, v4);
}

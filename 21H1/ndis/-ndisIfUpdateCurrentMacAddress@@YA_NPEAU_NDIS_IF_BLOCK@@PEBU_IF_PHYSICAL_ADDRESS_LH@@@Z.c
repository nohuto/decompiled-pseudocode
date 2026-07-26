/*
 * XREFs of ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B1538
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C01267B0 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C003F2F0 (memcmp.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddress(struct _NDIS_IF_BLOCK *a1, const struct _IF_PHYSICAL_ADDRESS_LH *a2)
{
  KIRQL v4; // al
  unsigned __int16 Length; // di
  KIRQL v6; // r12
  char v7; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Length = a2->Length;
  v6 = v4;
  if ( a1->ifPhysAddress.Length != a2->Length || (v7 = 0, memcmp(a1->ifPhysAddress.Address, a2->Address, a2->Length)) )
  {
    a1->ifPhysAddress.Length = Length;
    memmove(a1->ifPhysAddress.Address, a2->Address, a2->Length);
    v7 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v7;
}

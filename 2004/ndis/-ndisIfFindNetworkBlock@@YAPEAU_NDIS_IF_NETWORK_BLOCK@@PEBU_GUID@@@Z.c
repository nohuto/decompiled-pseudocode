/*
 * XREFs of ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BD7C
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0025C9C (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B6AC (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002EB24 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003438C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C00349CC (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2518 (ndisIfCreateCompartment.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B4A20 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4D50 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5210 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisCompareGuid @ 0x1C002BDE4 (ndisCompareGuid.c)
 */

struct _NDIS_IF_NETWORK_BLOCK *__fastcall ndisIfFindNetworkBlock(const struct _GUID *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v1 = (__int64 *)qword_1C00E4B40;
  v3 = 0LL;
  while ( v1 != &qword_1C00E4B40 )
  {
    v4 = ndisCompareGuid(v1 + 4, a1);
    if ( !v4 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v1;
    if ( v4 > 0 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
    v1 = (__int64 *)*v1;
  }
  return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
}

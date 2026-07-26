/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B571C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B59E0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B5F20 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00B6BB0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B6D70 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7090 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B7780 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B77E0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00B9AD0 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00B9F30 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00BA000 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BA3D0 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  int v4; // ebx

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
    ExFreePoolWithTag(P, 0);
}

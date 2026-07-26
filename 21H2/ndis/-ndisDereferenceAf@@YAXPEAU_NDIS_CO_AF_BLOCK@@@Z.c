/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5D4C
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B6010 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B6550 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00B71E0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B73A0 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B76C0 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B7DB0 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B7E10 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00BA100 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BA560 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00BA630 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BAA00 (NdisCoRequestComplete.c)
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

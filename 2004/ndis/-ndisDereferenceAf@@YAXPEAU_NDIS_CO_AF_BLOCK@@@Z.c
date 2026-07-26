/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5BDC
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B5EA0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B63E0 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00B7070 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B7230 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7550 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B7C40 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B7CA0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00B9F90 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BA3F0 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00BA4C0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BA890 (NdisCoRequestComplete.c)
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

/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5D90
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00B64E0 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C00B7070 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00B7400 (NdisCmDispatchIncomingCall.c)
 *     NdisClRegisterSap @ 0x1C00B7B40 (NdisClRegisterSap.c)
 *     NdisCoOidRequest @ 0x1C00B9F90 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C00BA4C0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C00BA940 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(struct _NDIS_CO_AF_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rsi
  char v3; // di
  KIRQL v4; // al

  p_Lock = &a1->Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    ++a1->References;
    v3 = 1;
  }
  KeReleaseSpinLock(p_Lock, v4);
  return v3;
}

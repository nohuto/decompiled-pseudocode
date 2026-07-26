/*
 * XREFs of ?ndisGetDefaultNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D9A8
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0026EC0 (NdisGetRssProcessorInformation.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EB58 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetDefaultNumRssProcessors(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
    return 16LL;
  if ( !a1->UsingMSIX )
    return 4LL;
  result = 8LL;
  if ( a1->MaxRcvLinkSpeed >= 0x2540BE400LL )
    return 16LL;
  return result;
}

/*
 * XREFs of ESM_NotifyingTransferRingsEndpointHalted @ 0x1C004F560
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x1C0039C4C (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsEndpointHalted(__int64 a1)
{
  Endpoint_SM_NotifyTransferRingsEndpointHalted(*(_QWORD *)(a1 + 960));
  return 29LL;
}

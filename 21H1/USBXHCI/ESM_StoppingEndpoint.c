/*
 * XREFs of ESM_StoppingEndpoint @ 0x1C000F260
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C000F288 (Endpoint_SM_SendStopEndpointCommand.c)
 */

__int64 __fastcall ESM_StoppingEndpoint(__int64 a1)
{
  ++*(_DWORD *)(*(_QWORD *)(a1 + 960) + 156LL);
  Endpoint_SM_SendStopEndpointCommand();
  return 1000LL;
}

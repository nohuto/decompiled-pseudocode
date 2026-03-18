/*
 * XREFs of ESM_StoppingEndpoint @ 0x1C000F4A0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00058D4 (Endpoint_SM_SendStopEndpointCommand.c)
 */

__int64 __fastcall ESM_StoppingEndpoint(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  Endpoint_SM_SendStopEndpointCommand(v1);
  ++*(_DWORD *)(v1 + 156);
  return 1000LL;
}

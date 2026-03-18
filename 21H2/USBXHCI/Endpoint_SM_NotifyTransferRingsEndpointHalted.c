/*
 * XREFs of Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x1C0039C4C
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C004F560 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0037708 (XilEndpoint_FetchStreamContextArray.c)
 *     TR_EndpointHalted @ 0x1C003FA0C (TR_EndpointHalted.c)
 */

char __fastcall Endpoint_SM_NotifyTransferRingsEndpointHalted(__int64 a1)
{
  char result; // al
  __int64 v3; // rdi
  unsigned int v4; // esi

  if ( !*(_BYTE *)(a1 + 37) )
    return TR_EndpointHalted(*(_QWORD *)(a1 + 88));
  XilEndpoint_FetchStreamContextArray(*(_QWORD *)(a1 + 136));
  result = *(_BYTE *)(a1 + 37);
  if ( !result )
    return TR_EndpointHalted(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD *)(a1 + 136);
  v4 = 1;
  for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
    result = TR_EndpointHalted(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(a1 + 136) + 48));
  return result;
}

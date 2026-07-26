/*
 * XREFs of NdisClGetProtocolVcContextFromTapiCallId @ 0x1C00B7E10
 * Callers:
 *     <none>
 * Callees:
 *     ndisUnicodeStringToPointer @ 0x1C00B7D10 (ndisUnicodeStringToPointer.c)
 */

NDIS_STATUS __stdcall NdisClGetProtocolVcContextFromTapiCallId(
        UNICODE_STRING *TapiCallId,
        PNDIS_HANDLE ProtocolVcContext)
{
  int v2; // eax
  NDIS_STATUS v3; // ecx

  v2 = ndisUnicodeStringToPointer(&TapiCallId->Length, (__int64 *)ProtocolVcContext);
  v3 = -1073741823;
  if ( v2 >= 0 )
    return 0;
  return v3;
}

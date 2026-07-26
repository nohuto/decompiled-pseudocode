/*
 * XREFs of NdisCoGetTapiCallId @ 0x1C00B7E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisCoGetTapiCallId(NDIS_HANDLE NdisVcHandle, PVAR_STRING TapiCallId)
{
  NDIS_STATUS result; // eax
  __int64 v3; // rax

  TapiCallId->ulUsedSize = 0;
  if ( !NdisVcHandle )
    return -1073676267;
  v3 = *((_QWORD *)NdisVcHandle + 3);
  TapiCallId->ulNeededSize = 32;
  if ( TapiCallId->ulTotalSize < 0x20 )
    return -1073676266;
  TapiCallId->ulStringFormat = 4;
  TapiCallId->ulStringSize = 8;
  TapiCallId->ulStringOffset = 24;
  *(_QWORD *)&TapiCallId[1].ulTotalSize = v3;
  result = 0;
  TapiCallId->ulUsedSize = 32;
  return result;
}

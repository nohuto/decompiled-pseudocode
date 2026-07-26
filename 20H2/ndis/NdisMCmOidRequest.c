/*
 * XREFs of NdisMCmOidRequest @ 0x1C00BA940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5D90 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ndisCoOidRequestToRequest @ 0x1C00B9E68 (ndisCoOidRequestToRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BA3F0 (NdisCoOidRequestComplete.c)
 */

NDIS_STATUS __stdcall NdisMCmOidRequest(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST NdisOidRequest)
{
  char v8; // al
  __int64 v9; // r8
  NDIS_STATUS result; // eax
  __int64 v11; // rdx

  v8 = ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle);
  v9 = 0LL;
  if ( !v8 )
    return -1073741823;
  v11 = 0LL;
  *(_QWORD *)&NdisOidRequest->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
  *(_QWORD *)&NdisOidRequest->NdisReserved[32] = *((_QWORD *)NdisAfHandle + 5);
  if ( NdisVcHandle )
  {
    *(_QWORD *)&NdisOidRequest->NdisReserved[56] = *((_QWORD *)NdisAfHandle + 6);
    v11 = *((_QWORD *)NdisVcHandle + 3);
  }
  if ( NdisPartyHandle )
  {
    *(_QWORD *)&NdisOidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
    v9 = *((_QWORD *)NdisPartyHandle + 2);
  }
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    result = ndisCoOidRequestToRequest(
               (__int64 (__fastcall **)(__int64, __int64, __int64, PVOID))NdisAfHandle + 10,
               *((_QWORD *)NdisAfHandle + 47),
               v11,
               v9,
               (__int64)NdisOidRequest);
  else
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)NdisAfHandle + 46)
                                                                                    + 1152LL))(
               *((_QWORD *)NdisAfHandle + 47),
               v11,
               v9,
               NdisOidRequest);
  if ( result != 259 )
  {
    NdisCoOidRequestComplete(NdisAfHandle, NdisVcHandle, NdisPartyHandle, NdisOidRequest, result);
    return 259;
  }
  return result;
}

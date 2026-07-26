/*
 * XREFs of NdisCoOidRequestComplete @ 0x1C00BA3F0
 * Callers:
 *     NdisCoOidRequest @ 0x1C00B9F90 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BA890 (NdisCoRequestComplete.c)
 *     NdisMCmOidRequest @ 0x1C00BA940 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5BDC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 */

void __stdcall NdisCoOidRequestComplete(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  __int64 v5; // rax
  void (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v9; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)&OidRequest->NdisReserved[32];
  if ( v5 )
  {
    v8 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v5 + 1144);
    goto LABEL_6;
  }
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    v8 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)NdisAfHandle + 4) + 128LL);
LABEL_6:
    v8(
      *(_QWORD *)&OidRequest->NdisReserved[64],
      *(_QWORD *)&OidRequest->NdisReserved[56],
      *(_QWORD *)&OidRequest->NdisReserved[40]);
    goto LABEL_7;
  }
  v9 = *(_QWORD *)&OidRequest->NdisReserved[24];
  *(_QWORD *)(v9 + 60) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.OutputBufferLength;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
    (unsigned int)Status,
    *(_QWORD *)&OidRequest->NdisReserved[64],
    *(_QWORD *)&OidRequest->NdisReserved[56],
    *(_QWORD *)&OidRequest->NdisReserved[40],
    v9);
  ExFreePoolWithTag(OidRequest, 0);
LABEL_7:
  ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
}

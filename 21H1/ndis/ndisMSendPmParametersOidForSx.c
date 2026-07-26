/*
 * XREFs of ndisMSendPmParametersOidForSx @ 0x1C005B4FC
 * Callers:
 *     ?ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D084 (-ndisWdfSendPmParametersForAoAc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0083758 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C0083810 (ndisWdmSendOidPmParametersForSx.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114BA0 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForSx(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  struct _NDIS_OID_REQUEST v5; // [rsp+30h] [rbp-D0h] BYREF

  memset(&v5, 0, 0xF8uLL);
  *(_DWORD *)&v5.NdisReserved[16] |= 8u;
  *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
  v5.Header = (NDIS_OBJECT_HEADER)15466902;
  v5.DATA.QUERY_INFORMATION.Oid = -50265847;
  *(_QWORD *)&v5.RequestType = 1LL;
  v5.DATA.QUERY_INFORMATION.InformationBuffer = a2;
  v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
  return ndisQuerySetMiniportEx(a1, 0LL, &v5, 0, 0LL, 0LL);
}

/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C0118280
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int16 a2,
        _WORD *a3,
        _WORD *a4)
{
  __int64 result; // rax
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF
  _TBYTE v10; // [rsp+140h] [rbp+40h] BYREF

  memset(&v9.Header.Revision, 0, 0xF7uLL);
  *(_QWORD *)((char *)&v10 + 1) = 0LL;
  HIBYTE(v10) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x63u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1);
  *(_DWORD *)((char *)&v10 + 6) = 0;
  LODWORD(v10) = 655744;
  WORD2(v10) = a2;
  memset(&v9, 0, 0xF8uLL);
  *(_DWORD *)&v9.NdisReserved[16] |= 8u;
  v9.PortNumber = 0;
  *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
  v9.Header = (NDIS_OBJECT_HEADER)15466902;
  v9.DATA.QUERY_INFORMATION.InformationBuffer = &v10;
  v9.RequestType = NdisRequestMethod;
  v9.DATA.QUERY_INFORMATION.Oid = 66135;
  v9.DATA.QUERY_INFORMATION.InformationBufferLength = 10;
  *(_QWORD *)&v9.DATA.METHOD_INFORMATION.OutputBufferLength = 10LL;
  result = ndisQuerySetMiniport(a1, 0LL, &v9, 0, 0LL);
  if ( !(_DWORD)result )
  {
    *a3 = WORD3(v10);
    *a4 = HIWORD(v10);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qL(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0x1Au,
             0x64u,
             (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
             (char)a1,
             result);
  return result;
}

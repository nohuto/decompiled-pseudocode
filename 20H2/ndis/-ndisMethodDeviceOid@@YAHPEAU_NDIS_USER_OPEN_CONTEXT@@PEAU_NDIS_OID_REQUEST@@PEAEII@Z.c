/*
 * XREFs of ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C006C118
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1C003E5E0 (ndisIsOidAllowedFromUsermode.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisMethodDeviceOid(
        struct _NDIS_USER_OPEN_CONTEXT *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // ecx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  struct _NDIS_MINIPORT_BLOCK *v13; // rsi
  int v14; // r8d
  int v15; // ecx

  if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)a3) )
    return 3221225506LL;
  v11 = (unsigned int)(v9 - 66086);
  if ( (unsigned int)v11 > 0x22 )
    return 3221225659LL;
  v12 = 0x630040019LL;
  if ( !_bittest64(&v12, v11) )
    return 3221225659LL;
  if ( a4 < 8 || a5 < 8 )
    return 3221291029LL;
  v13 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->RequestType = NdisRequestMethod;
  v15 = *(_DWORD *)a3;
  a2->DATA.QUERY_INFORMATION.Oid = *(_DWORD *)a3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)a3 + 1);
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a3 + 8;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a4 - 8;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a5 - 8;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v14,
      0x1Bu,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a2,
      v15,
      v13);
  return ndisQuerySetMiniportEx(v13, 0LL, a2, 0, 0LL, 0LL);
}

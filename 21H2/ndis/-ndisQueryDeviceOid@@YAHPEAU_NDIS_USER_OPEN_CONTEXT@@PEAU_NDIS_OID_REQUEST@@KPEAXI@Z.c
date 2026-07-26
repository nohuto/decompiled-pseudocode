/*
 * XREFs of ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008F40
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0013018 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006CEF0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisQueryDeviceOid(
        struct _NDIS_USER_OPEN_CONTEXT *a1,
        struct _NDIS_OID_REQUEST *a2,
        NDIS_OID a3,
        void *a4,
        UINT a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  int v9; // edx
  int v10; // r8d

  v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  a2->PortNumber = 0;
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->DATA.QUERY_INFORMATION.Oid = a3;
  a2->RequestType = NdisRequestQueryStatistics;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a4;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      v10,
      26,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)a2,
      a3,
      (char)v5);
  }
  return ndisQuerySetMiniportEx(v5, 0LL, a2, 0, 0LL, 0LL);
}

/*
 * XREFs of ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00828D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015D64 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __fastcall ndisMediaDisconnectWorker(_QWORD *P)
{
  __int64 v1; // rbx
  POWER_STATE v3; // edi
  POWER_STATE v4; // r14d
  struct _NDIS_OID_REQUEST v5; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+130h] [rbp+30h] BYREF
  int v7; // [rsp+140h] [rbp+40h]

  v1 = P[4];
  memset(&v5, 0, 0xF8uLL);
  v6 = 0LL;
  v7 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x15u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4420) & 8) != 0 )
  {
    v3.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 1272);
    v4.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 1108);
    LODWORD(v6) = 1311360;
    HIDWORD(v6) = 1;
    memset(&v5, 0, 0xF8uLL);
    *(_DWORD *)&v5.NdisReserved[16] |= 8u;
    v5.PortNumber = 0;
    *(_QWORD *)&v5.NdisReserved[32] = &ndisIntReqGeneric;
    v5.Header = (NDIS_OBJECT_HEADER)15466902;
    v5.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
    v5.DATA.QUERY_INFORMATION.Oid = -50265847;
    v5.RequestType = NdisRequestSetInformation;
    v5.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
    if ( !(unsigned int)ndisQuerySetMiniportEx((struct _NDIS_MINIPORT_BLOCK *)v1, 0LL, &v5, 0, 0LL, 0LL) )
    {
      *(_DWORD *)(v1 + 1332) = *(_DWORD *)(v1 + 1268);
      if ( v3.SystemState >= v4.SystemState )
        v3.SystemState = v4.SystemState;
      ndisRequestDeviceLowPower(
        (struct _NDIS_MINIPORT_BLOCK *)v1,
        v3,
        (PREQUEST_POWER_COMPLETE)ndisMediaDisconnectComplete,
        (PVOID)v1,
        NdisMEventDx_D3DTimeout);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0xBu);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x16u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      v1);
}

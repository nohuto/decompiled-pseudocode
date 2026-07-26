/*
 * XREFs of ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011F660
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038794 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B030 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008FD88 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  int v4; // eax
  char v5[8]; // [rsp+28h] [rbp-D8h]
  struct _NDIS_OID_REQUEST v6; // [rsp+30h] [rbp-D0h] BYREF

  memset(&v6, 0, 0xF8uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x75u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      MiniportAdapterHandle);
  if ( ndisUpdatePMCurrentCapabilities(MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (MiniportAdapterHandle->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
    {
      v6.PortNumber = 0;
      *(_DWORD *)&v6.NdisReserved[16] |= 0x100008u;
      *(_QWORD *)&v6.NdisReserved[32] = &ndisIntReqGeneric;
      v6.Header = (NDIS_OBJECT_HEADER)15466902;
      v6.DATA.QUERY_INFORMATION.InformationBuffer = &MiniportAdapterHandle->PMCurrentParameters;
      v6.DATA.QUERY_INFORMATION.Oid = -50265847;
      v6.RequestType = NdisRequestSetInformation;
      v6.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
      v4 = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, &v6, 0, 0LL);
      if ( v4 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v5 = v4;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x76u,
            (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
            *(_QWORD *)v5);
        }
      }
    }
    if ( (MiniportAdapterHandle->MajorNdisVersion > 6u
       || MiniportAdapterHandle->MajorNdisVersion == 6 && MiniportAdapterHandle->MinorNdisVersion >= 0x14u)
      && (MiniportAdapterHandle->PMCurrentParameters.EnabledWoLPacketPatterns & 2) != 0 )
    {
      ndisAddWoLMagicPacket(MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport(MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x77u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      MiniportAdapterHandle);
}

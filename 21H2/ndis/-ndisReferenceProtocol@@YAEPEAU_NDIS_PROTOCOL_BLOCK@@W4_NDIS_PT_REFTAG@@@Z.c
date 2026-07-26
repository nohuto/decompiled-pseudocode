/*
 * XREFs of ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C00291EC
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009743C (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00988C0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010367C (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D90 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010A01C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C011D290 (-ndisPDReferenceClientDriver@@YAEPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCA8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapterEx @ 0x1C012E610 (NdisOpenAdapterEx.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C013A698 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AE00 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     WPP_RECORDER_SF_DqlD @ 0x1C0029270 (WPP_RECORDER_SF_DqlD.c)
 */

bool __fastcall ndisReferenceProtocol(struct _NDIS_PROTOCOL_BLOCK *a1, unsigned __int8 a2)
{
  bool v2; // bl
  int v3; // r9d
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v2 = ndisReferenceRefEx(&a1->Ref.SpinLock, a2, (enum _NDIS_REFERENCE_STATUS *)&v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqlD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Ref.Closing, a1->Ref.ReferenceCount, v3);
  return v2;
}

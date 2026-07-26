/*
 * XREFs of ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C001549C
 * Callers:
 *     ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005FCB4 (-ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C005FE3C (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisMNetPnPEvent @ 0x1C0080EE0 (NdisMNetPnPEvent.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00817C4 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0081E48 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x1C00FB180 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E194 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C001579C (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00188E4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C00190F0 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001ABB8 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B908 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C00FDDD0 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebp
  int *Buffer; // rsi
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rsi
  unsigned int v9; // edi
  int v10; // edx
  struct _NET_PNP_EVENT_NOTIFICATION v12; // [rsp+40h] [rbp-E8h] BYREF

  memset(&v12, 0, sizeof(v12));
  NetEvent = a2->NetPnPEvent.NetEvent;
  Buffer = (int *)a2->NetPnPEvent.Buffer;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x35u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      a2->NetPnPEvent.NetEvent);
  ndisInitializeNetPnPEvent(&v12, 0LL);
  ndisShallowCopyNetPnPEvent(&v12, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_15;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_15;
  if ( NetEvent == NetEventSetPower && *Buffer > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12.Flags |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(a1, 0LL, FPNPREF_DPNPNOTIFYT);
  v8 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_15:
    v9 = ndisPnPNotifyAllTransports(a1, &v12);
  }
  else
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, &v12);
    ndisDereferenceRef(&v8->PnPRef.SpinLock, 7u);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      54,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      NetEvent,
      v9);
  return v9;
}

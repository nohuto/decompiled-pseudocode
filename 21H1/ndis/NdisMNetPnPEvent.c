/*
 * XREFs of NdisMNetPnPEvent @ 0x1C0080800
 * Callers:
 *     NdisIMNotifyPnPEvent @ 0x1C0080770 (NdisIMNotifyPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00154DC (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019130 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B6C8 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C007F47C (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00810E4 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0081768 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x1C00FDDD0 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 */

NDIS_STATUS __stdcall NdisMNetPnPEvent(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebx
  NDIS_STATUS v5; // esi
  int v6; // edx
  NDIS_STATUS v7; // eax
  struct _NET_PNP_EVENT_NOTIFICATION v9; // [rsp+40h] [rbp-E8h] BYREF

  NetEvent = NetPnPEventNotification->NetPnPEvent.NetEvent;
  v5 = 0;
  memset(&v9, 0, sizeof(v9));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Bu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent);
  if ( NetEvent <= NetEventPortDeactivation )
  {
    if ( NetEvent == NetEventPortDeactivation )
    {
      v7 = ndisPnPPortDeactivation((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NetPnPEventNotification);
LABEL_20:
      v5 = v7;
      goto LABEL_21;
    }
    if ( NetEvent <= NetEventSetPower )
      goto LABEL_21;
    if ( NetEvent > NetEventCancelRemoveDevice && NetEvent != NetEventPnPCapabilities )
    {
      if ( NetEvent != NetEventPortActivation )
        goto LABEL_21;
      v7 = ndisPnPPortActivation((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NetPnPEventNotification);
      goto LABEL_20;
    }
LABEL_19:
    ndisInitializeNetPnPEvent(&v9, 0LL);
    ndisShallowCopyNetPnPEvent(&v9, NetPnPEventNotification);
    v7 = ndisDevicePnPEventNotifyFiltersAndAllTransports((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &v9);
    goto LABEL_20;
  }
  if ( NetEvent < NetEventNDKEnable )
    goto LABEL_21;
  if ( NetEvent <= NetEventNDKDisable || NetEvent == NetEventSwitchActivate )
    goto LABEL_19;
  if ( (unsigned int)(NetEvent - 18) <= 3
    && (*((_BYTE *)MiniportAdapterHandle + 32) > 6u
     || *((_BYTE *)MiniportAdapterHandle + 32) == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u) )
  {
    ndisBindRequest(
      (ULONG_PTR)MiniportAdapterHandle,
      (Ndis::BindEngine *)((char *)MiniportAdapterHandle + 5104),
      (Ndis::BindState *)((char *)MiniportAdapterHandle + 5032),
      (ULONG_PTR)NetPnPEventNotification);
  }
LABEL_21:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent,
      v5);
  return v5;
}

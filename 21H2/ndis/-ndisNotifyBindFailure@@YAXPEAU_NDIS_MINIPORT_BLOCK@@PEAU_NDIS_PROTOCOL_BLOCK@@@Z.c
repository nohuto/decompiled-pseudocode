/*
 * XREFs of ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C003D1FC
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D90 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010A01C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019300 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FE04C (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C010449C (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0105144 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyBindFailure(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  struct _KEVENT v4; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v6; // [rsp+110h] [rbp+10h] BYREF

  memset(&v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      6u,
      0x56u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      a2);
  if ( a2->MajorNdisVersion > 6u || a2->MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(&v5, &v4);
    *((_QWORD *)&v6 + 1) = a1->NetLuid.Value;
    v5.NetPnPEvent.NetEvent = NetEventBindFailed;
    v5.NetPnPEvent.BufferLength = 16;
    v5.NetPnPEvent.Buffer = &v6;
    *(_QWORD *)&v6 = 1048960LL;
    WAIT_FOR_PROTO_MUTEX(a2);
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, &v5);
    RELEASE_PROT_MUTEX(a2);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0x57u,
        (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
        (char)a1,
        a2);
  }
}

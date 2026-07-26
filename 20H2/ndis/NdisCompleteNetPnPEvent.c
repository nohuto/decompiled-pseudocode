/*
 * XREFs of NdisCompleteNetPnPEvent @ 0x1C0080CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteNetPnPEvent(
        NDIS_HANDLE NdisBindingHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification,
        NDIS_STATUS Status)
{
  struct _KEVENT *v6; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      NdisBindingHandle);
  v6 = (struct _KEVENT *)NetPnPEventNotification->NetPnPEvent.NdisReserved[0];
  LODWORD(NetPnPEventNotification->NetPnPEvent.NdisReserved[1]) = Status;
  KeSetEvent(v6, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      NdisBindingHandle);
}

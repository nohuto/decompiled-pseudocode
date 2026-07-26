/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C00BC7B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BC3E0 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xEu,
      (struct _GUID *)&WPP_bd5fc03a90003c7ac8db2d6b419e23f9_Traceguids);
  ndisCoIndicateStatusInternal(
    (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
    (__int64)NdisVcHandle,
    StatusIndication);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xFu,
      (struct _GUID *)&WPP_bd5fc03a90003c7ac8db2d6b419e23f9_Traceguids);
}

/*
 * XREFs of NdisMCoIndicateStatus @ 0x1C00BC1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BBF20 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  struct _NDIS_STATUS_INDICATION v9; // [rsp+30h] [rbp-B8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_bd5fc03a90003c7ac8db2d6b419e23f9_Traceguids);
  memset(&v9, 0, sizeof(v9));
  v9.StatusBufferSize = StatusBufferSize;
  v9.Header = (_NDIS_OBJECT_HEADER)7340440;
  v9.SourceHandle = MiniportAdapterHandle;
  v9.StatusCode = GeneralStatus;
  v9.StatusBuffer = StatusBuffer;
  ndisCoIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, (__int64)NdisVcHandle, &v9);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xDu,
      (struct _GUID *)&WPP_bd5fc03a90003c7ac8db2d6b419e23f9_Traceguids);
}

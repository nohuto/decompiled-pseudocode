/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C0060BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x16u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      MiniportAdapterHandle);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x17u,
        (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
        MiniportAdapterHandle);
  }
}

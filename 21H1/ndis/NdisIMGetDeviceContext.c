/*
 * XREFs of NdisIMGetDeviceContext @ 0x1C0137920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x38u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      MiniportAdapterHandle);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x39u,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        (char)MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 247));
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 247);
}

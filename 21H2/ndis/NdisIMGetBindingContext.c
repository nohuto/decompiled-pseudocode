/*
 * XREFs of NdisIMGetBindingContext @ 0x1C00669A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetBindingContext(NDIS_HANDLE NdisBindingHandle)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)NdisBindingHandle + 2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Au,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      NdisBindingHandle);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x3Bu,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        NdisBindingHandle);
  }
  return *(NDIS_HANDLE *)(v1 + 1976);
}

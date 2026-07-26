/*
 * XREFs of NdisFPauseComplete @ 0x1C006A310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Bu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Cu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      NdisFilterHandle);
}

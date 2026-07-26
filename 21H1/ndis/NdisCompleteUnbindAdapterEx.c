/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C013ACA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x46u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x47u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      UnbindContext);
}

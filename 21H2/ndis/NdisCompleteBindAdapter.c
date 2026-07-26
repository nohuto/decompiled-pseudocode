/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C00C1150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  LONG result; // eax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_a2c7eab80dac31484115c857ecd41b7b_Traceguids,
      a1);
  *(_DWORD *)(a1 + 88) = a2;
  result = KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             6u,
             0xBu,
             (struct _GUID *)&WPP_a2c7eab80dac31484115c857ecd41b7b_Traceguids,
             a1);
  return result;
}

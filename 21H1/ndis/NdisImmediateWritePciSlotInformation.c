/*
 * XREFs of NdisImmediateWritePciSlotInformation @ 0x1C013BBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C02E0 (ndisGetSetBusConfigSpace.c)
 */

__int64 __fastcall NdisImmediateWritePciSlotInformation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(_QWORD *)(a1 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x12u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x13u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      v5);
  return SetBusConfigSpace;
}

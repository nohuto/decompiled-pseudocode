/*
 * XREFs of USBType1SurpriseRemove @ 0x1C0032910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall USBType1SurpriseRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x1Eu,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      a1);
  if ( *(_BYTE *)(v2 + 96) )
    *(_BYTE *)(v2 + 100) = 0;
  return 0LL;
}

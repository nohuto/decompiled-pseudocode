/*
 * XREFs of ndisNsiProviderDetachNsiClient @ 0x1C00B5950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
      a1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0xDu,
        (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
        a1);
  }
  return 0LL;
}

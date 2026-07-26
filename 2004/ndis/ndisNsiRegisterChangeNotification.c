/*
 * XREFs of ndisNsiRegisterChangeNotification @ 0x1C0108E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+30h] [rbp-18h]

  v1 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
      a1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v3 = 0;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x15u,
        (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
        v1,
        v3);
    }
  }
  return 0LL;
}

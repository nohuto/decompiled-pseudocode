/*
 * XREFs of AUDIOSESSION_rundown @ 0x1800CC140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800CBEB0 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 */

__int64 __fastcall AUDIOSESSION_rundown(CServerAudioSessionControl *this)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      this);
  }
  result = CServerAudioSessionControl::RemoveClientReference(this);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x2Au,
             (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
             result);
  }
  return result;
}

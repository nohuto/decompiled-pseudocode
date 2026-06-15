/*
 * XREFs of ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180046FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 */

void __fastcall CServerAudioSessionControl::FinalRelease(CServerAudioSessionControl *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 104LL))((char *)this - 8);
}

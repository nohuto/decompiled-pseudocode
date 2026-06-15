/*
 * XREFs of ?GetChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x1800CC190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SS @ 0x1800CDCDC (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelCount(CServerAudioSessionControl *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 384LL))(
           *((_QWORD *)this + 9),
           a2);
}

/*
 * XREFs of ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002E0B0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800C6A50 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C84B8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::NewState(CPerEndpointVolumeAudioSession *this, __int32 a2)
{
  int v2; // ebx

  v2 = *((_DWORD *)this + 102);
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  CAudioSession::NewState(this, a2);
  if ( v2 == 2 )
  {
    if ( a2 != 2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Eu,
          (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
          *((const wchar_t **)this + 91));
      }
      CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL);
      goto LABEL_14;
    }
  }
  else if ( a2 != 2 )
  {
    goto LABEL_14;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Fu,
      (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      *((const wchar_t **)this + 91));
  }
  CPerEndpointVolumeAudioSession::DestroyVolumeStrip(this);
LABEL_14:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x40u,
      (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      this);
  }
  CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}

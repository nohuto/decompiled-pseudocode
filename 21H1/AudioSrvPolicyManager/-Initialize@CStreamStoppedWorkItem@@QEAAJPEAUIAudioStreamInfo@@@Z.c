/*
 * XREFs of ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180031920
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180028180 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180021048 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStoppedWorkItem::Initialize(CStreamStoppedWorkItem *this, struct IAudioStreamInfo *a2)
{
  CApplicationManager *v4; // rcx
  int ProcessFromStreamInfo; // ebx

  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  ProcessFromStreamInfo = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
                            *((_QWORD *)this + 1),
                            (char *)this + 16);
  if ( ProcessFromStreamInfo < 0
    || (ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(v4, a2, (struct CProcess **)this + 3),
        ProcessFromStreamInfo < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
        ProcessFromStreamInfo);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Initialize", 325, ProcessFromStreamInfo);
  }
  return (unsigned int)ProcessFromStreamInfo;
}

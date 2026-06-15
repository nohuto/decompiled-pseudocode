/*
 * XREFs of ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001BB90
 * Callers:
 *     ?CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A770 (-CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallbac.c)
 * Callees:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::CreateStream(
        CProcessSubmix *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct _RTL_CRITICAL_SECTION *a4)
{
  int Stream; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Stream = CSubmixImpl::CreateStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4);
  v5 = Stream;
  if ( Stream >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)Stream);
  return v5;
}

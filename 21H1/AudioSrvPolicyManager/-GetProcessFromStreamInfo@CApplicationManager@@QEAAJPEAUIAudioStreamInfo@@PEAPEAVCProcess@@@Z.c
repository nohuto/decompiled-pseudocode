/*
 * XREFs of ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180021048
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180028180 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180031920 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo(
        CApplicationManager *this,
        struct IAudioStreamInfo *a2,
        struct CProcess **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CApplicationManager *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = this;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v10 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, CApplicationManager **))v11)(
         v11,
         &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
         &v10);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 926LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(CApplicationManager *, struct CProcess **))(*(_QWORD *)v10 + 24LL))(v10, a3);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 928LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_11:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v5;
}

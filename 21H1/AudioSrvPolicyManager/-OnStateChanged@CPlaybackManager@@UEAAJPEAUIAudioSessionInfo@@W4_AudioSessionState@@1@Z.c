/*
 * XREFs of ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180028660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnStateChanged(
        CPlaybackManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        enum _AudioSessionState a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)this + 2) && (a4 == AudioSessionStateExpired || (_DWORD)a3 == 2) )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)), __int64))(*(_QWORD *)a2 + 24LL))(
           a2,
           lambda_da3c4423bc006446ff702ddfa9ae13f4_::_lambda_invoker_cdecl_,
           a3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9CE,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  return 0LL;
}

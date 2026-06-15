/*
 * XREFs of ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180007130
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000AFC0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStateChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  CDuckingManager *v6; // rcx
  __int64 v10; // rcx

  result = 0LL;
  v6 = (CDuckingManager *)*((_QWORD *)this + 4);
  if ( !v6 || (result = CDuckingManager::OnStateChanged(v6, a2, a3, a4), (int)result >= 0) )
  {
    v10 = *((_QWORD *)this + 3);
    if ( v10 )
      return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, _QWORD, _QWORD))(*(_QWORD *)(v10 + 16)
                                                                                            + 56LL))(
               v10 + 16,
               a2,
               (unsigned int)a3,
               (unsigned int)a4);
  }
  return result;
}

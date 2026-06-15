/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002E754
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18002E670 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x18002E710 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CA740 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CA900 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B5588 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rax
  const char *v5; // r9
  unsigned int LastError; // esi
  __int64 v7; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  if ( !*((_BYTE *)this + 984) || !*((_QWORD *)this + 124) )
    return 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1000);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 25);
  if ( *((_QWORD *)this + 130) )
  {
LABEL_13:
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool + 8LL))(
         ThreadPool,
         CPerStreamVolumeAudioSession::PersistanceTimerCallback,
         this);
  *((_QWORD *)this + 130) = v4;
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
           ThreadPool,
           CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed,
           this);
    *((_QWORD *)this + 131) = v7;
    if ( !v7 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x129E,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                    v8);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
        ThreadPool,
        *((_QWORD *)this + 130));
      *((_QWORD *)this + 130) = 0LL;
      goto LABEL_9;
    }
    v10 = -50000000;
    v11 = -1;
    _InterlockedIncrement((volatile signed __int32 *)this + 10);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 130),
      &v10,
      0LL,
      100);
    goto LABEL_13;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x1297,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                v5);
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  return LastError;
}

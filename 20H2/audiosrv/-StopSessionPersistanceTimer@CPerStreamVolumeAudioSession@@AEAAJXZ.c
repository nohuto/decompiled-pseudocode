/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002EA9C
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002E030 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18002E670 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C6EF0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800C9860 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180067C00 (-Release@CUnknown@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rbx

  if ( *((_BYTE *)this + 984) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1000);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 25);
    if ( *((_QWORD *)this + 130) )
    {
      v4 = _InterlockedExchange64((volatile __int64 *)this + 130, 0LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(
        ThreadPool,
        v4,
        1LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v4);
      if ( *((_QWORD *)this + 131) )
      {
        (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
        *((_QWORD *)this + 131) = 0LL;
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}

/*
 * XREFs of ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800C8018
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CE668 (--1CAudioSessionManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::ForceExpire(CAudioSession *this)
{
  __int64 v2; // rdx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x49u,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  *((_DWORD *)this + 102) = 2;
  if ( this != (CAudioSession *)-616LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  v2 = *((_QWORD *)this + 76);
  if ( v2 )
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
      ThreadPool,
      v2,
      0LL);
}

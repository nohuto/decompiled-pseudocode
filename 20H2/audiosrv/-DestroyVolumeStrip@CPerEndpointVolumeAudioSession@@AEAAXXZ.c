/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800C6A50
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C6E50 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C90D0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800CB490 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(CPerEndpointVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 992);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      this,
      *((_QWORD *)this + 129));
  }
  v3 = *((_QWORD *)this + 129);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 240LL))(v3, (char *)this + 984);
    v4 = *((_QWORD *)this + 129);
    if ( v4 )
    {
      *((_QWORD *)this + 129) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}

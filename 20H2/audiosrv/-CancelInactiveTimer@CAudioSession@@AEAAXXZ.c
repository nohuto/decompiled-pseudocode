/*
 * XREFs of ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800457BC
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800456F0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

void __fastcall CAudioSession::CancelInactiveTimer(CAudioSession *this)
{
  __int64 v2; // rdx

  if ( *((_QWORD *)this + 75) )
  {
    v2 = *((_QWORD *)this + 75);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, this);
      v2 = *((_QWORD *)this + 75);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v2,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 75),
      1LL);
  }
}

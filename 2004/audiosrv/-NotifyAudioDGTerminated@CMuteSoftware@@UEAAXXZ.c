/*
 * XREFs of ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1800BEC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072424 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::NotifyAudioDGTerminated(CMuteSoftware *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}

/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x1800C0650
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071964 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::NotifyAudioDGTerminated(CVolumeSoftware *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Au,
      (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
  if ( this != (CVolumeSoftware *)-256LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
}

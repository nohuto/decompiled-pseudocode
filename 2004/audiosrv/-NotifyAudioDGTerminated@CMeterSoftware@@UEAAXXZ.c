/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180046D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180046D90 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b909e168dacd373727fcf23ad3479388_Traceguids, this);
  }
  EnterCriticalSection(this + 1);
  ATL::CComPtrBase<IAudioMeter>::Release(&this->SpinCount);
  if ( this != (struct _RTL_CRITICAL_SECTION *)-40LL )
    LeaveCriticalSection(this + 1);
}

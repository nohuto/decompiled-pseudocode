/*
 * XREFs of ExAllocateTimer @ 0x14035BCA0
 * Callers:
 *     WdtpAllocateTimer @ 0x14070B0A0 (WdtpAllocateTimer.c)
 *     WdipSemStartTimeoutCheck @ 0x140784C8C (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x14078C290 (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093ADC4 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140A394EC (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14035BCD0 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

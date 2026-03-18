/*
 * XREFs of ExAllocateTimer @ 0x140275AF0
 * Callers:
 *     WdtpAllocateTimer @ 0x140649AB0 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x14078E160 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x14079A664 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093C064 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140A3935C (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140275B20 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

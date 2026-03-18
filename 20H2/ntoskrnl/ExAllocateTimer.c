/*
 * XREFs of ExAllocateTimer @ 0x14033CA60
 * Callers:
 *     WdtpAllocateTimer @ 0x1406F4D30 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x14079A8A0 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x1407A9994 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140A3F33C (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14033CA90 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

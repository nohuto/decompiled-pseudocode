/*
 * XREFs of ExAllocateTimer @ 0x140280410
 * Callers:
 *     WdtpAllocateTimer @ 0x1406776C0 (WdtpAllocateTimer.c)
 *     WdipSemStartTimeoutCheck @ 0x1407990E8 (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x1407A4DC0 (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F664 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140A3CEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140280440 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

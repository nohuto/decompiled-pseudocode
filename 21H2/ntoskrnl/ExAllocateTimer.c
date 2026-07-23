/*
 * XREFs of ExAllocateTimer @ 0x14026E650
 * Callers:
 *     WdtpAllocateTimer @ 0x14066AE00 (WdtpAllocateTimer.c)
 *     WdipSemStartTimeoutCheck @ 0x1407992E8 (WdipSemStartTimeoutCheck.c)
 *     CreateTlgAggregateSession @ 0x1407A4FC0 (CreateTlgAggregateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F834 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14026E680 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

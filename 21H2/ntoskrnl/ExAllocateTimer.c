/*
 * XREFs of ExAllocateTimer @ 0x1402D5B50
 * Callers:
 *     WdtpAllocateTimer @ 0x14074F848 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x1408281D8 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x14083F5FC (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     ExpInitSystemPhase1 @ 0x140AFCEF0 (ExpInitSystemPhase1.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x1402D5B80 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}

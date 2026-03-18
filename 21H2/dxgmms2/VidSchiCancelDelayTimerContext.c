/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C001440C
 * Callers:
 *     VidSchFlushContext @ 0x1C009A2F0 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00F2EA8 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C0014480 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(__int64 a1, struct _KTIMER *a2)
{
  KIRQL v3; // bl

  if ( !KeCancelTimer(a2 + 8) )
    KeFlushQueuedDpcs();
  v3 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, a2, 0LL, 0LL);
  KeLowerIrql(v3);
}

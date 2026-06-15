/*
 * XREFs of ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800F02B4
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B8878 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSebNotifier::CancelDeferredSebReferenceRelease(CSebNotifier *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 12), 1);
  }
}

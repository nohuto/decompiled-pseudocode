/*
 * XREFs of sub_1C00412E4 @ 0x1C00412E4
 * Callers:
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 */

void __fastcall sub_1C00412E4(__int64 a1)
{
  KIRQL v2; // bl
  _DWORD *v3; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  v3 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 8, 1919312716, *((unsigned __int8 *)v3 + 2480), 0LL);
  if ( *((_BYTE *)v3 + 2480) )
  {
    *((_BYTE *)v3 + 2480) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v2);
    sub_1C001B88C(a1, a1);
    KeWaitForSingleObject(v3 + 622, Executive, 0, 0, 0LL);
  }
  else
  {
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v2);
  }
}

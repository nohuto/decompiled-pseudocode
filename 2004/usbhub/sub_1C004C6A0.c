/*
 * XREFs of sub_1C004C6A0 @ 0x1C004C6A0
 * Callers:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C0003770 @ 0x1C0003770 (sub_1C0003770.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C004C6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  KIRQL v9; // bl

  sub_1C000FD80(a1, 1024, 1970032689, a2, a3);
  if ( a5 )
  {
    sub_1C000FD80(a1, 1024, 1970032691, v8, a3);
    *(_DWORD *)(a3 + 416) = 0;
    sub_1C0003770(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
    *(_DWORD *)(a3 + 416) = 0;
    sub_1C000FD80(a1, 1024, 1970032690, a2, a3);
    sub_1C0003770(a1, a2, 0LL, 0x7050444Fu);
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
  }
}

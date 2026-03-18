/*
 * XREFs of sub_1C00180B8 @ 0x1C00180B8
 * Callers:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C00336FC @ 0x1C00336FC (sub_1C00336FC.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C00180B8(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v4 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  sub_1C000FD80(a1, 16, 1685213779, *(int *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
